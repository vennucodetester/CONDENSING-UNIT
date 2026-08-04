within RefrigerationTrainer;

model SuctionLine
  "Suction line: the heat the cold suction gas picks up between coil outlet and compressor.

   WHY THIS EXISTS
   ---------------
   The measured machine runs 1.27 K of superheat at the EVAPORATOR OUTLET and 22.88 K at
   the COMPRESSOR INLET (docs/MEASURED_REFERENCE.md). The 21.6 K difference is ambient
   heat leaking into an uninsulated cold suction line, about 105 W.

   Without this component ONE superheat had to serve both roles, and the two roles want
   opposite things: the coil wants to run nearly flooded, the compressor wants dry gas.
   That conflict - not coil UA and not mdot_nom - was what capped the model at roughly
   -24 % on capacity. Raising the TXV gain to force the coil superheat down worked
   numerically and broke the machine: the valve lost authority over mass flow and the
   energy balance opened to 2 %. See HANDOFF.md section 2.

   TO THE SYSTEM THIS IS A LOSS, NOT A GAIN. The heat is absorbed outside the box, so it
   does no useful refrigeration; it raises compressor inlet temperature and specific
   volume, which cuts mass flow and raises discharge temperature. It is modelled because
   it is real, not because it helps the numbers.

   FORMULATION
   -----------
   One enthalpy state, deliberately. The algebraic form h_ex = h_su + Q/M_dot divides by
   a mass flow that passes through zero during startup, which is exactly the class of
   defect that cost this project a week of flaky gates. A lumped mass gives a bounded
   first-order lag instead, tau = M_wall_cp / (M_dot * cp) at the wall and M/M_dot at the
   fluid, both order 1 s here.

   No pressure drop. A real suction line has some, but it is a second-order effect on the
   quantity of interest (inlet superheat) and adding it now would confound this change
   with a pressure change. M2 territory."

  replaceable package Medium = ThermoCycle.Media.R290_CP constrainedby
    Modelica.Media.Interfaces.PartialTwoPhaseMedium "Refrigerant";

  /* UA is the honest parameter here: Q follows from it and from how cold the gas
     actually is, so the component cannot deliver 105 W at an operating point where the
     physics does not support it.
     2.7 W/K is BACK-CALCULATED, not fitted: 105 W measured over the measured mean
     driving temperature difference. Gas enters at the coil outlet (-22.9 C) and leaves
     at the compressor inlet (-1.3 C), mean -12.1 C, against 32 C ambient -> 44.1 K.
     105 / 44.1 = 2.38 W/K. Rounded to 2.5 as a starting value; it is the one number in
     this file that should be trimmed against the gate, and ONLY against measured
     suction temperature, never against discharge temperature (that sensor is known bad,
     HANDOFF.md section 3). */
  parameter Real UA_suction_w_k = 2.5
    "Suction-line conductance to ambient [W/K]" annotation(Evaluate=false);
  parameter Modelica.Units.SI.Temperature T_amb_k = 305.15
    "Air around the suction line" annotation(Evaluate=false);

  /* Refrigerant inventory in the line. ~2.5 m of 1/2 in OD tube (ID 11.6 mm) is 264 cm3;
     suction vapour at 2.1 bar and -10 C is about 4.7 kg/m3, so ~1.2 g. Small, but it is
     a state, not a divisor, so a small value is safe rather than dangerous. */
  parameter Modelica.Units.SI.Mass M_line_kg = 0.0012
    "Refrigerant mass held in the suction line" annotation(Evaluate=false);

  parameter Medium.SpecificEnthalpy h_start = 5.7e5
    "Start value for the outlet enthalpy";

  ThermoCycle.Interfaces.Fluid.FlangeA InFlow(redeclare package Medium = Medium)
    annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
  ThermoCycle.Interfaces.Fluid.FlangeB OutFlow(redeclare package Medium = Medium)
    annotation (Placement(transformation(extent={{80,-10},{100,10}})));

  Medium.SpecificEnthalpy h(start = h_start, stateSelect = StateSelect.prefer)
    "Enthalpy of the gas leaving the line";
  Medium.Temperature T "Gas temperature in the line";
  Modelica.Units.SI.Power Q_w "Heat picked up from ambient - a LOSS to the cycle";
  Modelica.Units.SI.SpecificEnthalpy h_su "Enthalpy arriving from the evaporator";

equation
  /* Mass: nothing accumulates, the inventory is a fixed lump. */
  InFlow.m_flow + OutFlow.m_flow = 0;

  /* Pressure: no drop, see the header. */
  OutFlow.p = InFlow.p;

  /* The upstream enthalpy, taken through the stream operator so the component stays
     correct if the flow ever reverses during a transient. */
  h_su = inStream(InFlow.h_outflow);

  T = Medium.temperature_ph(InFlow.p, h);
  Q_w = UA_suction_w_k * (T_amb_k - T);

  /* Energy: the lump is heated by ambient and swept by the flow. Using InFlow.m_flow
     (positive into the component in normal operation) keeps the sign explicit. */
  M_line_kg * der(h) = InFlow.m_flow * (h_su - h) + Q_w;

  OutFlow.h_outflow = h;
  InFlow.h_outflow  = h;

  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false), graphics={
      Rectangle(extent={{-80,20},{80,-20}}, lineColor={0,0,255}, fillColor={170,213,255},
                fillPattern=FillPattern.Solid),
      Text(extent={{-80,60},{80,30}}, textString="suction line"),
      Line(points={{-40,-30},{-40,-22}}, color={255,0,0}, arrow={Arrow.None,Arrow.Filled}),
      Line(points={{0,-30},{0,-22}},     color={255,0,0}, arrow={Arrow.None,Arrow.Filled}),
      Line(points={{40,-30},{40,-22}},   color={255,0,0}, arrow={Arrow.None,Arrow.Filled})}),
    Documentation(info="<html><p>Ambient heat gain into the suction line. See the model
    header for why it exists and why it is a loss rather than a gain.</p></html>"));
end SuctionLine;
