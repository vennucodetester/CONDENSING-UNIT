within RefrigerationTrainer;

model CoilAirSide
  "Air-side heat transfer model for finned tube heat exchangers.

   PHYSICS & DESIGN RATIONALE:
   Replaces WallTemperatureSource (which held wall temperature constant, ignoring airflow).
   Connects the air stream at T_air_in_k to the distributed wall nodes port.T.
   Air-side heat transfer coefficient scales according to Dittus-Boelter / Sieder-Tate
   mass flow law: U = U_nom * (V_dot_air / V_dot_air_nom)^0.8.
   
   Maintains WallTemperatureSource in codebase for isolation testing."

  parameter Integer N = 5 "number of tube/wall nodes";
  parameter Real V_dot_air_nom = 0.45 "Nominal design airflow (m3/s)";
  parameter Real UA_air_nom = 150.0 "Nominal total air-side conductance (W/K)";
  /* Total lateral heat-transfer area of the coil [m2]. REQUIRED: ThermoCycle's
     ThermalPort carries phi as a HEAT FLUX (W/m2), not a power - Cell1Dim uses it as
     Q_tot = Ai*qdot. Without the area the air side and the refrigerant side disagree
     about how much heat crossed the interface, by a factor of Ai. Must match the
     `A` parameter of the Flow1DimCS this coil is connected to. */
  parameter Real A_tot = 0.5 "Total lateral heat transfer area (m2) - MUST match Flow1DimCS A";
  parameter Real cp_air = 1005.0 "Specific heat of air (J/(kg.K))";
  parameter Real rho_air = 1.2 "Density of air (kg/m3)";

  input Real T_air_in_k = 278.15 "Inlet air temperature (K)";
  Real V_dot_air_m3_s(start = 0.076) "Actual air volume flow rate (m3/s)";
  /* MUST be `start =`, not `= `. A binding `Real x = expr` on a non-parameter is a
     BINDING EQUATION, and T_air_off_k is already defined by `T_air_off_k = T_air[N+1]`
     below. The binding form defined it twice -> +1 equation per instance -> the model
     was over-determined by 2 (1164 eq / 1162 var) and would not build at all.
     Fixed 2026-08-03. */
  output Real T_air_off_k(start = 278.15) "Outlet air temperature (K)";
  output Real UA_air_tot(start = 150.0) "Total air-side heat transfer coefficient (W/K)";
  output Real m_dot_air(start = 0.54) "Air mass flow rate (kg/s)";

  ThermoCycle.Interfaces.HeatTransfer.ThermalPort port(N = N);

  Real UA_cell;
  Real Q_cell[N] "heat air->wall per cell [W], positive when air is warmer";
  final parameter Real A_cell = A_tot / N "Per-cell area (m2)";
  Real T_air[N+1];

equation
  m_dot_air = max(0.01, V_dot_air_m3_s * rho_air);
  UA_air_tot = UA_air_nom * ((max(0.01, V_dot_air_m3_s) / V_dot_air_nom)^2 + 1e-6)^0.4;
  UA_cell = UA_air_tot / N;

  T_air[1] = T_air_in_k;

  for i in 1:N loop
    /* SIGN. `phi` is a `flow` variable: POSITIVE means INTO this coil component.
       Q_cell is heat from AIR into the WALL, i.e. OUT of the coil, hence the minus.
       Getting this backwards made the evaporator heat the box (air out 284.1 K from
       278.15 K in) and the condenser absorb 13.7 kW (air out 454 K). Fixed 2026-08-03. */
    Q_cell[i] = UA_cell * (0.5 * (T_air[i] + T_air[i+1]) - port.T[i]);
    port.phi[i] = -Q_cell[i] / A_cell;
    m_dot_air * cp_air * (T_air[i] - T_air[i+1]) = Q_cell[i];
  end for;

  T_air_off_k = T_air[N+1];

  annotation(Documentation(info="<html>Air side heat exchanger model with airflow dependence.</html>"));
end CoilAirSide;
