from fmpy import simulate_fmu
import numpy as np

fmu = "fmu/RefrigerationTrainer.fmu"
STOP_TIME = 2000.0

res = simulate_fmu(
    fmu,
    start_values={
        "evap_airflow_m3_s": 0.15,
        "condenser_airflow_m3_s": 0.076,
        "coil_evap.V_dot_air_m3_s": 0.15,
        "coil_cond.V_dot_air_m3_s": 0.076,
    },
    stop_time=STOP_TIME,
    output_interval=10.0,
    validate=False,
)

t = res["time"]
w = 100.0
tail = t >= (t[-1] - w)
prev_win = (t >= (t[-1] - 2 * w)) & (t < (t[-1] - w))

print(f"Time range: {t[0]} -> {t[-1]}")

watched = ("p_suction_pa", "p_discharge_pa", "m_dot_kg_s", "superheat_k")
for n in watched:
    a = float(res[n][prev_win].mean())
    b = float(res[n][tail].mean())
    drift = abs(b - a) / max(abs(b), 1e-9)
    print(f"Variable {n:<18}: a={a:12.6f}, b={b:12.6f}, drift={drift:.2e} -> {'OK' if drift < 1e-4 else 'FAIL'}")
