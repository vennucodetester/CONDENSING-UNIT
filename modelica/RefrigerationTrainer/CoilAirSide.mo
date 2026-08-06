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

  /* ADDED 2026-08-04 — THIS WAS A REAL DEFECT, NOT A REFINEMENT.
     The air used to march T_air[1] -> T_air[N+1] across cells 1..N while the refrigerant
     also flows 1 -> N, so air cell i sat against refrigerant cell i: CO-CURRENT.
     A co-current exchanger cannot cool the air below the refrigerant it is LEAVING
     alongside, however large its UA. That single constraint produced every symptom that
     had resisted diagnosis for two sessions:
       - both coils stuck at about half the effectiveness the measured air temperatures
         imply (evaporator 0.33 vs 0.66, condenser 0.43 vs 0.83);
       - complete immunity to UA. Sweeping UA_air_nom 132.8 -> 5000 (38x) moved Q_evap
         628.9 -> 646.7 W and SATURATED, with air off pinned at -21.35 C, which is
         exactly the refrigerant outlet (T_evap -27.85 + 6.50 K superheat). That is the
         co-current limit, reached and held;
       - immunity to mesh refinement (N 5 -> 10 gave +1.4 %);
       - invisibility to res_energy_w, which reads 0.00 W throughout, because NO ENERGY
         IS LOST. The transfer is bounded, not leaked. This is why every conservation
         check in the project passed while the coil was wrong.
     Real fin-tube coils are circuited counter-flow to the air, and this one is too.
     Keep the switch: co-current is the only honest way to reproduce the old results. */
  parameter Boolean counterflow = true
    "true = air enters at the refrigerant OUTLET end (real coils); false = the old co-current arrangement";

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
  Real C_air "air stream capacity rate m_dot*cp [W/K]";
  Real eff_cell "per-cell air-side effectiveness 1 - exp(-NTU_cell), in (0,1)";
  Real Q_cell[N] "heat air->wall per cell [W], positive when air is warmer";
  final parameter Real A_cell = A_tot / N "Per-cell area (m2)";
  Real T_air[N+1];

equation
  m_dot_air = max(0.01, V_dot_air_m3_s * rho_air);
  UA_air_tot = UA_air_nom * ((max(0.01, V_dot_air_m3_s) / V_dot_air_nom)^2 + 1e-6)^0.4;
  UA_cell = UA_air_tot / N;
  C_air = m_dot_air * cp_air;

  /* CHANGED 2026-08-05 — the per-cell law was a CENTRAL (mean-temperature) difference,
       Q = UA_cell*(0.5*(T_air[i] + T_air[i+1]) - T_wall),
     which is UNBOUNDED. Solving it for the outlet gives
       T_air[i+1] = T_wall + (T_air[i] - T_wall) * (1 - NTU/2)/(1 + NTU/2),
     and that factor goes NEGATIVE for NTU_cell > 2: the air overshoots past the wall
     temperature and then oscillates cell to cell. Measured on the built model:
       evaporator, nominal   NTU_cell 0.18  ->  effectiveness 0.5901 (harmless)
       condenser,  nominal   NTU_cell 1.15  ->  effectiveness 0.9985 (close to the edge)
       condenser,  UA x2     NTU_cell 2.29  ->  per-cell factor -0.067, OSCILLATORY
       condenser,  UA x100   NTU_cell 114   ->  effectiveness 1.8397  <-- 84 % PAST the wall
     This is the same class of defect as the co-current bug below: a structural bound
     (here, the lack of one) that no conservation check can see, because energy is still
     conserved while the air is driven to an impossible temperature. It also silently
     invalidates any UA sweep, which is exactly the diagnostic that caught the co-current
     defect — so the tool used to find structural errors was itself structurally broken.

     Replaced with the exponential form, which is the EXACT solution of the cell ODE for
     a constant wall temperature, is unconditionally bounded (T_air[i+1] always lies
     between T_air[i] and T_wall), and is monotone in UA:
       Q = C_air * (T_air[i] - T_wall) * (1 - exp(-UA_cell/C_air))
     At the calibrated operating point the two agree to 0.1 % (evaporator) and 0.2 %
     (condenser), so this is a robustness fix, not a recalibration. */
  eff_cell = 1.0 - exp(-UA_cell / C_air);

  T_air[1] = T_air_in_k;

  for i in 1:N loop
    /* `i` indexes the AIR path; `cell(i)` is the refrigerant cell it exchanges with.
       Counter-flow pairs the first air node with the LAST refrigerant cell. */
    /* SIGN. `phi` is a `flow` variable: POSITIVE means INTO this coil component.
       Q_cell is heat from AIR into the WALL, i.e. OUT of the coil, hence the minus.
       Getting this backwards made the evaporator heat the box (air out 284.1 K from
       278.15 K in) and the condenser absorb 13.7 kW (air out 454 K). Fixed 2026-08-03. */
    Q_cell[i] = C_air * eff_cell * (T_air[i] - port.T[if counterflow then N + 1 - i else i]);
    port.phi[if counterflow then N + 1 - i else i] = -Q_cell[i] / A_cell;
    C_air * (T_air[i] - T_air[i+1]) = Q_cell[i];
  end for;

  T_air_off_k = T_air[N+1];

  annotation(Documentation(info="<html>Air side heat exchanger model with airflow dependence.</html>"));
end CoilAirSide;
