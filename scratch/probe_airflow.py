from fmpy import simulate_fmu
import numpy as np

fmu = "fmu/RefrigerationTrainer.fmu"

print("--- RUN 1: NOMINAL (condenser_airflow_m3_s = 0.076) ---")
res1 = simulate_fmu(fmu, start_values={"condenser_airflow_m3_s": 0.076, "coil_cond.V_dot_air_m3_s": 0.076}, stop_time=500.0, validate=False)
print(f"res1 coil_cond.UA_air_tot: {res1['coil_cond.UA_air_tot'][-1]}")
print(f"res1 T_air_off_cond_k:    {res1['T_air_off_cond_k'][-1]}")
print(f"res1 p_discharge_pa:      {res1['p_discharge_pa'][-1]}")
print(f"res1 Q_cond_w:            {res1['Q_cond_w'][-1]}")

print("\n--- RUN 2: BLOCKED (condenser_airflow_m3_s = 0.0304) ---")
res2 = simulate_fmu(fmu, start_values={"condenser_airflow_m3_s": 0.0304, "coil_cond.V_dot_air_m3_s": 0.0304}, stop_time=500.0, validate=False)
print(f"res2 coil_cond.UA_air_tot: {res2['coil_cond.UA_air_tot'][-1]}")
print(f"res2 T_air_off_cond_k:    {res2['T_air_off_cond_k'][-1]}")
print(f"res2 p_discharge_pa:      {res2['p_discharge_pa'][-1]}")
print(f"res2 Q_cond_w:            {res2['Q_cond_w'][-1]}")
