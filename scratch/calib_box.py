"""Calibrate the two-capacitance box against the measured cycling behaviour.

Four MEASURED constraints for three parameters, and none of the four was used to tune
anything: duty 85.0 %, ON 16 min, OFF 6 min, period 22 min. Air swings 5-7 F while the
product moves 0.05 F -- the ratio that forced two capacitances in the first place.

PREDICTION, recorded before running: lowering UA_prod decouples the air node so it gets
small and fast, which lengthens the OFF period and therefore the whole cycle. The starting
point already gives 16.7 min against a measured 22, so a modest decoupling should close it.

Results are written to scratch/calib_box_result.txt as they arrive -- the FMU floods stdout
with CoolProp banners and an earlier run lost its results to a `tail` filter.
"""
import sys
from pathlib import Path

import numpy as np

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scratch"))
from fmpy import simulate_fmu  # noqa: E402
from compare_to_measured import SV  # noqa: E402

# (UA_prod, C_air, C_prod, M_evap_wall_kg) -- targeting the OFF period via coil mass
CASES = [(2000.0, 2.0e5, 3.0e6, 4.3), (2000.0, 2.0e5, 3.0e6, 16.0), (2000.0, 2.0e5, 3.0e6, 40.0)]
RESULT = Path(__file__).resolve().parent / "calib_box_result.txt"


def main() -> None:
    with open(RESULT, "w", encoding="utf-8") as out:
        def emit(line: str) -> None:
            print(line)
            out.write(line + "\n")
            out.flush()

        emit("%-9s %-10s %-8s %7s %7s %10s %9s" % ("UA_prod", "C_air", "M_wall", "switch", "duty%", "period", "OFF min"))
        for ua, cair, cp, mw in CASES:
            sv = dict(SV)
            sv["box_thermal_model"] = True
            sv["box_thermostat"] = True
            sv["T_box_k"] = 252.4
            sv["UA_prod_w_k"] = ua
            sv["C_air_j_k"] = cair
            sv["C_prod_j_k"] = cp
            sv["M_evap_wall_kg"] = mw
            try:
                r = simulate_fmu("fmu/RefrigerationTrainer.fmu", start_values=sv,
                                 stop_time=8000.0, output_interval=5.0, validate=False,
                                 output=["comp_run"])
                t = r["time"]
                on = r["comp_run"] > 0.5
                sw = np.where(np.diff(on.astype(int)) != 0)[0]
                per = np.mean(np.diff(t[sw][::2])) / 60 if len(sw) >= 3 else float("nan")
                # OFF period is the robust target: measured 5.6-5.8 min with p10-p90 of
                # only 5-6 min on both campaigns. ON is skewed (DOE mean 33.3 vs median 16)
                # and campaign-dependent, so it is a distribution check, not a fit target.
                offs = [len(x) for x in np.split(on, sw + 1) if not x[0]]
                offm = np.mean(offs[1:-1]) * 5 / 60 if len(offs) > 2 else float("nan")
                emit("%-9.0f %-10.2e %-8.1f %7d %7.1f %10.2f %9.2f" % (ua, cair, mw, len(sw), 100 * on.mean(), per, offm))
            except Exception as exc:
                emit("%-9.0f %-10.2e %-8.1f FAILED %s" % (ua, cair, mw, str(exc)[:40]))
        emit("measured NSF: duty 74.1 pct, cycle 23.6 min, OFF 5.6 min (p10-p90 5-6)")
        emit("measured DOE: duty 84.7 pct, cycle 39.3 min, OFF 5.8 min (p10-p90 5-6)")


if __name__ == "__main__":
    main()
