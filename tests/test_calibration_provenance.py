"""Every calibrated parameter must carry a source. Changing one fails the gate.

WHY (task T12 of TASKS.md, 2026-08-05)

This project has twice calibrated toward a number that was itself wrong -- `k_v = 0.0588`
fitted against a faulty suction transducer, and a condenser tuned against a `T_cond`
that was under suspicion for a day. Both were caught only because someone remembered
where the value came from.

So the rule this file enforces is narrow and mechanical: a calibrated parameter in
`ClosedLoopM1eCS.mo` may not change value unless the table below changes with it, and
the table demands a source for every entry. It is not a physics check -- the physics
checks live in `test_physics_invariants.py`. It is a check against SILENT drift.

If this test fails, do not edit the value in the table to match the model. Ask what the
new value's evidence is, write it in the `source` column, and then update it.
"""
import re
import unittest
from pathlib import Path

MO = Path(__file__).resolve().parents[1] / "modelica" / "RefrigerationTrainer" / "ClosedLoopM1eCS.mo"
SUCTION_MO = Path(__file__).resolve().parents[1] / "modelica" / "RefrigerationTrainer" / "SuctionLine.mo"

# parameter -> (expected value, where the value came from)
# Sources are the ones recorded in HANDOFF.md section 5 and docs/TRAP_RESOLUTION.md.
CALIBRATED = {
    "V_s_cm3":                (20.0,    "ALX440U-DS3B01 compressor nameplate"),
    "N":                      (5,       "grid-converged for capacity: N=10 gives +1.4 % on Q_evap"),
    "T_box_k":                (255.37,  "0 F, CoilDesigner LT sheet; confirmed by measured evaporator inlet medians +0.77 / -1.86 F"),
    "T_amb_k":                (308.04,  "measured `Air Into Cond Right` median 94.80 F"),
    "evap_airflow_m3_s":      (0.15,    "fan curve x coil dP = 318 CFM; independently confirmed at 323 CFM from the air-side energy balance"),
    "condenser_airflow_m3_s": (0.1203,  "air-side energy balance = 255 CFM; lies inside the 0.078-0.137 m3/s interval that closes the balance on BOTH datasets (docs/TRAP_RESOLUTION.md)"),
    "UA_evap_nom_w_k":        (132.8,   "CoilDesigner mean-temperature method. Re-swept 2026-08-05 after the counterflow fix: 132.8 -> 300 moves air-side effectiveness only 0.377 -> 0.439, so it is NOT the binding constraint"),
    "UA_cond_nom_w_k":        (575.0,   "fitted to a 12.95 K approach; T_cond now +3.5 %, air off condenser -0.3 %"),
    "tau_txv":                (60.0,    "a thermostatic bulb is a lump of copper on a suction line: 30-90 s"),
    "superheat_target_k":     (1.27,    "MEASURED coil-outlet superheat. NOT the 22.88 K compressor-inlet value, which includes suction-line gain"),
    "txv_gain_per_k":         (0.50,    "2x the property-derived estimate of 0.25 ((dPsat/dT)/dP_band = 8.7 kPa/K / 35 kPa for propane near -24 C, i.e. a ~2 K proportional band rather than 4 K). Swept 2026-08-06: gain 0.25/0.5/1.0/2.0 gives settled superheat 2.56/1.93/1.60/1.44 K against a measured 1.27 K. 1.0 and 2.0 fit better but are 4-8x the property estimate and buy nothing on T_evap or effectiveness, so 0.5 is the closest-to-physical value meeting the 1.0 K acceptance bar"),
    "txv_screw_span_k":       (6.0,     "superheat setpoint span over full screw travel; only active when txv_setpoint_lever = true"),
    "txv_stroke_ref":         (0.50,    "element mid-stroke at zero superheat error"),
    # Operating inputs -- nominal positions the comparison is scored at.
    "txv_opening_frac":       (0.50,    "nominal screw position; the comparison in scratch/compare_to_measured.py is scored here"),
    "txv_size_frac":          (1.0,     "nominal valve size; Afull 9.6e-8 m2 from the installed element"),
    "compressor_speed_frac":  (1.0,     "nominal speed = 58.33 rev/s (3500 rpm), from the measured 122.9 V 60 Hz supply"),
}

# Structural switches. Flipping one silently changes what the model IS, so each carries
# the evidence for its default rather than just a value.
SWITCHES = {
    "txv_setpoint_lever":        (True,  "ON since 2026-08-06, user-approved. The thermostatic element whose screw moves the SETPOINT: coil superheat 8.19 -> 2.56 K against a measured 1.27 K. It was defaulted OFF for one day because it returned 5/6 on test_more_mass_flow_raises_discharge_pressure, whose claim turned out to be the thing that was wrong: at fixed displacement the COMPRESSOR sets mass flow, so that test now drives compressor_speed_frac. The valve keeps its own test on superheat setpoint tracking. Legacy law still reachable at false"),
    "hot_gas_solenoid_open":     (False, "nominal steady running state, solenoid as found in the measured windows"),
    "liquid_line_solenoid_open": (True,  "nominal steady running state, solenoid as found in the measured windows"),
}

# Calibrated parameters that live OUTSIDE ClosedLoopM1eCS.mo. Same rule, same table.
CALIBRATED_SUCTION = {
    "UA_suction_w_k": (
        2.5,
        "LUMPED, and deliberately NOT bare-tube. Originally fitted as 105 W over a 44 K "
        "mean driving dT. The as-built geometry arrived 2026-08-06 (docs/AS_BUILT_GEOMETRY.md "
        "section 3): 40 in of 0.319 in OD tube = 0.0259 m2 external area, so 2.5 W/K implies "
        "97 W/m2K -- unreachable for a bare 5/16 in tube in 35 C air, where natural convection "
        "gives 5-15 W/m2K (UA 0.13-0.39 W/K). The 105 W therefore does NOT all enter through "
        "the suction line; the compressor drawing specifies COMPRESSOR COOLING: FAN, and a "
        "hermetic shell dumps motor and shell heat into the suction gas. This parameter is the "
        "lumped stand-in for both paths. Do NOT lower it toward the bare-tube value until that "
        "second path is actually modelled -- it currently reproduces the measured compressor "
        "inlet to 0.65 K, and a worse match is not an improvement"),
}

NUM = r"[-+]?[0-9]*\.?[0-9]+(?:[eE][-+]?[0-9]+)?"


def declared_values(mo_path=None):
    text = (mo_path or MO).read_text(encoding="utf-8", errors="replace")
    pat = re.compile(
        r"^\s*parameter\s+(?:Real|Integer|Boolean)\s+(\w+)\s*(?:\(unit=\"\w+\"\))?\s*=\s*"
        r"(" + NUM + r"|true|false)", re.M)
    return {m.group(1): m.group(2) for m in pat.finditer(text)}


class CalibrationProvenance(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.found = declared_values()
        cls.found_suction = declared_values(SUCTION_MO)

    def test_every_calibrated_parameter_has_a_source(self):
        for name, (_, source) in {**CALIBRATED, **CALIBRATED_SUCTION, **SWITCHES}.items():
            self.assertTrue(source and len(source) > 15,
                            f"{name} has no usable provenance note")

    def test_calibrated_values_match_their_recorded_source(self):
        for name, (expected, source) in CALIBRATED.items():
            self.assertIn(name, self.found, f"{name} no longer declared in the model")
            got = float(self.found[name])
            self.assertAlmostEqual(
                got, float(expected), places=4,
                msg=(f"\n{name} changed: model has {got}, provenance table has {expected}."
                     f"\nRecorded source: {source}"
                     f"\nIf the new value is right, record ITS evidence in "
                     f"tests/test_calibration_provenance.py -- do not just sync the number."))

    def test_suction_line_values_match_their_recorded_source(self):
        """Same silent-drift check, for the parameters that live in SuctionLine.mo.

        UA_suction_w_k is the one parameter in this project whose recorded source is a
        statement about what it is NOT. Geometry alone cannot produce 2.5 W/K, so if this
        value ever moves, the question to answer is which heat path changed -- not what
        number closes the gap."""
        for name, (expected, source) in CALIBRATED_SUCTION.items():
            self.assertIn(name, self.found_suction,
                          f"{name} no longer declared in SuctionLine.mo")
            got = float(self.found_suction[name])
            self.assertAlmostEqual(
                got, float(expected), places=4,
                msg=(f"\n{name} changed: model has {got}, provenance table has {expected}."
                     f"\nRecorded source: {source}"
                     f"\nIf the new value is right, record ITS evidence in "
                     f"tests/test_calibration_provenance.py -- do not just sync the number."))

    def test_structural_switches_hold_their_documented_default(self):
        for name, (expected, source) in SWITCHES.items():
            self.assertIn(name, self.found, f"{name} no longer declared in the model")
            got = self.found[name] == "true"
            self.assertEqual(
                got, expected,
                msg=(f"\n{name} default flipped to {got}. This changes what the model IS."
                     f"\nRecorded reason for {expected}: {source}"))

    def test_no_calibrated_parameter_escaped_the_table(self):
        """A new tunable parameter must be added here deliberately, so that adding one
        is a decision rather than an accident."""
        known = set(CALIBRATED) | set(SWITCHES)
        tunable = {n for n in self.found
                   if re.search(rf"parameter\s+\S+\s+{n}\b[^\n]*Evaluate=false",
                                MO.read_text(encoding="utf-8", errors="replace"))}
        self.assertEqual(
            tunable - known, set(),
            "new tunable parameter(s) with no provenance entry — add them to CALIBRATED "
            "or SWITCHES with a source")


if __name__ == "__main__":
    unittest.main()
