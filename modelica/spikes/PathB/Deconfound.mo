// De-confound: Flow1Dim differs from the passing control in TWO ways.
// Vary one at a time.
//   A) array of Cell1Dim, ComputeSat=TRUE   -> is the ARRAY the trigger?
//   B) single Cell1Dim,   ComputeSat=FALSE  -> is sat_in/ComputeSat the trigger?

model DeconfoundA_ArrayComputeSatTrue
  package Med = ThermoCycle.Media.R290_CP;
  parameter Integer N = 5;
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot source(
    redeclare package Medium = Med, Mdot_0 = 0.031, p = 485000, UseT = false, h_0 = 2.6e5);
  ThermoCycle.Components.FluidFlow.Pipes.Cell1Dim cells[N](
    redeclare each package Medium = Med,
    each Vi = 0.0001, each Ai = 0.1, each Mdotnom = 0.031,
    each Unom_l = 500, each Unom_tp = 1500, each Unom_v = 200,
    each pstart = 485000, each hstart = 3.0e5,
    each ComputeSat = true, each steadystate = false);
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sink(
    redeclare package Medium = Med, p0 = 485000);
  WallL wall[N](each Twall = 278.15);
equation
  connect(source.flangeB, cells[1].InFlow);
  for i in 1:N-1 loop
    connect(cells[i].OutFlow, cells[i+1].InFlow);
  end for;
  connect(cells[N].OutFlow, sink.flangeB);
  for i in 1:N loop
    connect(wall[i].port, cells[i].Wall_int);
  end for;
end DeconfoundA_ArrayComputeSatTrue;
