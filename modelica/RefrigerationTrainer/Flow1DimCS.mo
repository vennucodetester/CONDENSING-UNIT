within RefrigerationTrainer;

model Flow1DimCS
  "Faithful Flow1Dim replacement that avoids the OpenModelica ExternalMedia codegen failure"

  // ---------------------------------------------------------------------------
  // WHY THIS EXISTS
  //
  // ThermoCycle's Flow1Dim computes ONE SaturationProperties record in the parent and
  // passes it into its Cells[N] array via `sat_in`, with each cell's ComputeSat=false
  // (Flow1Dim.mo:115). With an ExternalMedia medium, OpenModelica 1.26.3 then emits C
  // referencing a type it never defines:
  //
  //   error: unknown type name '..._Cells_Medium_SaturationProperties_external'
  //
  // Isolated by experiment (modelica/spikes/PathB/):
  //   - single Cell1Dim, ComputeSat=true ............ builds and runs
  //   - ARRAY of Cell1Dim, ComputeSat=true .......... builds and runs   <-- key result
  //   - Flow1Dim (array + sat_in + ComputeSat=false)  CODEGEN FAILURE
  //
  // So the trigger is PASSING THE EXTERNAL SATURATION RECORD IN, not the array itself.
  // This model therefore keeps the array and lets each cell compute its own saturation
  // state (ComputeSat=true).
  //
  // TRADE-OFF, STATED HONESTLY: each cell now evaluates saturation properties itself
  // instead of sharing one parent evaluation. Physically equivalent while cells share a
  // common pressure (they do here - Cell1Dim imposes InFlow.p = OutFlow.p), but it costs
  // N property evaluations per step instead of 1. Slower, not different.
  //
  // Parameter names, connectors, geometry, balances and outputs mirror Flow1Dim so this
  // is a drop-in. See docs/PHASE0_RESULT.md for the fidelity requirements this meets.
  // ---------------------------------------------------------------------------

  replaceable package Medium = ThermoCycle.Media.DummyFluid constrainedby
    Modelica.Media.Interfaces.PartialTwoPhaseMedium "Medium model"
    annotation (choicesAllMatching = true);

  /* ---------------- GEOMETRY (identical to Flow1Dim) ---------------- */
  parameter Integer N(min=1) = 10 "Number of cells";
  parameter Integer Nt(min=1) = 1 "Number of tubes in parallel";
  parameter Modelica.Units.SI.Area A = 16.18
    "Lateral surface of the tube: heat exchange area";
  parameter Modelica.Units.SI.Volume V = 0.03781 "Volume of the tube";
  final parameter Modelica.Units.SI.Volume Vi = V/N "Volume of a single cell";
  final parameter Modelica.Units.SI.Area Ai = A/N
    "Lateral surface of a single cell";

  /* ---------------- HEAT TRANSFER (identical to Flow1Dim) ----------- */
  parameter Modelica.Units.SI.MassFlowRate Mdotnom = 0.2588 "Nominal fluid flow rate";
  parameter Modelica.Units.SI.CoefficientOfHeatTransfer Unom_l = 100
    "Nominal heat transfer coefficient, liquid zone";
  parameter Modelica.Units.SI.CoefficientOfHeatTransfer Unom_tp = 100
    "Nominal heat transfer coefficient, two-phase zone";
  parameter Modelica.Units.SI.CoefficientOfHeatTransfer Unom_v = 100
    "Nominal heat transfer coefficient, vapour zone";

  /* ---------------- INITIALISATION (identical to Flow1Dim) ---------- */
  parameter Modelica.Units.SI.Pressure pstart "Fluid pressure start value"
    annotation (Dialog(tab="Initialization"));
  parameter Medium.Temperature Tstart_inlet "Inlet temperature start value"
    annotation (Dialog(tab="Initialization"));
  parameter Medium.Temperature Tstart_outlet "Outlet temperature start value"
    annotation (Dialog(tab="Initialization"));
  parameter Medium.SpecificEnthalpy hstart[N] = linspace(
      Medium.specificEnthalpy_pT(pstart, Tstart_inlet),
      Medium.specificEnthalpy_pT(pstart, Tstart_outlet), N)
    "Start value of enthalpy vector (initialized by default)"
    annotation (Dialog(tab="Initialization"));
  parameter Boolean steadystate = true
    "if true, sets the derivative of h (working fluid) to zero during Initialization"
    annotation (Dialog(group="Intialization options", tab="Initialization"));

  /* ---------------- NUMERICAL OPTIONS (identical to Flow1Dim) ------- */
  parameter ThermoCycle.Functions.Enumerations.Discretizations Discretization=
      ThermoCycle.Functions.Enumerations.Discretizations.centr_diff
    "Selection of the spatial discretization scheme"
    annotation (Dialog(tab="Numerical options"));
  parameter Boolean Mdotconst = false
    "Set to yes if mass flow rate is constant"
    annotation (Dialog(tab="Numerical options"));
  parameter Boolean max_der = false
    "Set to yes if a maximum value for the density derivative is desired"
    annotation (Dialog(tab="Numerical options"));
  parameter Boolean filter_dMdt = false
    "Set to yes if a filter is desired for dMdt"
    annotation (Dialog(tab="Numerical options"));
  parameter Real max_drhodt = 100 "Maximum value for the density derivative"
    annotation (Dialog(enable=max_der, tab="Numerical options"));
  parameter Modelica.Units.SI.Time TT = 1
    "Integration time of the first order filter"
    annotation (Dialog(enable=filter_dMdt, tab="Numerical options"));

  /* ---------------- CONNECTORS (identical types to Flow1Dim) -------- */
  ThermoCycle.Interfaces.Fluid.FlangeA InFlow(redeclare package Medium = Medium)
    annotation (Placement(transformation(extent={{-120,-10},{-100,10}})));
  ThermoCycle.Interfaces.Fluid.FlangeB OutFlow(redeclare package Medium = Medium)
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
  ThermoCycle.Interfaces.HeatTransfer.ThermalPort Wall_int(N=N)
    annotation (Placement(transformation(extent={{-28,40},{32,60}})));

  /* ---------------- OUTPUTS (identical to Flow1Dim) ----------------- */
  Modelica.Units.SI.Power Q_tot "Total heat flux exchanged by the thermal port";
  Modelica.Units.SI.Mass M_tot "Total mass of the fluid in the component";

  /* ---------------- CELLS -----------------------------------------
     The one deliberate difference from Flow1Dim: ComputeSat = true.
     Each cell evaluates its own saturation state instead of receiving the
     parent's via sat_in. This is what avoids the codegen failure.        */
  ThermoCycle.Components.FluidFlow.Pipes.Cell1Dim Cells[N](
    redeclare each package Medium = Medium,
    each Vi = Vi,
    each Ai = Ai,
    each Nt = Nt,
    each Mdotnom = Mdotnom,
    each Unom_l = Unom_l,
    each Unom_tp = Unom_tp,
    each Unom_v = Unom_v,
    each pstart = pstart,
    hstart = hstart,
    each Discretization = Discretization,
    each Mdotconst = Mdotconst,
    each max_der = max_der,
    each filter_dMdt = filter_dMdt,
    each max_drhodt = max_drhodt,
    each TT = TT,
    each steadystate = steadystate,
    each ComputeSat = true);

  /* same converter Flow1Dim uses to fan the distributed wall out to per-cell ports */
  ThermoCycle.Interfaces.HeatTransfer.ThermalPortConverter thermalPortConverter(N=N);

equation
  /* cell-to-cell chaining, identical topology to Flow1Dim */
  connect(InFlow, Cells[1].InFlow);
  for i in 1:N-1 loop
    connect(Cells[i].OutFlow, Cells[i+1].InFlow);
  end for;
  connect(Cells[N].OutFlow, OutFlow);

  /* distributed wall -> per-cell single-node thermal ports,
     via the same ThermalPortConverter Flow1Dim uses */
  connect(Wall_int, thermalPortConverter.multi);
  connect(thermalPortConverter.single, Cells.Wall_int);

  /* aggregate outputs, identical definitions to Flow1Dim */
  Q_tot = Nt * sum(Cells[i].Q_tot for i in 1:N);
  M_tot = Nt * sum(Cells[i].M_tot for i in 1:N);

  annotation (Documentation(info="<html>
<p>Drop-in replacement for <b>ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim</b> that
works with ExternalMedia media under OpenModelica.</p>
<p>Flow1Dim passes a parent-computed <code>SaturationProperties</code> record into its
cell array via <code>sat_in</code> (<code>ComputeSat=false</code>). With an ExternalMedia
medium this triggers an OpenModelica C code-generation failure. This model keeps the same
geometry, connectors, balances, parameters and outputs, but lets each cell compute its own
saturation state.</p>
<p>Cost: N saturation evaluations per step instead of 1. Physically equivalent while the
cells share a common pressure, which they do.</p>
<p>See <code>modelica/spikes/PathB/</code> for the isolating experiments.</p>
</html>"));
end Flow1DimCS;
