// M1c Path B reproduction — ThermoCycle + ExternalMedia/CoolProp R290 on OpenModelica.
//
// Three models, run in order. Together they isolate an OpenModelica C code-generation
// failure to component ARRAYS carrying an external-object medium record.
//
//   PathB1_Properties  : properties + saturation derivatives   -> PASSES
//   PathB3_SingleCell  : one Cell1Dim, no component array      -> PASSES
//   PathB2_Flow1Dim    : Flow1Dim (Cells[N] array)             -> FAILS at C compile
//
// See ../../..//docs/PHASE0_RESULT.md and PathB2_Flow1Dim_compile_error.log.

// ---------------------------------------------------------------------------
// Helper wall sources (ThermoCycle ThermalPort carries T[N] and flow phi[N])
// ---------------------------------------------------------------------------

model WallT "Fixed-temperature wall driving a distributed ThermalPort"
  parameter Integer N = 5;
  parameter Real Twall = 278.15 "Wall temperature [K]";
  ThermoCycle.Interfaces.HeatTransfer.ThermalPort port(N = N);
equation
  port.T = fill(Twall, N);
end WallT;

model WallL "Fixed-temperature wall driving a single-node ThermalPortL"
  parameter Real Twall = 278.15 "Wall temperature [K]";
  ThermoCycle.Interfaces.HeatTransfer.ThermalPortL port;
equation
  port.T = Twall;
end WallL;

// ---------------------------------------------------------------------------
// STEP 1 — properties + the four saturation derivatives Flow1Dim requires.
// RESULT: PASSES. Values cross-checked against an independent CoolProp call.
// ---------------------------------------------------------------------------

model PathB1_Properties
  package Med = ThermoCycle.Media.R290_CP;
  parameter Real p_pa = 485000 "evaporating pressure";
  Med.SaturationProperties sat = Med.setSat_p(p_pa);
algorithm
  when terminal() then
    Modelica.Utilities.Streams.print("@@Tsat_C=" + String(sat.Tsat - 273.15));
    Modelica.Utilities.Streams.print("@@hl="     + String(Med.bubbleEnthalpy(sat)));
    Modelica.Utilities.Streams.print("@@hv="     + String(Med.dewEnthalpy(sat)));
    Modelica.Utilities.Streams.print("@@dl="     + String(Med.bubbleDensity(sat)));
    Modelica.Utilities.Streams.print("@@dv="     + String(Med.dewDensity(sat)));
    // the four derivatives that the AixLib medium could NOT supply (Path A blocker)
    Modelica.Utilities.Streams.print("@@ddldp="  + String(Med.dBubbleDensity_dPressure(sat)));
    Modelica.Utilities.Streams.print("@@ddvdp="  + String(Med.dDewDensity_dPressure(sat)));
    Modelica.Utilities.Streams.print("@@dhldp="  + String(Med.dBubbleEnthalpy_dPressure(sat)));
    Modelica.Utilities.Streams.print("@@dhvdp="  + String(Med.dDewEnthalpy_dPressure(sat)));
    Modelica.Utilities.Streams.print("@@dTp="    + String(Med.saturationTemperature_derp_sat(sat)));
  end when;
end PathB1_Properties;

// ---------------------------------------------------------------------------
// STEP 3 — a SINGLE Cell1Dim. No component array.
// RESULT: PASSES — simulates and produces a result file.
// This is the control that proves ExternalMedia + ThermoCycle cell physics work.
// ---------------------------------------------------------------------------

model PathB3_SingleCell
  package Med = ThermoCycle.Media.R290_CP;
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot source(
    redeclare package Medium = Med,
    Mdot_0 = 0.031, p = 485000, UseT = true, T_0 = 268.15);
  ThermoCycle.Components.FluidFlow.Pipes.Cell1Dim cell(
    redeclare package Medium = Med,
    Vi = 0.0001, Ai = 0.1, Mdotnom = 0.031,
    Unom_l = 500, Unom_tp = 1500, Unom_v = 200,
    pstart = 485000, hstart = 3.0e5,
    ComputeSat = true, steadystate = false);
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sink(
    redeclare package Medium = Med, p0 = 485000);
  WallL wall(Twall = 278.15);
equation
  connect(source.flangeB, cell.InFlow);
  connect(cell.OutFlow, sink.flangeB);
  connect(wall.port, cell.Wall_int);
end PathB3_SingleCell;

// ---------------------------------------------------------------------------
// STEP 2 — Flow1Dim, which holds Cells[N] as a component ARRAY and passes the
// saturation record in via sat_in (Flow1Dim.mo:115).
// RESULT: FAILS. Frontend/backend/codegen succeed; the generated C does not compile:
//
//   ./PathB2_functions.h:119:9: error: unknown type name
//     '..._evap_Cells_Medium_SaturationProperties_external'
//
// See PathB2_Flow1Dim_compile_error.log for the verbatim build log.
// ---------------------------------------------------------------------------

model PathB2_Flow1Dim
  package Med = ThermoCycle.Media.R290_CP;
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot source(
    redeclare package Medium = Med,
    Mdot_0 = 0.031, p = 485000, UseT = true, T_0 = 268.15);
  ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim evap(
    redeclare package Medium = Med,
    N = 5, A = 0.5, V = 0.0005, Mdotnom = 0.031,
    Unom_l = 500, Unom_tp = 1500, Unom_v = 200,
    pstart = 485000, Tstart_inlet = 268.15, Tstart_outlet = 274.15,
    steadystate = false);
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sink(
    redeclare package Medium = Med, p0 = 485000);
  WallT wall(N = 5, Twall = 278.15);
equation
  connect(source.flangeB, evap.InFlow);
  connect(evap.OutFlow, sink.flangeB);
  connect(wall.port, evap.Wall_int);
end PathB2_Flow1Dim;
