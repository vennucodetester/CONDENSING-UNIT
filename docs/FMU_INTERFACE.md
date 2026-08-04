# FMU Interface

The FMU and Python engine boundary use SI units only. The PyQt display converts
absolute pressure to psig, absolute temperature to °F, temperature differences to °F ΔT,
cooling/heating capacity to BTU/hr, refrigerant flow to lb/hr, and charge to grams.

Target: FMI 2.0 Co-Simulation, win64.

## Inputs

- `evap_airflow_m3_s`
- `charge_kg` (initialization parameter; unavailable until nameplate charge is known)
- `compressor_speed_frac`
- `condenser_airflow_m3_s`
- `evaporator_capacity_frac`
- `condenser_capacity_frac`
- `txv_opening_frac`
- `txv_size_frac`
- `hot_gas_solenoid_open`
- `liquid_line_solenoid_open`

## Required outputs

- `p_suction_pa`, `p_discharge_pa`, `p_evap_out_pa`, `p_cond_in_pa`, `p_txv_inlet_pa`
- `T_suction_k`, `T_discharge_k`, `T_liquid_k`, `T_evap_sat_k`, `T_cond_sat_k`
- `superheat_mixed_k`, `superheat_circuit_k_1`, `superheat_circuit_k_2`, `subcooling_k`
- `m_dot_kg_s`, `m_dot_circuit_kg_s_1`, `m_dot_circuit_kg_s_2`
- `Q_evap_w`, `Q_cond_w`, `W_comp_w`, `cop`
- `txv_opening_frac`, `txv_saturated`, `T_air_in_evap_k`, `T_air_off_evap_k`, `T_air_off_cond_k`

All names encode their SI unit. Display units never cross this boundary.
