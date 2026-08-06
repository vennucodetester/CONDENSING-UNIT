"""Physics invariants that hold for ANY correct refrigeration cycle.

WHY THIS FILE EXISTS (2026-08-05, task T7 of TASKS.md)

Two structural defects have now survived multiple sessions in this project, and BOTH
were invisible to every check that existed at the time:

  1. `CoilAirSide` was plumbed CO-CURRENT. Air-side effectiveness was capped near half
     its true value. `res_energy_w` read 0.00 W throughout, because energy was not being
     LOST -- the transfer was BOUNDED. A conservation check cannot see a bound.
  2. The same component's per-cell law was an unbounded central difference. At high NTU
     it drove the air PAST the wall temperature (effectiveness 1.84 at 100x UA) and went
     oscillatory above NTU_cell = 2. Again perfectly energy-conserving, and again wrong.

The lesson is that conservation residuals are necessary and nowhere near sufficient. The
checks below are the ones that would have caught both: they bound EFFECTIVENESS and
DIRECTION, not just totals. They are deliberately loose -- they assert physical law, not
calibration, so they must never need adjusting when a parameter is tuned.

If one of these fails, the physics is wrong. Do not relax the bound. (ENGINEERING
DIRECTIVES 2.3, HANDOFF section 7.7.)
"""
import unittest
from pathlib import Path

from CoolProp.CoolProp import PropsSI as P
from fmpy import simulate_fmu

ROOT = Path(__file__).resolve().parents[1]
FMU = ROOT / "fmu" / "RefrigerationTrainer.fmu"
R = "propane"

T_BOX_K = 255.37   # air entering the evaporator
T_AMB_K = 308.04   # air entering the condenser


def simulate(**overrides):
    sv = dict(evap_airflow_m3_s=0.15, condenser_airflow_m3_s=0.1203,
              txv_opening_frac=0.50, txv_size_frac=1.0, compressor_speed_frac=1.0)
    sv.update(overrides)
    r = simulate_fmu(str(FMU), start_values=sv, stop_time=1500.0,
                     output_interval=7.5, validate=False)
    return {k: float(r[k][-1]) for k in r.dtype.names}


class PhysicsInvariants(unittest.TestCase):
    """Laws, not calibration. Every bound here is loose on purpose."""

    @classmethod
    def setUpClass(cls):
        cls.n = simulate()

    # ---------------------------------------------------------------- direction
    def test_heat_flows_down_the_temperature_gradient(self):
        """The evaporator must absorb and the condenser must reject.

        A sign error in `CoilAirSide.port.phi` once made the evaporator HEAT the box and
        the condenser absorb 13.7 kW, and the loop still ran."""
        self.assertGreater(self.n["Q_evap_w"], 0.0, "evaporator must absorb heat")
        self.assertLess(self.n["Q_cond_w"], 0.0, "condenser must reject heat")
        self.assertGreater(self.n["W_comp_w"], 0.0, "compressor must consume work")

    def test_the_cycle_lifts_pressure_and_temperature(self):
        self.assertGreater(self.n["p_discharge_pa"], self.n["p_suction_pa"])
        self.assertGreater(self.n["T_cond_sat_k"], self.n["T_evap_sat_k"])
        self.assertLess(self.n["T_evap_sat_k"], T_BOX_K,
                        "evaporating temperature must sit below the air it cools")
        self.assertGreater(self.n["T_cond_sat_k"], T_AMB_K,
                           "condensing temperature must sit above the air it rejects to")

    # ----------------------------------------------------------- effectiveness
    # THE CHECKS THAT CATCH STRUCTURAL BOUNDS.  Air-side effectiveness is
    #   eps = (T_air_in - T_air_out) / (T_air_in - T_refrigerant)
    # which must lie in (0, 1] for a real exchanger.  A co-current coil is capped well
    # below 1; an unbounded discretisation exceeds 1.  Both are caught here.
    def test_evaporator_air_side_effectiveness_is_physical(self):
        eps = ((self.n["T_air_in_evap_k"] - self.n["T_air_off_evap_k"])
               / (self.n["T_air_in_evap_k"] - self.n["T_evap_sat_k"]))
        self.assertGreater(eps, 0.0, "air must be cooled")
        self.assertLessEqual(eps, 1.0,
                             f"air left the evaporator BELOW the refrigerant (eps={eps:.3f}) "
                             "- the per-cell law is unbounded")

    def test_condenser_air_side_effectiveness_is_physical(self):
        # Referenced to the SATURATION temperature, so values slightly above 1 are legal
        # here: the refrigerant enters superheated (108-163 C measured), and in a
        # counter-flow coil the air leaves at that end.  See docs/TRAP_RESOLUTION.md.
        # The bound is against the true hot end, the discharge temperature.
        eps = ((self.n["T_air_off_cond_k"] - T_AMB_K)
               / (self.n["T_discharge_k"] - T_AMB_K))
        self.assertGreater(eps, 0.0, "air must be heated")
        self.assertLessEqual(eps, 1.0,
                             f"air left the condenser hotter than the discharge gas (eps={eps:.3f})")

    # -------------------------------------------------------------- components
    def test_compressor_isentropic_efficiency_is_in_range(self):
        """0 < eta <= 1.  A measured strap-on thermocouple gave 1.09 on the real
        machine, which is how that sensor was convicted (HANDOFF section 3)."""
        h_suc = P("H", "P", self.n["p_suction_pa"], "T", self.n["T_suction_k"], R)
        s_suc = P("S", "P", self.n["p_suction_pa"], "T", self.n["T_suction_k"], R)
        h_dis = P("H", "P", self.n["p_discharge_pa"], "T", self.n["T_discharge_k"], R)
        h_is = P("H", "P", self.n["p_discharge_pa"], "S", s_suc, R)
        eta = (h_is - h_suc) / (h_dis - h_suc)
        self.assertGreater(eta, 0.0)
        self.assertLessEqual(eta, 1.0,
                             f"compressor beat the isentropic bound (eta={eta:.3f})")

    def test_discharge_is_hotter_than_condensing(self):
        self.assertGreater(self.n["T_discharge_k"], self.n["T_cond_sat_k"],
                           "discharge gas must leave superheated")

    def test_superheat_and_subcooling_are_non_negative(self):
        self.assertGreaterEqual(self.n["superheat_k"], 0.0)
        self.assertGreaterEqual(self.n["subcooling_k"], 0.0)

    def test_liquid_leaving_the_condenser_stays_above_the_cooling_air(self):
        """Subcooling is bounded by the air it rejects into.  This is the check that
        would have flagged an over-effective subcooled zone."""
        self.assertGreater(self.n["T_liquid_k"], T_AMB_K - 1.0,
                           "liquid was cooled below the entering air")

    # ------------------------------------------------------------ conservation
    # Necessary but NOT sufficient -- see the module docstring.  Kept because they are
    # cheap and they do catch leaks.
    def test_mass_and_energy_residuals_close(self):
        # `sum_mass_flow_kg_s` is comp.InFlow.m_flow + txv.InFlow.m_flow, and with
        # ThermoCycle's sign convention BOTH inflows are positive, so at a converged
        # steady state it equals 2*mdot, NOT zero.  The name says residual and the
        # quantity is a sum.  What it actually proves is that the two component flows
        # AGREE, so that is what is asserted here.  (Found 2026-08-05 writing this file;
        # the variable was renamed from `res_mass_kg_s` on 2026-08-06 to match.)
        self.assertAlmostEqual(self.n["sum_mass_flow_kg_s"], 2.0 * self.n["m_dot_kg_s"],
                               delta=1e-5,
                               msg="compressor and valve mass flows disagree")
        self.assertLess(abs(self.n["res_energy_w"]), 5.0)

    def test_energy_balance_matches_the_component_duties(self):
        gap = self.n["Q_evap_w"] + self.n["W_comp_w"] + self.n["Q_suction_line_w"] \
            + self.n["Q_cond_w"]
        self.assertLess(abs(gap), 0.05 * abs(self.n["Q_cond_w"]),
                        f"first law: absorbed + work != rejected, gap {gap:.1f} W")

    # ------------------------------------------------- property-envelope sanity
    def test_states_stay_inside_the_propane_envelope(self):
        """Non-linear solvers converge on non-physical roots -- this project has seen
        enthalpies 3x outside the phase envelope (ENGINEERING DIRECTIVES 1.3)."""
        p_crit, T_crit = P("PCRIT", R), P("TCRIT", R)
        for k in ("p_suction_pa", "p_discharge_pa", "p_cond_in_pa", "p_evap_out_pa"):
            self.assertGreater(self.n[k], 1e4, f"{k} below 0.1 bar")
            self.assertLess(self.n[k], p_crit, f"{k} above the critical pressure")
        # Only the SATURATION temperatures are bounded by T_crit.  A superheated vapour
        # above the critical temperature at subcritical pressure is ordinary gas -- the
        # discharge runs at 105 C against propane's 96.7 C critical point, quite legally.
        for k in ("T_evap_sat_k", "T_cond_sat_k"):
            self.assertLess(self.n[k], T_crit, f"{k} above the critical temperature")
        for k in ("T_suction_k", "T_discharge_k", "T_liquid_k",
                  "T_evap_sat_k", "T_cond_sat_k"):
            self.assertGreater(self.n[k], 200.0, f"{k} below 200 K")
            self.assertLess(self.n[k], 473.15, f"{k} above 200 C - not a propane machine")

    def test_charge_is_positive_and_plausible(self):
        """Coils only -- no lines, drier, shell or oil.  110 g is the SYSTEM charge, so
        the coil inventory must be a fraction of it."""
        self.assertGreater(self.n["M_charge_kg"], 0.0)
        self.assertLess(self.n["M_charge_kg"], 0.110)

    # ------------------------------------------------------- monotonic response
    def test_more_condenser_air_lowers_head_pressure(self):
        """Direction only, no magnitude.  A structurally bounded coil goes INERT here,
        which is the signature that caught the co-current defect."""
        cold = simulate(condenser_airflow_m3_s=0.20)
        self.assertLess(cold["p_discharge_pa"], self.n["p_discharge_pa"],
                        "more condenser air must lower head pressure")

    def test_raising_condenser_ua_lowers_head_pressure(self):
        """The UA sensitivity check, made permanent.  Persistent insensitivity to a
        parameter that physics says must matter is itself the diagnostic."""
        big = simulate(UA_cond_nom_w_k=1150.0)
        self.assertLess(big["T_cond_sat_k"], self.n["T_cond_sat_k"] - 0.2,
                        "doubling condenser UA must measurably lower condensing temperature")


if __name__ == "__main__":
    unittest.main()
