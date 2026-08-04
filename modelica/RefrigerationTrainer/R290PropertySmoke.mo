within RefrigerationTrainer;
model R290PropertySmoke
  "M1 property-medium spike across the declared AixLib R290 range"
  package Medium = AixLib.Media.Refrigerants.R290.R290_IIR_P05_30_T263_343_Horner;

  input Real p_pa(unit="Pa", min=50000, max=3000000) = 500000;
  input Real T_k(unit="K", min=263.15, max=343.15) = 293.15;
  output Real h_j_kg(unit="J/kg");
  output Real rho_kg_m3(unit="kg/m3");
protected
  Real fmu_clock_state(start=0, fixed=true);
equation
  der(fmu_clock_state) = 0;
  h_j_kg = Medium.specificEnthalpy_pT(p_pa, T_k);
  rho_kg_m3 = Medium.density_pT(p_pa, T_k);
  annotation(experiment(StartTime=0, StopTime=1, Tolerance=1e-6));
end R290PropertySmoke;
