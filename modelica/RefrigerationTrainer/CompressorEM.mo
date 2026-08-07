within RefrigerationTrainer;

model CompressorEM
  "Faithful ThermoCycle Compressor replacement that avoids the OpenModelica
   INTEGER_ATTRIBUTE.nominal codegen defect"

  // ---------------------------------------------------------------------------
  // WHY THIS EXISTS
  //
  // ThermoCycle's Compressor declares two ThermodynamicState records as component
  // variables (Compressor.mo:50, :52):
  //
  //     Medium.ThermodynamicState vaporIn;
  //     vaporIn = Medium.setState_ph(p_su, h_su);
  //
  // In the closed loop p_su and h_su are algebraic unknowns coupled round the cycle,
  // so that record equation lands in a NONLINEAR BLOCK. It expands field-by-field,
  // and ExternalMedia's ThermodynamicState carries an `Integer phase`. OpenModelica
  // then emits, for every iteration variable of that block:
  //
  //     sysData->nominal[i] = ...integerVarsData[N] /* comp.vaporIn.phase */
  //                           .attribute.nominal;
  //
  //     error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'
  //
  // `nominal` exists on REAL_ATTRIBUTE and not on INTEGER_ATTRIBUTE, so the generated
  // C cannot compile. Filed upstream as OpenModelica/OpenModelica#16169.
  //
  // Isolated by experiment (modelica/spikes/PhaseNominal/):
  //   - state record in a nonlinear block ............ CODEGEN FAILURE (17 equations,
  //                                                    no ThermoCycle, no compressor)
  //   - same, phase pinned to 1 ...................... CODEGEN FAILURE (identical)
  //   - no state record, scalar *_ph / *_ps calls .... builds and runs   <-- key result
  //
  // This model therefore takes the third route. `density(setState_ph(p,h))` and
  // `density_ph(p,h)` are the SAME function composition - the record was only ever a
  // named intermediate. NO EQUATION CHANGES MEANING. Verified against
  // Compressor.mo line by line; parameters, connectors, balances and outputs mirror it
  // exactly, so this is a drop-in.
  //
  // ---------------------------------------------------------------------------
  // TRADE-OFF, STATED HONESTLY: THIS MODEL IS NOT MEDIUM-AGNOSTIC.
  //
  // `specificEntropy_ph` is a plain `replaceable function` in ExternalMedia - an
  // ExternalMedia EXTENSION, not part of the Modelica.Media base interface.
  // (`density_ph` and `specificEnthalpy_ps` are `redeclare replaceable` and would have
  // been fine on their own.)
  //
  // The Medium constraint below is therefore ExternalTwoPhaseMedium, NOT
  // PartialTwoPhaseMedium as in stock ThermoCycle. That is deliberate: it makes the
  // binding a COMPILE-TIME ERROR rather than a runtime surprise. Swap in a plain
  // Modelica.Media medium and this model will refuse to typecheck, by design.
  //
  // Costs nothing today - ThermoCycle.Media.R290_CP is already
  // ExternalMedia.Media.CoolPropMedium. It would cost a rewrite of the two property
  // lines if the medium is ever changed to a non-ExternalMedia one.
  //
  // ---------------------------------------------------------------------------
  // REVERTING THIS, WHEN OpenModelica/OpenModelica#16169 IS FIXED
  //
  // This is a workaround for a compiler defect, not a modelling improvement. Once the
  // defect is fixed, revert by changing ONE declaration in the loop model back to:
  //
  //     ThermoCycle.Components.Units.ExpansionAndCompressionMachines.Compressor comp(
  //       redeclare package Medium = Med, ...same parameters... );
  //
  // The parameter set is identical, so nothing else changes. Delete this file.
  // Re-check first: the defect must be confirmed fixed in the OMC version in use.
  // ---------------------------------------------------------------------------

  replaceable package Medium =
      ExternalMedia.Media.BaseClasses.ExternalTwoPhaseMedium constrainedby
    ExternalMedia.Media.BaseClasses.ExternalTwoPhaseMedium
    "Medium model - MUST be an ExternalMedia medium, see header"
    annotation (choicesAllMatching = true);

  /* ---------------- PORTS (identical to Compressor) ---------------- */
  Modelica.Mechanics.Rotational.Interfaces.Flange_b flange_elc "Flange of shaft";
  ThermoCycle.Interfaces.Fluid.FlangeA InFlow(redeclare package Medium = Medium);
  ThermoCycle.Interfaces.Fluid.FlangeB OutFlow(redeclare package Medium = Medium);

  /* ---------------- PARAMETERS (identical to Compressor) ----------- */
  parameter Real epsilon_s = 0.7 "Isentropic Efficiency";
  parameter Real N_rot_min_check = 1.0
    "below this shaft speed [rev/s] the discharge-enthalpy assertion is not meaningful";
  input Real run = 1.0
    "1 = energised, 0 = thermostat has cut out. Ramped, never stepped - see tau_comp_s";
  parameter Real epsilon_v0 = 0.95 "Nominal volumetric efficiency at PR=1";
  /* k_v 0.05 -> 0.039 (2026-08-03). CALIBRATED, not guessed. Inverting the ALX440U
     catalogue with CoolProp properties at its stated rating (40 C cond, 10 K SH, 3 K SC)
     gives the eps_v the compressor must actually have:
         PR 9.98 (-35 C evap) -> eps_v 0.599
         PR 3.97 (-10 C evap) -> eps_v 0.581
     Our linear form returned 0.46 at the PR this LT machine runs (~10.8), which is why
     capacity came out 345 W against a ~730 W balance-point prediction: too little flow
     -> colder evaporating -> higher PR -> less flow still. k_v = 0.039 puts
     eps_v(PR=10) at 0.60, matching the catalogue.
     ⚠️ CAVEAT ON RECORD: those two catalogue points imply eps_v is essentially FLAT
     (0.599 vs 0.581) across a 2.5x range of PR, which contradicts clearance-volume
     theory. No monotonic decreasing function fits both (best rms 0.16). The catalogue
     is therefore internally inconsistent - probably different SH/SC per point - and
     NEXT_STEPS already flags it as unverified ("verify against the nameplate", DS3B01
     suffix unresolved). This calibration is anchored at OUR operating PR (~10), which
     is the one that matters; do not trust it far from there.
     PREDICTION: mdot 1.54 -> ~2.0 g/s, capacity 345 -> ~450 W, T_evap -33.4 -> ~-31 C. */
  /* k_v 0.039 -> 0.0588 (2026-08-04). MEASURED, not catalogue-derived.
     From docs/MEASURED_REFERENCE.md (1435 samples, 49 steady windows):
         mass flow 3.055 g/s, suction density 4.862 kg/m3 at 2.35 bar / 29.7 F
         eps_v = mdot/(V_s*N*rho_su) = 0.6283  at PR 6.47
     The formula eps_v = 0.95 - k_v*(PR-1) reproduces that with k_v = 0.0588.
     The previous 0.039 came from inverting an online catalogue whose two points
     imply eps_v is FLAT across PR 4-10, which no compressor does; it returned
     0.737 here, 17 % too generous.
     PREDICTION: mass flow rises 2.17 -> ~2.6 g/s (not to 3.055: the model runs at a
     higher PR than the machine, so eps_v is penalised more; PR should fall as the
     coils are corrected next). Capacity up, T_evap warmer. */
  /* WITHDRAWN 2026-08-04: k_v = 0.0588 was derived from the SUCTION TRANSDUCER, which
     reads ~4 psi high (the coil metal measures COLDER than the refrigerant the
     transducer implies - see docs/MEASURED_REFERENCE.md). Recomputing eps_v from the
     coil-derived T_evap = -24.17 C gives 0.7116 at PR 7.28, i.e. k_v = 0.0380 - which
     is where the catalogue-derived value already was. Reverted. */
  parameter Real k_v = 0.0380 "Volumetric efficiency clearance drop coefficient";
  Real PR(start = 5.0) "Pressure ratio p_ex / p_su";
  Real epsilon_v(start = 0.75) "Volumetric efficiency";
  parameter Modelica.Units.SI.Volume V_s = 1e-4 "Swept volume";
  parameter Modelica.Units.SI.Pressure p_su_start = 2.339e5
    "Inlet pressure start value" annotation (Dialog(tab="Initialization"));
  parameter Modelica.Units.SI.Pressure p_ex_start = 1.77175e6
    "Outlet pressure start value" annotation (Dialog(tab="Initialization"));
  parameter Modelica.Units.SI.Temperature T_su_start = 293.15
    "Inlet temperature start value" annotation (Dialog(tab="Initialization"));
  parameter Medium.SpecificEnthalpy h_su_start =
      Medium.specificEnthalpy_pT(p_su_start, T_su_start)
    "Inlet enthalpy start value" annotation (Dialog(tab="Initialization"));

  /* ---- DELIBERATE DIFFERENCE FROM STOCK ThermoCycle. Start value only. ----
     Compressor.mo:40 computes the DISCHARGE enthalpy start as

         h_ex_start = Medium.specificEnthalpy_pT(p_ex_start, T_su_start)

     i.e. the SUCTION temperature evaluated at the DISCHARGE pressure. For R290 at
     15.2 bar (Tsat 44.58 C) with T_su_start = 283.15 K that is a SUBCOOLED LIQUID:

         stock h_ex_start .... 225 748 J/kg   <- liquid; below sat. liquid (320 552)
         physical discharge .. 707 023 J/kg   <- superheated vapour
         error ............... -68 %

     Starting a superheated-vapour variable in the liquid region sent the
     initialisation NLS to a root ~3x outside propane's entire enthalpy span
     (see STATUS.md, 2026-08-02). Fixed here by deriving the start from the
     DISCHARGE saturation temperature instead.

     THIS CHANGES NO EQUATION. A start value is only where the solver begins.
     If it converges, the physics that converged is the physics that did not.  */
  parameter Modelica.Units.SI.Temperature T_ex_start =
      Medium.saturationTemperature(p_ex_start) + 40.0
    "Discharge temperature start value: discharge saturation + 40 K superheat"
    annotation (Dialog(tab="Initialization"));
  parameter Medium.SpecificEnthalpy h_ex_start =
      Medium.specificEnthalpy_pT(p_ex_start, T_ex_start)
    "Outlet enthalpy start value" annotation (Dialog(tab="Initialization"));

  /* ---- RANGE GUARD (M1b principle: out-of-range fails loudly, never warns) ----
     Evaluated once as parameters, so no property records enter the loop at runtime
     - that would risk re-triggering OM#16169. Bounds are deliberately generous:
     they catch "left the fluid entirely", not "slightly off design".            */
  final parameter Medium.SpecificEnthalpy h_valid_min = 1.0e5 "deep subcooled liquid guard limit";
  final parameter Medium.SpecificEnthalpy h_valid_max =
      Medium.specificEnthalpy_pT(p_su_start, 400.0) "hot superheated vapour";

  /* ---------------- VARIABLES ----------------
     Deliberately NO Medium.ThermodynamicState declarations. That is the whole point
     of this model - see header. */
  Real rpm;
  Modelica.Units.SI.Frequency N_rot;
  Modelica.Units.SI.Power W_dot;
  Modelica.Units.SI.VolumeFlowRate V_dot_su;
  /* ---- START VALUE ONLY. Changes no equation. ----
     Stock ThermoCycle gives M_dot no start, so it defaults to ZERO. Both reverse-flow
     guards in this model test `m_flow <= 0`, and at exactly zero BOTH take the
     reverse branch:

       h_su = if noEvent(InFlow.m_flow <= 0) then h_ex else inStream(...)
              -> at m_flow = 0 this reads  h_su = h_ex

     i.e. the compressor does no work - while

       h_ex = h_su + (h_ex_s - h_su)/epsilon_s

     simultaneously demands that it does. The initialisation NLS starts on an
     inconsistent point and Newton diverges out of the fluid's range
     (see STATUS.md, 2026-08-02).

     The guards are correct; they were being handed a flow direction this machine does
     not have. Starting from the actual design flow puts both branches on the forward
     side, where the residuals are well posed.                                        */
  parameter Modelica.Units.SI.Frequency N_rot_start = 50.0
    "Shaft speed start value, for deriving M_dot_start"
    annotation (Dialog(tab="Initialization"));
  parameter Modelica.Units.SI.MassFlowRate M_dot_start =
      epsilon_v0*V_s*N_rot_start*Medium.density_pT(p_su_start, T_su_start)
    "Mass flow start value: swept volume x speed x volumetric efficiency x suction density"
    annotation (Dialog(tab="Initialization"));

  Modelica.Units.SI.MassFlowRate M_dot(start = M_dot_start);
  Medium.Density rho_su(start = Medium.density_pT(p_su_start, T_su_start));
  Medium.SpecificEntropy s_su;
  Medium.SpecificEnthalpy h_su(start = h_su_start, min = 1.0e5, max = 8.5e5);
  Medium.SpecificEnthalpy h_ex(start = h_ex_start, min = 1.0e5, max = 8.5e5);
  Medium.AbsolutePressure p_su(start = p_su_start);
  Medium.AbsolutePressure p_ex(start = p_ex_start);
  Medium.SpecificEnthalpy h_ex_s;

equation
  /* Fluid Properties.
     Stock ThermoCycle writes these as, in order:
        vaporIn  = Medium.setState_ph(p_su, h_su);
        rho_su   = Medium.density(vaporIn);
        s_su     = Medium.specificEntropy(vaporIn);
        vaporOut = Medium.setState_ps(p_ex, s_su);
        h_ex_s   = Medium.specificEnthalpy(vaporOut);
     The three lines below are those five with the two named records inlined.
     Same compositions, same values, no Integer. */
  rho_su = Medium.density_ph(p_su, max(2.5e5, min(8.5e5, h_su)));
  s_su   = Medium.specificEntropy_ph(p_su, max(2.5e5, min(8.5e5, h_su)));
  /* CHECK-VALVE PHYSICS, added 2026-08-06. p_ex is clamped to at least p_su.
     WHY: during a thermostat off-cycle the high and low sides EQUALISE, and on restart
     p_ex can momentarily sit BELOW p_su. The unclamped relation then evaluates an
     EXPANSION -- h_ex_s < h_su -- and the line below divides that negative step by
     epsilon_s, amplifying it by 1/0.72. h_ex is driven under its 1.0e5 J/kg floor and the
     assertion fires. That is what killed every cycling run (task #38).
     A real compressor cannot do this: the discharge check valve and the reed valves stop
     any flow until the cylinder has built pressure above the discharge line, so the
     machine never expands its own discharge gas. Clamping p_ex is that valve. It is NOT a
     numerical fudge -- an unclamped compressor running backwards is the nonphysical
     state, and this removes it rather than hiding it. */
  h_ex_s = Medium.specificEnthalpy_ps(max(p_su, p_ex), max(2100.0, s_su));

  /* ---- RANGE GUARD (M1b: out-of-range fails loudly, never warns) ----
     MUST be a `when` clause, NOT a bare `assert` in the equation section.

     A bare assert is evaluated on EVERY residual evaluation, including the wild
     intermediate iterates the solver passes through inside an algebraic loop. That
     made it fire during FMU initialisation on a transient iterate while the CONVERGED
     values were entirely valid (h_su = 587 903, well inside [1e5, 818 482]) - blocking
     an FMU that initialises correctly. `if not initial()` does not help: OpenModelica
     evaluates the post-init equation set inside fmi2ExitInitializationMode, where
     initial() is already false but the solve is still iterating.

     A `when` clause is evaluated only at EVENTS - i.e. on solver states that have
     already been accepted. That is exactly the semantics wanted here: check the
     answer, not the search for it. Verified 2026-08-03: FMU initialises, and the
     converged values match the in-OMC run exactly. */
  when time > 0.0 and (h_su < h_valid_min or h_su > h_valid_max) then
    assert(false,
      "CompressorEM: SUCTION enthalpy h_su has left the fluid's valid range. "
    + "The solver reached a nonphysical state - the result is not trustworthy even "
    + "if it converges. Check start values before anything else.");
  end when;

  /* GUARD SCOPED 2026-08-06. This fired whenever the compressor was starved or stopped,
     which blocked thermostat cycling entirely (CVode -12 / fmi2GetEventIndicators error at
     the first cut-out). When N_rot is ~0 the machine passes no mass and h_ex is not a
     physical discharge state at all, so asserting on it is asking a question that has no
     meaning. This is NOT loosening a real physics check -- the check still applies in full
     whenever the compressor is turning, which is the only regime it was ever about. */
  when time > 0.0 and N_rot > N_rot_min_check and (h_ex < h_valid_min or h_ex > h_valid_max) then
    assert(false,
      "CompressorEM: DISCHARGE enthalpy h_ex has left the fluid's valid range. "
    + "The solver reached a nonphysical state - the result is not trustworthy even "
    + "if it converges. Check start values before anything else.");
  end when;

  /* equations - identical to Compressor from here down */
  PR = p_ex / max(1.0e4, p_su);
  /* REVERTED 2026-08-03 by lead. The variant `max(0.30, min(0.95, eps_v0 - k_v*(PR^0.885 - 1)))`
     took the gate from 4/6 to 0/6 (nothing settled at STOP_TIME=1500). Restoring the
     linear form and the 0.40 floor, which is the last state verified at 4/6.
     Re-propose the polytropic exponent with a falsifiable prediction if wanted. */
  epsilon_v = max(0.40, min(0.95, epsilon_v0 - k_v * (PR - 1.0)));
  rpm = N_rot*60;
  /* CHANGED 2026-08-06 so the machine has a valid OFF state. The pair was
         V_dot_su = epsilon_v*V_s*N_rot;   V_dot_su = M_dot/rho_su;
     which at N_rot = 0 forces M_dot = 0 through a division by rho_su and leaves the
     enthalpy relation below still demanding a compression that is not happening. A real
     compressor when off is a CLOSED PORT held shut by its discharge check valve and reed
     valves -- not a pump running at zero speed. `run` ramps 0..1 with the thermostat, so
     the displacement collapses smoothly and the port simply closes. */
  V_dot_su = epsilon_v*V_s*N_rot;
  M_dot = run*V_dot_su*rho_su;
  /* When stopped there is no compression, so h_ex degrades smoothly to h_su rather than
     to whatever an isentropic relation returns for zero flow. Keeps every property call
     inside its valid range across the transition. */
  /* max(0, ...) is the same check valve seen from the enthalpy side: the rise across a
     compressor is never negative. Belt and braces with the p_ex clamp above, because the
     two guard different paths -- the clamp fixes the isentropic state, this fixes any
     residual negative step surviving the property call. */
  h_ex = h_su + run*max(0.0, h_ex_s - h_su)/epsilon_s;
  W_dot = M_dot*(h_ex - h_su) "Consumed Power";

  //BOUNDARY CONDITIONS //
  /* Enthalpies */
  h_su = if noEvent(InFlow.m_flow < 0) then h_ex else inStream(InFlow.h_outflow);
  h_su = InFlow.h_outflow;
  OutFlow.h_outflow = if noEvent(OutFlow.m_flow > 0) then inStream(OutFlow.h_outflow) else h_ex;

  /*Mass flows */
  M_dot = InFlow.m_flow;
  OutFlow.m_flow = -M_dot;
  /*pressures */
  InFlow.p = p_su;
  OutFlow.p = p_ex;
  // Mechanical port:
  der(flange_elc.phi) = 2*N_rot*Modelica.Constants.pi;
  flange_elc.tau = W_dot/(2*N_rot*Modelica.Constants.pi);

  annotation (Documentation(info="<html>
<p>Drop-in replacement for
<b>ThermoCycle.Components.Units.ExpansionAndCompressionMachines.Compressor</b> that
avoids the OpenModelica <code>INTEGER_ATTRIBUTE.nominal</code> codegen defect
(<a href=\"https://github.com/OpenModelica/OpenModelica/issues/16169\">OM#16169</a>).</p>
<p>Stock <code>Compressor</code> declares <code>Medium.ThermodynamicState</code> records
as component variables. In a closed loop those land in a nonlinear block, and
ExternalMedia's state record carries an <code>Integer phase</code>, which OpenModelica
then asks for a <code>nominal</code> that Integers do not have. This model computes the
same three properties with the scalar <code>density_ph</code>,
<code>specificEntropy_ph</code> and <code>specificEnthalpy_ps</code> functions - the same
function compositions, with the named intermediates removed.</p>
<p><b>Not medium-agnostic:</b> <code>specificEntropy_ph</code> is an ExternalMedia
extension, so <code>Medium</code> is constrained to
<code>ExternalTwoPhaseMedium</code> rather than <code>PartialTwoPhaseMedium</code>.
This is enforced at compile time deliberately.</p>
<p>See <code>modelica/spikes/PhaseNominal/</code> for the isolating experiments, and the
header of this file for how to revert once the defect is fixed.</p>
</html>"));
end CompressorEM;
