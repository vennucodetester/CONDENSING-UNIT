"""Model vs measurement at nominal, against BANDED targets.

Targets come from docs/measured_targets.json (regenerate with
`python scratch/trap_resolution.py --emit`).  Rationale: docs/TRAP_RESOLUTION.md.

Why bands and not point values: every duplicated probe pair on this machine disagrees
materially (evaporator air dT 4.93 vs 3.37 K -> Q_evap 610 vs 891 W).  The old point
targets silently used the Left sensor of each pair, which made a 46 % instrument
disagreement look like a 10.8 % model error.  A model inside the band is converged as
far as these instruments can tell, and burning gate cycles to move it further is not
justified.

  IN   = model lies inside the measured interval
  x.x% = distance to the NEAREST end of the interval

Usage: python scratch/compare_to_measured.py [data 2.002|data 2.003]
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from fmpy import simulate_fmu  # noqa: E402

# CLEANED 2026-08-06. Two entries were removed, not changed:
#     "coil_evap.V_dot_air_m3_s": 0.15
#     "coil_cond.V_dot_air_m3_s": 0.076
# Both were INERT and one was actively misleading. `ClosedLoopM1eCS.mo:436-437` binds
#     coil_evap.V_dot_air_m3_s = evap_airflow_m3_s
#     coil_cond.V_dot_air_m3_s = condenser_airflow_m3_s
# as EQUATIONS, so a start value on either is overwritten immediately and cannot affect a
# result. The condenser entry also read 0.076 while `condenser_airflow_m3_s` beside it read
# 0.1203 -- the old fan-curve estimate sitting next to the calibrated one, which is exactly
# the kind of contradiction someone later reads as "the condenser runs at 0.076".
SV = dict(evap_airflow_m3_s=0.15, condenser_airflow_m3_s=0.1203, txv_opening_frac=0.50,
          txv_size_frac=1.0, compressor_speed_frac=1.0)
K2F = lambda k: (k - 273.15) * 9 / 5 + 32


def run(**ov):
    sv = dict(SV)
    sv.update(ov)
    r = simulate_fmu(str(ROOT / "fmu" / "RefrigerationTrainer.fmu"),
                     start_values=sv, stop_time=1500.0, output_interval=7.5, validate=False)
    return {k: float(r[k][-1]) for k in r.dtype.names}


def model_row(n):
    return dict(T_evap_c=n["T_evap_sat_k"] - 273.15, T_cond_c=n["T_cond_sat_k"] - 273.15,
                superheat_k=n["superheat_k"], subcooling_k=n["subcooling_k"],
                mdot_g_s=n["m_dot_kg_s"] * 1000, Q_evap_w=n["Q_evap_w"],
                Q_cond_w=n["Q_cond_w"], cop=n["cop"],
                air_out_evap_f=K2F(n["T_air_off_evap_k"]),
                air_out_cond_f=K2F(n["T_air_off_cond_k"]))


def report(got, dataset="data 2.002"):
    tgt = json.loads((ROOT / "docs" / "measured_targets.json").read_text())[dataset]
    print(f"{dataset}  (n={tgt['n']} steady samples)")
    print(f"{'quantity':16}{'model':>10}{'measured band':>22}{'error':>10}")
    inside = 0
    for k, g in got.items():
        lo, hi = sorted(tgt[k])
        if lo <= g <= hi:
            inside += 1
            note, err = "IN", 0.0
        else:
            near = lo if g < lo else hi
            err = (g - near) / abs(near) * 100
            note = "  <<" if abs(err) > 25 else ("  <" if abs(err) > 10 else "")
        band = f"{lo:9.2f} ..{hi:9.2f}"
        print(f"  {k:14}{g:10.2f}{band:>22}{'' if note=='IN' else f'{err:+9.1f}%'}"
              f"{'      IN' if note == 'IN' else note}")
    print(f"\n  {inside}/{len(got)} quantities inside the measured band")
    return inside


if __name__ == "__main__":
    ds = sys.argv[1] if len(sys.argv) > 1 else "data 2.002"
    report(model_row(run()), ds)
