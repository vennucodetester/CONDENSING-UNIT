model Flow1DimCS_test "Verify Flow1DimCS is a working Flow1Dim replacement on R290"
  package Med = ThermoCycle.Media.R290_CP;
  parameter Integer N = 5;
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
  WallT wall(N = N, Twall = 278.15);
equation
  connect(source.flangeB, evap.InFlow);
  connect(evap.OutFlow, sink.flangeB);
  connect(wall.port, evap.Wall_int);
algorithm
  when terminal() then
    Modelica.Utilities.Streams.print("@@Q_tot=" + String(evap.Q_tot));
    Modelica.Utilities.Streams.print("@@M_tot=" + String(evap.M_tot));
    Modelica.Utilities.Streams.print("@@h_out=" + String(evap.OutFlow.h_outflow));
  end when;
end Flow1DimCS_test;
