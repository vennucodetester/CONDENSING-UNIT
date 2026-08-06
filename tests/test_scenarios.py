"""ACCEPTANCE GATE — physical behaviour of the closed-loop FMU.

WHY THIS FILE WAS REWRITTEN (2026-08-02)
----------------------------------------
The previous version ran every assertion against `DemoAirflowEngine` — the placeholder
correlations. Those tests documented the demo's defects correctly, but they could
**never flip**, no matter how good the Modelica physics became, because they never
touched the FMU. The acceptance gate was therefore unreachable by construction.

These tests run against the FMU. They are the gate:

    The in-app warning banner comes down only when this file passes.

DESIGN RULES FOR THIS FILE
--------------------------
1. **They must be able to fail.** Every assertion is a falsifiable physical claim.
   Do not weaken a bound to make a test green — if it fails, the physics is wrong or
   the claim was wrong. Fix one of those.
2. **Assert convergence before asserting physics.** Mid-transient states do not close
   the energy balance and must not be treated as operating points. `test_reaches_steady_state`
   gates everything else — if it fails, the other results are meaningless.
3. **Skip, never fail, when the FMU is absent.** A missing FMU is "not built yet",
   not "physics is wrong".
4. **Each distinct input set runs once**, cached. FMU runs are slow.

HOW THE FMU IS DRIVEN
---------------------
The controls (`evap_airflow_m3_s`, `txv_opening_frac`, ...) are declared
`causality=parameter, variability=fixed`. They are set through FMPy `start_values`
**before initialisation** and cannot change during a run. Every scenario is therefore
a separate simulation from t=0 to equilibrium.
"""

from __future__ import annotations

import unittest
from functools import lru_cache
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
FMU = ROOT / "fmu" / "RefrigerationTrainer.fmu"

# Long enough to settle, MEASURED not guessed (2026-08-03, windowed-mean criterion):
#     nominal 340 s | D3 cond-restricted 360 s | D11 txv-open 340 s | D1 evap-cut 1090 s
# 1500 gives ~1.4x margin over the D1 worst case. 600 was verdict-identical for the
# other five but reported D1 as "not settled", which is a false negative, not a pass.
# Raising this is only correct if the case is genuinely still converging - measure
# first. A bounded limit cycle does not settle at any STOP_TIME.
# NOTE: STOP_TIME is NOT the cycle bottleneck. A full ./gate.sh is ~4.5 min, of which
# ~3.5 min is the OMC/C rebuild and ~1 min is all six simulations.
STOP_TIME = 1500.0

# Airflows corrected 2026-08-03 to match NEXT_STEPS Step 2 and the model defaults.
# Were 0.45 / 0.55 — the values Step 2 identifies as wrong, the condenser one being
# ~3x more than a single ECM5312DBALAZ fan can produce at the coil's resistance.
# Driving the FMU at an impossible operating point and then asserting about the result
# tests a machine that cannot exist. NO ASSERTION OR BOUND WAS CHANGED — this is the
# operating point only.
NOMINAL = dict(
    evap_airflow_m3_s=0.15,
    condenser_airflow_m3_s=0.1203,
    txv_opening_frac=0.50,
    txv_size_frac=1.0,
    compressor_speed_frac=1.0,
)


SRC_DIR = ROOT / "modelica" / "RefrigerationTrainer"


def _stale_sources() -> list[str]:
    """Model sources newer than the FMU under test.

    A stale FMU is the single most expensive failure mode this project has had: it
    produced a confident "6/6 PASSED" four separate times while the edits under test
    were not in the artifact at all. Twice the source did not even compile. Checking
    mtimes costs nothing and makes the failure impossible rather than merely
    discouraged.
    """
    if not FMU.exists():
        return []
    fmu_mtime = FMU.stat().st_mtime
    return sorted(
        p.name for p in SRC_DIR.glob("*.mo") if p.stat().st_mtime > fmu_mtime
    )


def _fmu_available() -> str | None:
    """Return a skip reason, or None if the FMU can be run."""
    if not FMU.exists():
        return f"FMU not built: {FMU}"
    try:
        import fmpy  # noqa: F401
    except ImportError:
        return "FMPy not installed"
    return None


@lru_cache(maxsize=None)
def _run_cached(items_tuple):
    from fmpy import simulate_fmu

    start_values = dict(NOMINAL)
    start_values.update(dict(items_tuple))

    if "evap_airflow_m3_s" in start_values:
        start_values["coil_evap.V_dot_air_m3_s"] = start_values["evap_airflow_m3_s"]
    if "condenser_airflow_m3_s" in start_values:
        start_values["coil_cond.V_dot_air_m3_s"] = start_values["condenser_airflow_m3_s"]

    res = simulate_fmu(
        str(FMU),
        start_values=start_values,
        stop_time=STOP_TIME,
        output_interval=STOP_TIME / 200.0,
        validate=False,  # OMC emits FMI-invalid Integer variability; see M1d defect 2
    )
    last = res[-1]

    # Settled = mean over the final 100 s vs mean over the preceding 100 s.
    #
    # The previous check compared two ADJACENT 10 s samples, which measures RIPPLE
    # rather than convergence. The proportional TXV law leaves a persistent limit
    # cycle of about +/-0.002 K in superheat that does NOT decay -- still present at
    # t=20000 s -- so adjacent samples reported 2.9e-4 drift on an otherwise settled
    # loop (p_suction drift 0.0002 % per 1000 s). Raising STOP_TIME cannot fix a
    # limit cycle.
    #
    # Window means filter that ripple while remaining sensitive to real drift: a
    # genuine transient moves the window mean, a bounded oscillation does not.
    # The 1e-4 threshold is UNCHANGED. This is stricter about drift, blind to ripple.
    t = res["time"]
    w = 100.0
    tail = t >= (t[-1] - w)
    prev_win = (t >= (t[-1] - 2 * w)) & (t < (t[-1] - w))

    def _settled(name: str) -> bool:
        a = float(res[name][prev_win].mean())
        b = float(res[name][tail].mean())
        if name == "superheat_k":
            # ABSOLUTE tolerance, in K. superheat is a temperature DIFFERENCE and may
            # legitimately sit near zero (1.8 K with the TXV wide open), where relative
            # drift is a category error: the proportional TXV law leaves a ~3 mK limit
            # cycle, which is 1.6e-3 relative at 1.8 K but physically nothing.
            # Measured on D11 (txv=0.75): pressures and mass flow flat to 5 significant
            # figures from t=300 s, while superheat drift read 1.2e-4 / 7.5e-4 / 1.0e-4
            # / 2.5e-5 / 1.5e-3 at t=1000..3000 -- NON-MONOTONIC, so no STOP_TIME fixes
            # it. 0.01 K is ~3x the observed ripple and far below anything a technician
            # could read or that changes a diagnosis.
            return abs(b - a) < 0.01
        return abs(b - a) / max(abs(b), 1e-9) < 1e-4

    watched = ("p_suction_pa", "p_discharge_pa", "m_dot_kg_s", "superheat_k")
    settled = all(_settled(n) for n in watched)
    return {k: float(last[k]) for k in last.dtype.names}, settled


def run(**overrides):
    """Simulate to STOP_TIME and return (final_values, settled_flag).

    `settled` compares the last two output samples; if the states are still moving,
    the caller must not treat the values as an operating point.
    """
    return _run_cached(tuple(sorted(overrides.items())))


class FmuScenarioTest(unittest.TestCase):
    """Physical behaviour of the closed refrigeration loop."""

    def setUp(self):
        stale = _stale_sources()
        if stale:
            raise AssertionError(
                "STALE FMU - refusing to report a result. "
                + FMU.name
                + " was built before these sources changed: "
                + ", ".join(stale)
                + ". Rebuild first: (from modelica/) "
                + "omc build_closed_loop_fmu.mos ; "
                + "cp modelica/ClosedLoopM1eCS.fmu fmu/RefrigerationTrainer.fmu . "
                + "A missing FMU skips (not built yet). A stale one FAILS: it "
                + "silently tests code that is not under test, and has produced "
                + "false 6/6 reports four times."
            )
        reason = _fmu_available()
        if reason:
            self.skipTest(reason)

    # ------------------------------------------------------------------
    # Gate: everything below is meaningless if this fails.
    # ------------------------------------------------------------------
    def test_reaches_steady_state(self):
        """The loop must settle. Mid-transient values are not an operating point.

        This is the precondition for every other test in this file. If it fails,
        increase STOP_TIME — do not relax the other assertions to compensate.
        """
        _, settled = run()
        self.assertTrue(
            settled,
            f"loop had not settled by t={STOP_TIME}s. Raise STOP_TIME; do not "
            "reinterpret mid-transient values as an operating point.",
        )

    # ------------------------------------------------------------------
    # D4 — energy balance. This check has caught real errors twice.
    # ------------------------------------------------------------------
    def test_energy_balance_closes(self):
        """Q_evap must equal mdot * (h_out - h_in) computed from the reported states.

        The demo engine missed this by 62%. A converged physical loop closes it to
        well under 1%. This is the single most diagnostic assertion here: it fails
        whenever states, capacity and mass flow disagree, whatever the cause.
        """
        from CoolProp.CoolProp import PropsSI

        v, settled = run()
        self.assertTrue(settled, "not settled — energy balance is meaningless here")

        p_suc, p_dis = v["p_suction_pa"], v["p_discharge_pa"]
        t_cond_sat = PropsSI("T", "P", p_dis, "Q", 0.5, "R290")
        t_evap_sat = PropsSI("T", "P", p_suc, "Q", 0.5, "R290")

        if v["subcooling_k"] > 0.01:
            h_in = PropsSI("H", "T", t_cond_sat - v["subcooling_k"], "P", p_dis, "R290")
        else:
            h_in = PropsSI("H", "Q", 0.0, "P", p_dis, "R290")

        if v["superheat_k"] > 0.01:
            h_out = PropsSI("H", "T", t_evap_sat + v["superheat_k"], "P", p_suc, "R290")
        else:
            h_out = PropsSI("H", "Q", 1.0, "P", p_suc, "R290")

        q_from_states = v["m_dot_kg_s"] * (h_out - h_in)
        q_reported = v["Q_evap_w"]
        err = abs(q_from_states - q_reported) / max(abs(q_reported), 1e-9)

        self.assertLess(
            err, 0.01,
            f"energy balance open by {err*100:.1f}%: "
            f"states imply {q_from_states:.1f} W, model reports {q_reported:.1f} W",
        )

    # ------------------------------------------------------------------
    # D3 — a high-side fault must reach the low side. THE loop test.
    # ------------------------------------------------------------------
    def test_condenser_restriction_reaches_the_low_side(self):
        """Restricting the condenser must raise head, cut mass flow and RAISE suction.

        Higher head -> higher pressure ratio -> lower compressor volumetric efficiency
        -> less refrigerant moved -> suction pressure climbs.

        The demo engine showed EXACTLY ZERO low-side response. If this passes, the
        refrigerant loop is genuinely closed.
        """
        nom, s1 = run()
        blocked, s2 = run(condenser_airflow_m3_s=NOMINAL["condenser_airflow_m3_s"] * 0.40)
        self.assertTrue(s1 and s2, "not settled")

        self.assertGreater(
            blocked["p_discharge_pa"], nom["p_discharge_pa"],
            "restricting the condenser must raise head pressure",
        )
        # REPLACED 2026-08-03. Was: assertLess(blocked m_dot, nom m_dot),
        # "higher pressure ratio must reduce mass flow". That claim is NOT SOUND.
        #
        # For a fixed-displacement compressor  mdot = eps_v * V_s * N_rot * rho_su.
        # Blocking the condenser raises head AND suction, so rho_su rises too.
        # Measured across the 0.60x perturbation, predicted vs actual agreeing exactly:
        #     PR     +6.99%   ->  eps_v  -4.50%   (the coupling working as designed)
        #     p_suc  +8.32%   ->  rho_su +7.79%
        #     net mdot  +2.94% predicted, +2.94% measured
        # Density wins. Nor can a bigger k_v rescue it: clearance-volume theory
        # eps_v = 1 - C(PR^(1/n) - 1), C~0.04 n~1.15, gives only -1.7% here, i.e.
        # LESS PR-sensitive than our linear form, so density wins by more.
        #
        # The original conflated capacity with mass flow. Blocking a condenser does
        # cut CAPACITY - less subcooling, more flash gas at the evaporator inlet -
        # while mass flow may rise slightly. That is correct refrigeration behaviour.
        # This assertion is the sound form of the same physical claim, and is still
        # falsifiable: it fails if the high side stops affecting evaporator duty.
        self.assertLess(
            blocked["Q_evap_w"], nom["Q_evap_w"],
            "restricting the condenser must reduce evaporator capacity "
            "(less subcooling -> more flash gas at the evaporator inlet)",
        )
        self.assertGreater(
            blocked["p_suction_pa"], nom["p_suction_pa"],
            "THE loop test: a high-side fault must raise suction pressure. "
            "No change here means the low and high sides are not connected.",
        )

    # ------------------------------------------------------------------
    # D11 — the low side must reach the high side (D3 in reverse).
    # ------------------------------------------------------------------
    def test_more_mass_flow_raises_discharge_pressure(self):
        """More refrigerant through the condenser must be rejected, and with fixed size
        and air the coil can only do that by running hotter. Head pressure rises.

        The demo engine moved 74% more refrigerant with zero head change.

        THE LEVER CHANGED 2026-08-06, WITH THE USER'S EXPLICIT APPROVAL. It used to be
        `txv_opening_frac=0.75`. That was wrong once the valve became a real thermostatic
        element, and the claim — not the test — was what needed fixing
        (ENGINEERING_DIRECTIVES 1.7, HANDOFF section 7.7):

          At fixed displacement and speed the COMPRESSOR sets the mass flow,
          mdot = rho_suction * V_s * N * eps_v. A thermostatic valve does not choose the
          flow; it adjusts its stroke to PASS the flow the compressor demands, while
          holding superheat. Opening it can only raise mass flow through suction DENSITY,
          which is worth +0.8 % here — not the +5 % this test requires.

        So the old lever asserted a property of a HAND valve. The legacy law passed only
        because at Kp = 0.04 the operator's command bypassed the element's own feedback.
        `compressor_speed_frac` is the honest lever: speed sets mass flow by definition.

        NOTHING WAS RELAXED. Both assertions and both magnitudes are the originals; only
        the lever moved. Measured at 1.15x speed: mass flow +9.9 %, head +1.6 %.
        The valve keeps a test of its own real authority — see
        test_the_txv_holds_superheat_near_its_setpoint below.
        """
        nom, s1 = run()
        faster, s2 = run(compressor_speed_frac=1.15)
        self.assertTrue(s1 and s2, "not settled")

        self.assertGreater(
            faster["m_dot_kg_s"], nom["m_dot_kg_s"] * 1.05,
            "sanity: running the compressor faster must raise mass flow",
        )
        self.assertGreater(
            faster["p_discharge_pa"], nom["p_discharge_pa"],
            "substantially more mass flow must raise discharge pressure",
        )

    def test_the_txv_holds_superheat_near_its_setpoint(self):
        """The valve's REAL authority: it controls superheat, not mass flow.

        Added 2026-08-06 alongside the lever change above, so that re-pointing that test
        does not leave the trainer's valve control unasserted. The gate must not get
        easier.

        Two claims, and the SECOND is what distinguishes a thermostatic element from the
        hand valve the model used to have:

        1. Turning the screw open lowers the demanded superheat, so settled superheat
           falls and suction pressure rises. (The legacy law also does this, so on its
           own this proves nothing — which is exactly why claim 2 is here.)
        2. The element HOLDS superheat near what it is demanding. A real thermostatic
           valve tracks its setpoint to within a couple of kelvin; the legacy
           proportional law sat 6.9 K above it (8.19 K settled against a 1.27 K target)
           because its gain was pinned low to protect valve authority.

        Measured 2026-08-06 with txv_setpoint_lever = true:
            frac 0.50 -> superheat 2.56 K, setpoint 1.27 K, offset 1.29 K
            frac 0.75 -> superheat 1.82 K, suction +0.75 kPa
        Under the legacy law the offset is 6.92 K, so claim 2 fails there. Verified.
        """
        nom, s1 = run()
        screw_open, s2 = run(txv_opening_frac=0.75)
        self.assertTrue(s1 and s2, "not settled")

        self.assertLess(
            screw_open["superheat_k"], nom["superheat_k"] - 0.3,
            "opening the superheat screw must lower settled superheat",
        )
        self.assertGreater(
            screw_open["p_suction_pa"], nom["p_suction_pa"],
            "a more open valve floods the coil further, so suction pressure must rise",
        )
        self.assertLess(
            abs(nom["superheat_k"] - nom["superheat_set_k"]), 2.0,
            "a thermostatic element must hold superheat near its setpoint; a gain "
            "pinned low enough to fake mass-flow authority cannot",
        )

    # ------------------------------------------------------------------
    # D1 — reduced evaporator airflow. Direction corrected 2026-08-02.
    # ------------------------------------------------------------------
    def test_reduced_evaporator_airflow_does_not_raise_superheat(self):
        """Less airflow means less heat into the refrigerant, so superheat must FALL
        (or be held by the valve closing). It must not rise.

        This is why low evaporator airflow is a liquid-floodback risk. An earlier
        version of the scope asserted the opposite, the demo engine implemented that
        error, and the old test locked it in. See docs/VALIDATION.md D1.
        """
        nom, s1 = run()
        low_air, s2 = run(evap_airflow_m3_s=NOMINAL["evap_airflow_m3_s"] * 0.65)
        self.assertTrue(s1 and s2, "not settled")

        self.assertLess(
            low_air["Q_evap_w"], nom["Q_evap_w"],
            "sanity: less airflow must reduce cooling capacity",
        )
        self.assertLessEqual(
            low_air["superheat_k"], nom["superheat_k"] + 0.5,
            "reduced airflow must not RAISE superheat — it starves the coil of heat, "
            "so superheat falls (or the TXV closes to hold it). Rising superheat here "
            "is defect D1.",
        )

    # ------------------------------------------------------------------
    # D6 — condenser air side must respond to condenser airflow.
    # ------------------------------------------------------------------
    def test_condenser_air_temperature_rise_responds_to_airflow(self):
        """With heat rejection roughly unchanged, cutting condenser airflow must raise
        the air temperature rise across the coil — less air carrying similar heat.

        The demo engine's formula omitted condenser airflow entirely.
        """
        nom, s1 = run()
        low_air, s2 = run(condenser_airflow_m3_s=NOMINAL["condenser_airflow_m3_s"] * 0.60)
        self.assertTrue(s1 and s2, "not settled")

        ambient = 308.04  # T_amb_k default in the model - MUST track it
        rise_nom = nom["T_air_off_cond_k"] - ambient
        rise_low = low_air["T_air_off_cond_k"] - ambient

        self.assertGreater(
            rise_low, rise_nom * 1.15,
            f"cutting condenser airflow to 60% must raise the air temperature rise "
            f"(nominal {rise_nom:.2f} K, reduced {rise_low:.2f} K)",
        )


if __name__ == "__main__":
    unittest.main()
