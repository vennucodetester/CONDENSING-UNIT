within RefrigerationTrainer;

model ClosedLoopM1e
  "M1e: smallest closed R290 refrigeration loop, with residuals named and visible.

   Deliberately UNDAMPED on first build. The point is to see which residual misbehaves
   before adding continuation or damping anywhere. Add mitigation only where the loop
   demonstrably asks for it, and record why in docs/PHASE0_RESULT.md."

  package Med = ThermoCycle.Media.R290_CP;

  /* ---------------- operating inputs ---------------- */
  input Real N_rot_hz(unit="1/s")   = 50.0    "compressor speed [rev/s]";
  input Real txv_opening_frac       = 0.55    "TXV opening fraction 0..1";
  input Real T_box_k(unit="K")      = 278.15  "air temperature at the evaporator";
  input Real T_amb_k(unit="K")      = 305.15  "air temperature at the condenser";

  /* ---------------- geometry ---------------- */
  parameter Integer N = 5 "cells per heat exchanger";
  parameter Modelica.Units.SI.Pressure p_evap_start = 4.85e5;
  parameter Modelica.Units.SI.Pressure p_cond_start = 1.52e6;
  parameter Modelica.Units.SI.MassFlowRate mdot_nom = 0.031;

  /* ---------------- components ---------------- */
  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.Compressor comp(
    redeclare package Medium = Med,
    epsilon_s = 0.72, epsilon_v = 0.85, V_s = 1.05e-5,
    p_su_start = p_evap_start, p_ex_start = p_cond_start,
    T_su_start = 283.15);

  Flow1DimCS cond(
    redeclare package Medium = Med,
    N = N, A = 0.8, V = 0.0008, Mdotnom = mdot_nom,
    Unom_l = 800, Unom_tp = 2000, Unom_v = 300,
    pstart = p_cond_start,
    Tstart_inlet = 350.15, Tstart_outlet = 313.15,
    hstart = linspace(6.2e5, 2.9e5, N),
    steadystate = false);

  ThermoCycle.Components.Units.PdropAndValves.Valve txv(
    redeclare package Medium = Med,
    UseNom = false, Afull = 3.0e-7,
    p_nom = p_cond_start, T_nom = 313.15, Mdot_nom = mdot_nom);

  Flow1DimCS evap(
    redeclare package Medium = Med,
    N = N, A = 0.5, V = 0.0005, Mdotnom = mdot_nom,
    Unom_l = 500, Unom_tp = 1500, Unom_v = 200,
    pstart = p_evap_start,
    Tstart_inlet = 268.15, Tstart_outlet = 274.15,
    hstart = linspace(2.6e5, 4.2e5, N),
    steadystate = false);

  WallTemperatureSource wall_evap(N = N, T_k = T_box_k);
  WallTemperatureSource wall_cond(N = N, T_k = T_amb_k);

  /* Drive the valve through its RealInput connector. Assigning txv.cmd directly
     over-determines: Valve.mo:64 already supplies cmd = Xopen as a default. */
  Modelica.Blocks.Sources.RealExpression txvCmd(y = txv_opening_frac);

  /* Drive the compressor through its rotational flange. N_rot is already defined
     inside Compressor.mo:95 by der(flange_elc.phi) = 2*N_rot*pi, so assigning
     comp.N_rot directly over-determines as well. */
  Modelica.Mechanics.Rotational.Sources.ConstantSpeed drive(
    w_fixed = 2*Modelica.Constants.pi*50.0);

  /* ---------------- NAMED RESIDUALS (the point of this model) ----------
     Each is a separately-reported error term. Do NOT collapse them into a
     single objective - the whole purpose is to see WHICH one misbehaves. */

  output Real sum_mass_flow_kg_s(unit="kg/s")
    "mass residual: compressor flow minus TXV flow. Zero at closure.";
  output Real res_energy_w(unit="W")
    "energy residual: Q_evap + W_comp - Q_cond_rejected. Zero at closure.";
  output Real res_superheat_k(unit="K")
    "superheat error: actual minus target at compressor suction";
  output Real res_subcool_k(unit="K")
    "subcooling at condenser outlet (reported, not driven to a target)";
  output Real p_lift_pa(unit="Pa")
    "pressure lift across the compressor";

  /* ---------------- reported states ---------------- */
  output Real p_suction_pa(unit="Pa");
  output Real p_discharge_pa(unit="Pa");
  output Real T_evap_sat_k(unit="K");
  output Real T_cond_sat_k(unit="K");
  output Real superheat_k(unit="K");
  output Real subcooling_k(unit="K");
  output Real m_dot_kg_s(unit="kg/s");
  output Real Q_evap_w(unit="W");
  output Real Q_cond_w(unit="W");
  output Real W_comp_w(unit="W");
  output Real cop(unit="1");
  output Real M_charge_kg(unit="kg") "total refrigerant mass held in both coils";

  parameter Real superheat_target_k = 7.0;

equation
  /* ---------------- the loop ---------------- */
  connect(comp.OutFlow, cond.InFlow);
  connect(cond.OutFlow, txv.InFlow);
  connect(txv.OutFlow, evap.InFlow);
  connect(evap.OutFlow, comp.InFlow);
  connect(wall_evap.port, evap.Wall_int);
  connect(wall_cond.port, cond.Wall_int);

  connect(txvCmd.y, txv.cmd);
  connect(drive.flange, comp.flange_elc);

  /* ---------------- readouts ---------------- */
  p_suction_pa   = evap.OutFlow.p;
  p_discharge_pa = cond.InFlow.p;
  p_lift_pa      = p_discharge_pa - p_suction_pa;

  T_evap_sat_k = Med.saturationTemperature(p_suction_pa);
  T_cond_sat_k = Med.saturationTemperature(p_discharge_pa);

  superheat_k  = Med.temperature_ph(p_suction_pa,   evap.OutFlow.h_outflow) - T_evap_sat_k;
  subcooling_k = T_cond_sat_k - Med.temperature_ph(p_discharge_pa, cond.OutFlow.h_outflow);

  m_dot_kg_s = comp.InFlow.m_flow;
  Q_evap_w   = evap.Q_tot;
  Q_cond_w   = cond.Q_tot;
  W_comp_w   = comp.W_dot;
  cop        = Q_evap_w / max(W_comp_w, 1.0);
  M_charge_kg = evap.M_tot + cond.M_tot;

  /* ---------------- residuals, reported separately ---------------- */
  sum_mass_flow_kg_s   = comp.InFlow.m_flow + txv.InFlow.m_flow;
  res_energy_w    = Q_evap_w + W_comp_w + Q_cond_w;
  res_superheat_k = superheat_k - superheat_target_k;
  res_subcool_k   = subcooling_k;

  annotation(experiment(StartTime=0, StopTime=30, Tolerance=1e-6),
    Documentation(info="<html>
<p>M1e closed loop. Residuals are named outputs so instability can be attributed to a
specific balance rather than guessed at. No damping or continuation is applied on the
first build by design.</p>
</html>"));
end ClosedLoopM1e;
