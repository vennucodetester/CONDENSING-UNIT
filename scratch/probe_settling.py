from fmpy import simulate_fmu
import numpy as np

fmu = "fmu/RefrigerationTrainer.fmu"

print("--- PROBING PERTURBED SCENARIO: D3 (condenser_airflow_m3_s = 0.0304) ---")
res = simulate_fmu(
    fmu,
    start_values={
        "condenser_airflow_m3_s": 0.0304,
        "coil_cond.V_dot_air_m3_s": 0.0304,
    },
    stop_time=5000.0,
    output_interval=10.0,
    validate=False,
)

t = res["time"]
p_suc = res["p_suction_pa"]
p_dis = res["p_discharge_pa"]
sh = res["superheat_k"]
m_dot = res["m_dot_kg_s"]

for time_target in [500, 1000, 2000, 3000, 4000, 5000]:
    idx = np.argmin(np.abs(t - time_target))
    print(f"t={t[idx]:4.0f}s | p_suc={p_suc[idx]/1e5:6.3f} bar | p_dis={p_dis[idx]/1e5:6.3f} bar | SH={sh[idx]:6.2f} K | m_dot={m_dot[idx]*1000:6.3f} g/s")

print("\n--- DRIFT EVALUATION BETWEEN t=4000s AND t=5000s ---")
idx_4k = np.argmin(np.abs(t - 4000))
idx_5k = np.argmin(np.abs(t - 5000))

mean_suc_4k = np.mean(p_suc[idx_4k-10:idx_4k+10])
mean_suc_5k = np.mean(p_suc[idx_5k-10:idx_5k+10])
drift_suc = abs(mean_suc_5k - mean_suc_4k) / mean_suc_4k

mean_sh_4k = np.mean(sh[idx_4k-10:idx_4k+10])
mean_sh_5k = np.mean(sh[idx_5k-10:idx_5k+10])
drift_sh = abs(mean_sh_5k - mean_sh_4k) / mean_sh_4k

print(f"p_suction drift (4k -> 5k):   {drift_suc:.2e}")
print(f"superheat drift (4k -> 5k):   {drift_sh:.2e}")
