within RefrigerationTrainer;
model SmokeContract
  "M0 FMI contract smoke test; not refrigeration physics"
  input Real evap_airflow_m3_s(unit="m3/s") = 0.45;
  input Real compressor_speed_frac(unit="1") = 1.0;
  input Real condenser_airflow_m3_s(unit="m3/s") = 0.55;
  input Real evaporator_capacity_frac(unit="1") = 1.0;
  input Real condenser_capacity_frac(unit="1") = 1.0;
  input Real txv_opening_frac(unit="1") = 0.54;
  input Real txv_size_frac(unit="1") = 1.0;
  input Boolean hot_gas_solenoid_open = false;
  input Boolean liquid_line_solenoid_open = true;

  output Real p_suction_pa(unit="Pa");
  output Real p_discharge_pa(unit="Pa");
  output Real p_evap_out_pa(unit="Pa");
  output Real p_cond_in_pa(unit="Pa");
  output Real p_txv_inlet_pa(unit="Pa");
  output Real T_suction_k(unit="K");
  output Real T_discharge_k(unit="K");
  output Real T_liquid_k(unit="K");
  output Real T_evap_sat_k(unit="K");
  output Real T_cond_sat_k(unit="K");
  output Real superheat_mixed_k(unit="K");
  output Real superheat_circuit_k_1(unit="K");
  output Real superheat_circuit_k_2(unit="K");
  output Real subcooling_k(unit="K");
  output Real m_dot_kg_s(unit="kg/s");
  output Real m_dot_circuit_kg_s_1(unit="kg/s");
  output Real m_dot_circuit_kg_s_2(unit="kg/s");
  output Real Q_evap_w(unit="W");
  output Real Q_cond_w(unit="W");
  output Real W_comp_w(unit="W");
  output Real cop(unit="1");
  output Boolean txv_saturated;
  output Real T_air_in_evap_k(unit="K");
  output Real T_air_off_evap_k(unit="K");
  output Real T_air_off_cond_k(unit="K");

equation
  // Algebraic responses exist only to prove FMI wiring and SI units end-to-end.
  p_suction_pa = 485000 + 160000*(evap_airflow_m3_s - 0.45) - 110000*(compressor_speed_frac - 1);
  p_discharge_pa = 1520000 + 320000*(compressor_speed_frac - 1) - 250000*(condenser_airflow_m3_s - 0.55);
  p_evap_out_pa = p_suction_pa;
  p_cond_in_pa = p_discharge_pa;
  p_txv_inlet_pa = p_discharge_pa - 60000;
  T_evap_sat_k = 271.15 + 8*(evap_airflow_m3_s - 0.45);
  superheat_mixed_k = max(1, 6.5 - 17*(txv_opening_frac*txv_size_frac - 0.54));
  superheat_circuit_k_1 = superheat_mixed_k - 0.2;
  superheat_circuit_k_2 = superheat_mixed_k + 0.3;
  T_suction_k = T_evap_sat_k + superheat_mixed_k;
  T_discharge_k = 351.15 + 16*(compressor_speed_frac - 1);
  T_cond_sat_k = 315.15 + (p_discharge_pa - 1520000)/100000*2.7;
  subcooling_k = 8;
  T_liquid_k = T_cond_sat_k - subcooling_k;
  m_dot_kg_s = max(0.004, 0.031*compressor_speed_frac*txv_opening_frac/0.54);
  m_dot_circuit_kg_s_1 = 0.51*m_dot_kg_s;
  m_dot_circuit_kg_s_2 = 0.49*m_dot_kg_s;
  Q_evap_w = max(500, 5600*evaporator_capacity_frac*compressor_speed_frac);
  W_comp_w = 1320*compressor_speed_frac^1.55;
  Q_cond_w = Q_evap_w + W_comp_w;
  cop = Q_evap_w/W_comp_w;
  txv_saturated = txv_opening_frac >= 0.999;
  T_air_in_evap_k = 297.15;
  T_air_off_evap_k = T_air_in_evap_k - Q_evap_w/2500;
  T_air_off_cond_k = 308.15 + Q_cond_w/4000;
  annotation(experiment(StartTime=0, StopTime=1, Tolerance=1e-6));
end SmokeContract;
