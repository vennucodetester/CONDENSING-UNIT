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
    "tau_comp_s": (
        2.0,
        "compressor spin-up / spin-down time constant. Added 2026-08-06 with the thermostat "
        "so the solver is not handed a step from full speed to zero when the contact opens. "
        "Physically honest as well as numerically necessary: a hermetic motor takes a second "
        "or two to spin down against the pressure it is holding. NOT fitted to anything, and "
        "it does NOT rescue the off-cycle -- the compressor still cannot reach zero flow "
        "(task #31), because the problem is the endpoint, not the rate"),
    # --- thermostat, added 2026-08-06. Both setpoints are MEASURED. -----------
    # From `Discharge Air Sensor` at every compressor transition in the 2026-05-27/28
    # campaigns, defrost excluded. NSF -8.50 / -2.55 F, DOE -8.26 / -2.62 F: two
    # independent campaigns agreeing to 0.25 F on both. Median ON 16 min, OFF 6 min,
    # duty 85.0 / 85.1 %. The controller acts on DISCHARGE air, confirmed by the user
    # and corroborated by the wiring diagram's Discharge Air sensor into the Carel iJFPSA.
    "T_cutout_k": (250.65, "-8.50 F, MEASURED discharge-air temperature at compressor stop, "
                           "35 transitions on NSF and 37 on DOE"),
    "T_cutin_k":  (253.95, "-2.55 F, MEASURED discharge-air temperature at compressor start, "
                           "34 transitions on NSF and 36 on DOE. Differential 3.3 K"),
    # --- box thermal model, added 2026-08-06 ---------------------------------
    # Every one of these is pinned by measurement, not chosen. Running capacity is
    # 711.9 W at T_box 255.37 K; the 2026-05-27/28 campaigns give 85 % duty and a
    # ~39 min cycle, and `Case Watts` is 277 W continuously (276 on vs 286 off, so it
    # does NOT switch with the compressor). Average heat in = 0.85 * 711.9 = 605 W.
    "Q_box_load_btu_hr": (
        945.1,
        "= the measured 277 W of continuous case electrical (evaporator fans, lights), "
        "converted at 3.412142 BTU/hr per W. It does not switch with the compressor, so "
        "essentially all of it lands in the box as a standing load"),
    "UA_box_w_k": (
        7.40,
        "cabinet leak = average heat in minus case electrical = 605 - 277 = 328 W, over a "
        "44.34 K wall dT (255.37 K box to 299.71 K ROOM). Note 9.8 W/K would follow if the "
        "fans were NOT counted as box load; 7.40 is the value consistent with the MEASURED "
        "85 % duty cycle, which is the stronger constraint"),
    "C_box_j_k": (
        1.06e5,
        "from the measured cycle period: 37 run blocks in 1440 min = ~39 min, so ~5.9 min "
        "off, warming 2 K at 605 W -> 605*351/2 = 1.06e5 J/K. Air is negligible; this is "
        "fixture plus product mass"),
    "T_room_k": (
        299.71,
        "79.8 F, the MEASURED room ambient, median across all three campaigns. This is NOT "
        "T_amb_k = 308.04 K, which is the CONDENSER INLET and runs 8-16 F above room air "
        "because the coil ingests recirculation (HANDOFF section 3). The cabinet leaks to "
        "the room. Using T_amb_k here would overstate the leak by 8.33 K of driving dT, "
        "about 62 W"),
    "evaporator_capacity_frac": (
        1.0,
        "ADDED 2026-08-06. The app's evaporator 'Installed size' control. It had been SENT "
        "by twin/engine_fmu.py while no such parameter existed here, and FMPy (validate=False) "
        "dropped it silently, so the slider was inert at every position. Interpreted as a "
        "multiplier on air-side UA: a physically larger coil has more face and fin area, and "
        "UA carries both. Deliberately NOT applied to V or A_tot, which set charge inventory "
        "and wetted area -- scaling those would move the calibrated subcooling invisibly. "
        "Default 1.0 reproduces every prior result exactly"),
    "condenser_capacity_frac": (
        1.0,
        "ADDED 2026-08-06, same defect and same treatment as evaporator_capacity_frac: sent by "
        "the app, absent from the model, silently dropped. Multiplies condenser air-side UA. "
        "Safe to raise because CoilAirSide uses the bounded exponential effectiveness "
        "1 - exp(-UA_cell/C_air), monotone in UA; the superseded mean-temperature law went "
        "oscillatory above NTU_cell 2 and would have made this control unsafe. "
        "Default 1.0 reproduces every prior result exactly"),
    "compressor_speed_frac":  (1.0,     "nominal speed = 58.33 rev/s (3500 rpm), from the measured 122.9 V 60 Hz supply"),
}

# Structural switches. Flipping one silently changes what the model IS, so each carries
# the evidence for its default rather than just a value.
SWITCHES = {
    "txv_setpoint_lever":        (True,  "ON since 2026-08-06, user-approved. The thermostatic element whose screw moves the SETPOINT: coil superheat 8.19 -> 2.56 K against a measured 1.27 K. It was defaulted OFF for one day because it returned 5/6 on test_more_mass_flow_raises_discharge_pressure, whose claim turned out to be the thing that was wrong: at fixed displacement the COMPRESSOR sets mass flow, so that test now drives compressor_speed_frac. The valve keeps its own test on superheat setpoint tracking. Legacy law still reachable at false"),
    "hot_gas_solenoid_open":     (False, "nominal steady running state, solenoid as found in the measured windows"),
    "liquid_line_solenoid_open": (True,  "nominal steady running state, solenoid as found in the measured windows"),
    "box_thermostat": (
        False,
        "OFF by default 2026-08-06 so the legacy always-running path is preserved. When TRUE "
        "the compressor cycles on DISCHARGE-air temperature between the measured -8.5 F "
        "cut-out and -2.55 F cut-in. Requires box_thermal_model = true to be meaningful, "
        "because with a fixed box temperature there is nothing for the thermostat to chase"),
    "box_thermal_model": (
        False,
        "OFF by default 2026-08-06 so every prior result reproduces bit-for-bit -- the same "
        "discipline as txv_setpoint_lever and CoilAirSide.counterflow. When TRUE, T_box_air_k "
        "becomes a STATE driven by (load + cabinet leak - Q_evap), so the heat load is the "
        "INPUT and box temperature is the ANSWER. Turning it on changes what the model IS: the "
        "fixed T_box_k boundary is precisely why starving the valve barely moved capacity -- "
        "T_evap fell, the air-side dT ROSE, and the wet cells compensated. A real box warms"),
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

    def test_app_defaults_match_the_models_own_defaults(self):
        """The app must not silently run the model at an unvalidated operating point.

        WHY (found 2026-08-06). `EngineInput` carries a comment saying "Defaults are the
        model's own values, so an EngineInput() with none of these set reproduces the
        previous behaviour exactly". That was true when written on 2026-08-03 and became
        false when the model was recalibrated:

            superheat_target_k   app 7.0     model 1.27    (measured coil-outlet, trap 2)
            t_amb_k              app 305.15  model 308.04  (measured Air Into Cond Right)

        Nothing tied the two together, so every number the app displayed came from an
        operating point no validation covered -- while `scratch/compare_to_measured.py`,
        which overrides neither, reported the model as inside the measured band.

        This test is the tie. If a calibrated value moves in the `.mo`, the app's default
        must move with it or this fails.
        """
        from twin.engine_base import EngineInput

        pairs = {
            "superheat_target_k": "superheat_target_k",
            "t_amb_k": "T_amb_k",
            "t_box_k": "T_box_k",
            "v_s_cm3": "V_s_cm3",
            "ua_evap_nom_w_k": "UA_evap_nom_w_k",
            "ua_cond_nom_w_k": "UA_cond_nom_w_k",
            "txv_opening_frac": "txv_opening_frac",
            "txv_size_frac": "txv_size_frac",
            "evaporator_capacity_frac": "evaporator_capacity_frac",
            "condenser_capacity_frac": "condenser_capacity_frac",
            "compressor_speed_frac": "compressor_speed_frac",
        }
        defaults = EngineInput()
        for app_field, mo_param in pairs.items():
            self.assertIn(mo_param, self.found,
                          f"{mo_param} is not declared in ClosedLoopM1eCS.mo")
            self.assertAlmostEqual(
                getattr(defaults, app_field), float(self.found[mo_param]), places=4,
                msg=(f"\nEngineInput.{app_field} = {getattr(defaults, app_field)} but the "
                     f"model declares {mo_param} = {self.found[mo_param]}."
                     f"\nThe app would run the FMU at a point the calibration does not "
                     f"cover. Change the app default, or -- if the divergence is "
                     f"deliberate -- record WHY here rather than deleting the pair."))

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
