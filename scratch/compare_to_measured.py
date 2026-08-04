"""Model vs docs/MEASURED_REFERENCE.md at nominal. One line per quantity."""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from fmpy import simulate_fmu

# CORRECTED targets (docs/MEASURED_REFERENCE.md, 2026-08-04 correction).
# superheat_k is the COIL-OUTLET value (1.27 K), NOT the compressor-inlet 22.88 K:
# the model has no suction line, which gains ~105 W / 21 K before the compressor.
# T_evap is coil-derived; the suction transducer reads ~4 psi high.
M = dict(T_evap_c=-24.17, T_cond_c=44.82, superheat_k=1.27, subcooling_k=8.98,
         mdot_g_s=3.055, Q_evap_w=776.0, Q_cond_w=-1123.6, cop=1.38,
         air_out_evap_f=-7.6, air_out_cond_f=111.4)
SV = dict(evap_airflow_m3_s=0.15, condenser_airflow_m3_s=0.076, txv_opening_frac=0.50,
          txv_size_frac=1.0, compressor_speed_frac=1.0,
          **{"coil_evap.V_dot_air_m3_s": 0.15, "coil_cond.V_dot_air_m3_s": 0.076})
K2F = lambda k: (k - 273.15) * 9 / 5 + 32

def run(**ov):
    sv = dict(SV); sv.update(ov)
    r = simulate_fmu(str(Path(__file__).resolve().parents[1] / "fmu" / "RefrigerationTrainer.fmu"),
                     start_values=sv, stop_time=1500.0, output_interval=7.5, validate=False)
    return {k: float(r[k][-1]) for k in r.dtype.names}

if __name__ == "__main__":
    n = run()
    got = dict(T_evap_c=n["T_evap_sat_k"] - 273.15, T_cond_c=n["T_cond_sat_k"] - 273.15,
               superheat_k=n["superheat_k"], subcooling_k=n["subcooling_k"],
               mdot_g_s=n["m_dot_kg_s"] * 1000, Q_evap_w=n["Q_evap_w"], Q_cond_w=n["Q_cond_w"],
               cop=n["cop"], air_out_evap_f=K2F(n["T_air_off_evap_k"]),
               air_out_cond_f=K2F(n["T_air_off_cond_k"]))
    print(f"{'quantity':16}{'model':>10}{'measured':>11}{'error':>10}")
    for k, meas in M.items():
        g = got[k]
        err = (g - meas) / abs(meas) * 100 if meas else 0.0
        flag = "" if abs(err) < 10 else ("  <<" if abs(err) > 25 else "  <")
        print(f"  {k:14}{g:10.2f}{meas:11.2f}{err:+9.1f}%{flag}")
