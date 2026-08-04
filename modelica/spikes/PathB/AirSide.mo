model AirSideTest "M1c-3: does air-side heat transfer respond to air mass flow?"
  package AirMed = Modelica.Media.Air.SimpleAir;
  parameter Real mdot_air = 0.40 "air mass flow [kg/s] - the slice's airflow slider";

  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot airIn(
    redeclare package Medium = AirMed,
    Mdot_0 = mdot_air, p = 101325, UseT = true, T_0 = 278.15);
  ThermoCycle.Components.FluidFlow.Pipes.AirCell air(
    redeclare package Medium = AirMed,
    Vi = 0.01, Ai = 1.0, Mdotnom = 0.40, Unom = 60, T_start = 278.15);
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP airOut(
    redeclare package Medium = AirMed, p0 = 101325);
  WallL coil(Twall = 263.15) "cold coil surface";
equation
  connect(airIn.flangeB, air.InFlow);
  connect(air.OutFlow, airOut.flangeB);
  connect(coil.port, air.Wall_ext);
algorithm
  when terminal() then
    Modelica.Utilities.Streams.print("@@mdot=" + String(mdot_air)
      + " U=" + String(air.ConvectiveHeatTransfer.U[1])
      + " Q_tot=" + String(air.Q_tot)
      + " T_air_out=" + String(air.OutFlow.h_outflow/1005 + 0));
  end when;
end AirSideTest;
