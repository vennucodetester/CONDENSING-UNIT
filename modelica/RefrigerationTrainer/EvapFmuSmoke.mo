within RefrigerationTrainer;

model EvapFmuSmoke
  "M1d: minimal FMU-exportable evaporator on ExternalMedia R290.
   Purpose is packaging/runtime proof, NOT physics. One input, three outputs."
  package Med = ThermoCycle.Media.R290_CP;
  parameter Integer N = 5;

  input Real wall_T_k(unit="K") = 278.15 "coil wall temperature - the one FMU input";

  output Real Q_evap_w(unit="W")      "heat absorbed by the coil";
  output Real M_refrig_kg(unit="kg")  "refrigerant mass held in the coil";
  output Real h_out_j_kg(unit="J/kg") "coil outlet specific enthalpy";

  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot source(
    redeclare package Medium = Med, Mdot_0 = 0.031, p = 485000, UseT = false, h_0 = 2.6e5);
  RefrigerationTrainer.Flow1DimCS evap(
    redeclare package Medium = Med,
    N = N, A = 0.5, V = 0.0005, Mdotnom = 0.031,
    Unom_l = 500, Unom_tp = 1500, Unom_v = 200,
    pstart = 485000, Tstart_inlet = 268.15, Tstart_outlet = 274.15,
    hstart = linspace(2.6e5, 4.2e5, N),
    steadystate = false);
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sink(
    redeclare package Medium = Med, p0 = 485000);
  RefrigerationTrainer.WallTemperatureSource wall(N = N, T_k = wall_T_k);
equation
  connect(source.flangeB, evap.InFlow);
  connect(evap.OutFlow, sink.flangeB);
  connect(wall.port, evap.Wall_int);
  Q_evap_w    = evap.Q_tot;
  M_refrig_kg = evap.M_tot;
  h_out_j_kg  = evap.OutFlow.h_outflow;
  annotation(experiment(StartTime=0, StopTime=5, Tolerance=1e-6));
end EvapFmuSmoke;
