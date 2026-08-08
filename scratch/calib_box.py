"""Check settled cycling at the as-built 4.3 kg evaporator wall mass.

The product starts at the measured AVG Prod Temp (about 255.43 K), while the air starts
inside the thermostat band at 252.4 K.  The first partial cycle is discarded.  Only the
last five complete cycles are scored; OFF time is the primary measured target (5-6 min).
"""
import sys
from pathlib import Path

import numpy as np

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scratch"))
from fmpy import simulate_fmu  # noqa: E402
from compare_to_measured import SV  # noqa: E402

RESULT = Path(__file__).resolve().parent / "calib_box_result.txt"
PRODUCT_START_K = 255.43
LAST_CYCLES = 3
STOP_TIME_S = 10000.0


def complete_cycles(t: np.ndarray, on: np.ndarray) -> list[tuple[float, float]]:
    """Return (on_s, off_s) cycles bounded by consecutive OFF->ON transitions."""
    changes = np.where(np.diff(on.astype(int)) != 0)[0] + 1
    starts = [i for i in changes if on[i]]
    cycles = []
    for start, end in zip(starts, starts[1:]):
        stops = [i for i in changes if start < i < end and not on[i]]
        if len(stops) == 1:
            stop = stops[0]
            cycles.append((float(t[stop] - t[start]), float(t[end] - t[stop])))
    return cycles


def main() -> None:
    with open(RESULT, "w", encoding="utf-8") as out:
        def emit(line: str) -> None:
            print(line)
            out.write(line + "\n")
            out.flush()

        sv = dict(SV)
        sv.update(box_thermal_model=True, box_thermostat=True, T_box_k=252.4,
                  M_evap_wall_kg=4.3, T_prod_start_k=PRODUCT_START_K)
        try:
            emit(f"running stop_time_s={STOP_TIME_S:.0f} product_start_k={PRODUCT_START_K:.2f}")
            r = simulate_fmu("fmu/RefrigerationTrainer.fmu", start_values=sv,
                             stop_time=STOP_TIME_S, output_interval=5.0, validate=False,
                             output=["comp_run"])
            cycles = complete_cycles(r["time"], r["comp_run"] > 0.5)
            settled = cycles[-LAST_CYCLES:]
            if len(settled) < LAST_CYCLES:
                raise RuntimeError(f"only {len(cycles)} complete cycles; need {LAST_CYCLES}")
            on_min = np.array([c[0] for c in settled]) / 60.0
            off_min = np.array([c[1] for c in settled]) / 60.0
            duty = 100.0 * on_min / (on_min + off_min)
            stable = np.ptp(duty) <= 2.0 and np.ptp(off_min) <= 0.5
            in_target = bool(np.all((off_min >= 5.0) & (off_min <= 6.0)))
            emit(f"complete_cycles={len(cycles)} scored={len(settled)}")
            emit("last_duty_pct=" + ",".join(f"{x:.2f}" for x in duty))
            emit("last_off_min=" + ",".join(f"{x:.2f}" for x in off_min))
            emit(f"stable={stable} off_target_5_to_6_min={in_target}")
        except Exception as exc:
            emit("FAILED " + str(exc)[:120])
        emit("measured NSF: duty 74.1 pct, cycle 23.6 min, OFF 5.6 min (p10-p90 5-6)")
        emit("measured DOE: duty 84.7 pct, cycle 39.3 min, OFF 5.8 min (p10-p90 5-6)")


if __name__ == "__main__":
    main()
