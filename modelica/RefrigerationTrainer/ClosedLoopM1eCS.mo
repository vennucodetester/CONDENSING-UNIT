within RefrigerationTrainer;

model ClosedLoopM1eCS
  "M1e: smallest closed R290 refrigeration loop, with residuals named and visible.

   Deliberately UNDAMPED on first build. The point is to see which residual misbehaves
   before adding continuation or damping anywhere. Add mitigation only where the loop
   demonstrably asks for it, and record why in docs/PHASE0_RESULT.md."

  /* ------------------------------------------------------------------------
     COPY OF ClosedLoopM1e WITH ONE DIFFERENCE: CompressorEM instead of
     ThermoCycle's Compressor. Everything else is byte-identical.

     ClosedLoopM1e.mo is deliberately left UNCHANGED as the handover artifact.
     Diff the two files to see the entire delta.

     Why: stock Compressor declares ThermodynamicState records that land in a
     nonlinear block, triggering OpenModelica/OpenModelica#16169. See the header
     of CompressorEM.mo. Revert by swapping the declaration back once fixed.
     ------------------------------------------------------------------------ */

  package Med = ThermoCycle.Media.R290_CP;

  /* ---------------- operating inputs ---------------- */
  parameter Real txv_opening_frac               = 0.50    "TXV nominal design opening fraction 0..1" annotation(Evaluate=false);
  /* LT application, user-confirmed 2026-08-03. Was 278.15 K (5 C) - a MEDIUM-temp
     value, while NEXT_STEPS specifies the LOW-temp machine. That mismatch made every
     capacity comparison meaningless: the catalogue 1190 W is at -10 C evaporating,
     but this unit runs far colder, where the same compressor gives much less.
     (MT, for later, is +32 F.)
     THE TARGET IS THE EXIT AIR: -10 F (249.82 K) leaving the coil. This parameter is
     the air ENTERING, so it must sit above the target by the coil's own air-side rise
     dT = Q_evap / (m_dot_air * cp). Set by iteration against T_air_off_evap_k, not
     assumed - see the value note beside it. */
  parameter Real T_box_k(unit="K")              = 255.37  "air ENTERING the evaporator = 0 F, MEASURED from the CoilDesigner LT sheet" annotation(Evaluate=false);
  /* 305.15 -> 308.04 K (2026-08-04), WITH condenser_airflow_m3_s. Measured, same-side
     sensor pair: `Air Into Cond Right` medians 94.80 F = 34.89 C over the running
     samples. The LEFT inlet sensor reads 88.48 F, a 6.3 F split that is probably
     discharge recirculation on one side; the right pair is used because its inlet and
     outlet are on the SAME side and therefore describe one air stream.
     Caveat recorded honestly: the suction line also sees T_amb_k, and it more likely
     sits in ~31 C room air than in the condenser's 35 C inlet. That biases the
     suction-line heat gain slightly high. Splitting them is an M2 refinement. */
  parameter Real T_amb_k(unit="K")              = 308.04  "air ENTERING the condenser = 94.80 F, MEASURED" annotation(Evaluate=false);

  parameter Real evap_airflow_m3_s              = 0.15    "Evaporator airflow rate (m3/s) — corrected: fan-curve x coil-dP intersection, was physically-impossible 0.45 (NEXT_STEPS Step 2)" annotation(Evaluate=false);
  parameter Real compressor_speed_frac          = 1.0     "Compressor speed fraction 0..1" annotation(Evaluate=false);
  /* 0.076 -> 0.1203 m3/s (2026-08-04). DERIVED FROM MEASUREMENT, not from a fan curve.
     The evaporator airflow was confirmed this way and the condenser never was.
     Air-side energy balance over the running samples, using the same-side sensor pair:
        Q_cond 1123.6 W / (cp 1005 * dT 8.22 K) = 0.1360 kg/s = 0.1203 m3/s = 255 CFM.
     The left-inlet pairing gives 0.0843 m3/s; BOTH exceed the modelled 0.076, and both
     imply a condenser effectiveness of 0.83-0.87. The old 0.076 came from a fan-curve x
     coil-dP intersection, which is an estimate, not a measurement.
     WHY THIS MATTERS MORE THAN IT LOOKS: the condenser is air-FLOW limited, so airflow
     sets T_cond, and T_cond sets the liquid enthalpy entering the TXV. Liquid leaving a
     54 C condenser instead of a 45 C one costs ~25 kJ/kg of refrigerating effect, which
     is the mechanism of the remaining capacity gap - not mass flow, which was proven
     inert by forcing it 7 % ABOVE measured for no change in Q_evap. */
  parameter Real condenser_airflow_m3_s         = 0.1203  "Condenser airflow (m3/s) = 255 CFM, MEASURED by air-side energy balance" annotation(Evaluate=false);
  parameter Real txv_size_frac                  = 1.0     "TXV nominal size fraction" annotation(Evaluate=false);

  /* --- NEWLY EXPOSED AS FMI PARAMETERS 2026-08-03 --------------------------
     Previously compiled-in constants. Exposed so the app can drive them; all
     keep their existing values, so this changes no result. */
  parameter Real V_s_cm3                        = 20.0    "Compressor swept volume [cm3/rev] - ALX440U-DS3B01" annotation(Evaluate=false);
  parameter Real UA_evap_nom_w_k                = 132.8   "Evaporator air-side conductance at design airflow [W/K]" annotation(Evaluate=false);
  parameter Real UA_cond_nom_w_k                = 575.0   "Condenser air-side conductance at design airflow [W/K]" annotation(Evaluate=false);
  parameter Boolean hot_gas_solenoid_open       = false   "Hot gas solenoid valve state" annotation(Evaluate=false);
  parameter Boolean liquid_line_solenoid_open   = true    "Liquid line solenoid valve state" annotation(Evaluate=false);
  /* 2.0 -> 60.0 (2026-08-03). A thermostatic bulb is a lump of copper strapped to a
     suction line; its thermal time constant is 30-90 s, not 2 s. A bulb that responds
     faster than the coil it measures is how a control loop is made to hunt, and D1
     (reduced evaporator airflow) showed exactly that: superheat swinging 0 -> 8.17 K
     and suction +/-3.5 % indefinitely, with superheat hitting 0 K at t=300 s.
     FALSIFIABLE PREDICTION ON RECORD: the limit cycle damps out, and superheat settles
     in 3.5-5.0 K -- below the 8.14 K nominal, because proportional control leaves a
     steady-state offset. If it does not damp, the loop is genuinely unstable at reduced
     airflow and that is a real property of the machine, NOT to be tuned away. */
  parameter Real tau_txv                        = 60.0    "TXV thermal bulb response time constant [s]" annotation(Evaluate=false);

  /* ---------------- geometry ---------------- */
  /* GRID CONVERGENCE CHECKED 2026-08-04. Both coils run at about half the air-side
     effectiveness of the real ones (evaporator 0.33 vs 0.66, condenser 0.43 vs 0.83)
     while being insensitive to their own UA, which is the signature of an under-resolved
     high-NTU coil with upwind differencing. So N was doubled to 10 as a test.
     RESULT: Q_evap 629 -> 638 W, +1.4 %. Gate stayed 6/6. That is NOT the missing
     capacity, and it means the N = 5 answers are converged, not a meshing artifact -
     which is worth knowing before anyone spends another day on the discretisation.
     Reverted to 5: doubling the states doubles a solve that already blocks the UI
     (section 8 of HANDOFF.md) for a 1.4 % gain. */
  parameter Integer N = 5 "cells per heat exchanger";
  /* 4.85e5 -> 2.099e5 (2026-08-04). THE STARTUP TRANSIENT WAS THE STIFFNESS.
     4.85 bar is Tsat = +0.72 C, but the loop settles near -28 C (1.65-1.9 bar): the
     evaporator was being started 30 K too warm at 2.5x its own settled pressure, and
     the resulting collapse is what the solver was failing to integrate. The
     evaporator's torn nonlinear system (equations 1266-1312 in
     RefrigerationTrainer.ClosedLoopM1eCS_02nls.c) fails at t ~ 4.5 s, and whether it
     RECOVERS was found to depend on the process, not on the model -- see
     docs/NONDETERMINISM.md. p_cond_start needed no change: 1.52e6 is Tsat 44.58 C
     against the measured 44.82 C.
     2.099e5 = Psat at the measured T_evap of -24.17 C (docs/MEASURED_REFERENCE.md).
     An initial condition does NOT set an equilibrium, so this must not move the
     settled answer; it only stops the model being thrown across the phase envelope
     in the first five seconds. */
  parameter Modelica.Units.SI.Pressure p_evap_start = 2.099e5;
  parameter Modelica.Units.SI.Pressure p_cond_start = 1.52e6;
  /* 0.031 -> 0.0035 kg/s (2026-08-03). THE BINDING CONSTRAINT, found by working back
     from an effective condenser UA of 29 W/K when UA_air_nom was set to 575.
     ThermoCycle's Cell1Dim scales every heat-transfer coefficient as
         U = Unom * (M_dot / Mdotnom)^0.8
     With Mdotnom = 0.031 kg/s against an actual 0.00164 kg/s, the ratio is 0.053 and
     U is cut to ~10 % of nominal - in BOTH coils. 0.031 dates from the original
     "JUST A SAMMPLE" compressor and was never updated when displacement was corrected.
     0.0035 kg/s is the measured-data figure: Q_evap 854 W / ~234 kJ/kg refrigerating
     effect = 3.65 g/s (fileshare/Steady_State_Operating_Data.xlsx).
     PREDICTION: U rises ~5.8x in both coils -> T_cond falls toward the measured 44.35 C,
     T_evap rises toward -20.94 C, PR falls from ~12.9 toward 6.4, and capacity rises
     well above the present 383 W. */
  /* 0.0035 destabilised the solver (CVode mxstep at t=6.95 s) - a 5.8x jump in every
     heat-transfer coefficient at once. 0.010 is an intermediate step (2.5x) to confirm
     the direction before dealing with the stiffness. TARGET remains ~0.0035. */
  /* 0.010 -> 0.00306 (2026-08-04). MEASURED design flow, from
     docs/MEASURED_REFERENCE.md: 3.055 g/s across 49 steady windows.
     ThermoCycle scales every coil coefficient as U = Unom*(M_dot/Mdotnom)^0.8, so a
     Mdotnom 3.3x above the real flow was cutting BOTH coils to ~26 % of nominal.
     0.010 was itself an interim step after 0.0035 destabilised the solver on the old
     parameter set; retrying at the correct value now the rest is calibrated.
     PREDICTION: U up ~2.6x -> T_evap -28.6 -> warmer toward -24.2 C, Q_evap 453 -> 700+ W,
     PR falls, eps_v rises, mdot rises toward 3 g/s. Risk: stiffness (CVode mxstep). */
  /* RESULT 2026-08-04: 0.00306 DESTABILISED the solver exactly as predicted --
     CVode mxstep at t = 7.49 s, all 6 gate tests fail. Same failure as the earlier
     0.0035 attempt, so it is NOT an artifact of the old parameter set: the model
     genuinely will not integrate with the coil coefficients this high.
     Stepping down to find the boundary. 0.010 is known stable, 0.00306 is not. */
  parameter Modelica.Units.SI.MassFlowRate mdot_nom = 0.006;

  /* ---------------- components ---------------- */
  CompressorEM comp(
    redeclare package Medium = Med,
    /* epsilon_v is now a VARIABLE in CompressorEM (PR-dependent), not a parameter.
       A modification on a variable is a BINDING EQUATION, so passing `epsilon_v = 0.85`
       here defined it twice (with CompressorEM.mo:222) and over-determined the model
       by 1 -> it would not build. Tune via epsilon_v0 / k_v instead. */
    /* STEP 0 APPLIED 2026-08-03. Confirmed compressor ALX440U-DS3B01 (Cubigel/Tecumseh,
       R290, LBP) is 20 cm3/rev. The old 1.05e-5 came from the catalogue entry that
       literally reads "JUST A SAMMPLE". Displacement scales mass flow directly, which
       scales capacity directly. Was reverted earlier only to isolate the coil model;
       the coil is now fixed (sign + units), so it is restored.
       PREDICTION: mass flow ~doubles, capacity 355 W -> roughly 700 W (still short of
       the 1190 W catalogue point, because UA_air_nom is still fitted against the
       pre-sign-fix coil). */
    epsilon_s = 0.72, V_s = V_s_cm3*1e-6,
    p_su_start = p_evap_start, p_ex_start = p_cond_start,
    /* 283.15 -> 271.86 (2026-08-04), with p_evap_start. 271.86 K = the MEASURED
       compressor-inlet state: -24.17 C saturated plus the 22.88 K suction superheat.
       The 22.88 K figure is the right one HERE (unlike at the coil outlet) because
       this is the compressor inlet, which is where that superheat was measured. */
    T_su_start = 271.86);

  Flow1DimCS cond(
    redeclare package Medium = Med,
    /* FROM THE DRAWING: Hussmann 3113227 / Sanhua X001-HU01-1, MICROCHANNEL aluminium.
       Core 12.87 x 11.52 x 0.630 in, tube 0.630 x 0.051 in, fin height 0.319 in, 12.7 FPI
       -> tube pitch 0.370 in -> 31 tubes.
         V 0.0008 -> 0.000183 : 73 cm3 of ports (37 % port-area fraction) + ~110 cm3 of
           free header volume (2 x OD 0.83 in x 11.52 in, less tube intrusion).
           The old 800 cm3 was ROUND-TUBE sizing and 4.4x too big - it is why the
           condenser alone held 134 g against a 110 g system charge.
         A 0.8 -> 0.42 : refrigerant-side PORT wetted area. MUST equal CoilAirSide.A_tot. */
    N = N, A = 0.42, V = 0.000183, Mdotnom = mdot_nom,
    Unom_l = 800, Unom_tp = 2000, Unom_v = 300,
    pstart = p_cond_start,
    Tstart_inlet = 350.15, Tstart_outlet = 313.15,
    Discretization = ThermoCycle.Functions.Enumerations.Discretizations.upwind,
    /* outlet 2.90e5 -> 3.052e5 (2026-08-03). START VALUE = initial charge distribution.
       At 15.12 bar (Tsat 44.35 C) h = 290 kJ/kg is 10 K SUBCOOLED, and the loop settled
       at 15.9 K. That flooded the condenser: 48.5 g in 183 cm3 = 265 kg/m3 mean, ~55 %
       liquid by volume, so most of the coil was holding liquid instead of condensing -
       which is why raising UA_air 2.19x moved T_cond only 1.4 K. When the volume was
       cut 4.4x for the microchannel geometry, this profile was not updated with it.
       3.052e5 = 5 K subcooling, the middle of the 5-15 F target.
       PREDICTION: subcooling 15.9 -> ~5 K, condenser charge 48.5 -> ~28 g, more of the
       coil condensing, T_cond falls toward the measured 44.35 C. */
    /* THIS PROFILE IS THE SYSTEM CHARGE CONTROL, 2026-08-04. There is no receiver and
       no liquid line, so total refrigerant mass is whatever the initial conditions put
       in, and it lives almost entirely as liquid in the condenser. That makes this one
       line the only lever on subcooling in the whole model.
       Measured by sweeping it (gate repeated 3x at each point):
         linspace(6.70e5, 3.05e5)  ->  36.4 g,  subcooling 0.00 K,  T_cond 45.8 C, 6/6
         linspace(4.50e5, 2.60e5)  ->  58.7 g,  subcooling 5.29 K,  T_cond 49.1 C, 6/6
         linspace(4.25e5, 2.53e5)  ->  63.1 g,  subcooling 6.63 K,  T_cond 51.4 C, 5/6
         linspace(4.00e5, 2.45e5)  ->  71.9 g,  subcooling 9.79 K,  T_cond 54.4 C, 6/6
       RE-SWEPT after the condenser airflow correction (0.076 -> 0.1203), which changes
       the trade because a colder condenser holds more liquid at the same charge:
         linspace(4.50e5, 2.60e5) -> subcooling 6.25 K, T_cond 49.4 C, Q_evap 629 W, 6/6
         linspace(4.00e5, 2.45e5) -> subcooling 10.67 K, T_cond 53.7 C, Q_evap 622 W, 6/6
       NOW CHOSEN: the 4.50e5/2.60e5 point. Total error is a wash between them (114 vs
       112 summed absolute percentage error), so it is decided on the quantities that
       are physically meaningful rather than on the sum: capacity (629 vs 622 W), COP
       (+1.8 % vs -1.0 %) and T_cond (+10.2 % vs +19.7 %) all favour the lower charge.
       The cost is subcooling at -30.4 %.
       THE HONEST SUMMARY: charge trades subcooling against T_cond and capacity is
       nearly FLAT across the whole sweep (621-629 W against a measured 776 W). Charge
       is therefore NOT the remaining constraint - it just moves error between rows.
       THE COST IS T_cond, which rises to 54.4 C (+21 %). That is real overcharge
       behaviour - flooding the condenser steals condensing area - and it is accepted
       here ONLY because T_cond is currently not a trustworthy target: the measured
       condenser approach is 0.71 K, which is impossible (HANDOFF.md section 3, third
       trap). Q_cond (-2.6 %) and air off condenser (+0.8 %) are unaffected by charge
       because the condenser is air-FLOW limited, and both still match.
       REVISIT THIS the moment a trustworthy head pressure exists. */
    hstart = linspace(4.50000e5, 2.60000e5, N),
    steadystate = false);

  /* ADDED 2026-08-04. The measured 21.6 K between coil outlet (1.27 K superheat) and
     compressor inlet (22.88 K) is ambient heat leaking into the cold suction line,
     ~105 W. Its absence was the binding constraint on this model: one superheat cannot
     be both nearly-flooded for the coil and dry for the compressor. */
  SuctionLine suction(
    redeclare package Medium = Med,
    T_amb_k = T_amb_k,
    h_start = 5.49227e5);

  ThermoCycle.Components.Units.PdropAndValves.Valve txv(
    redeclare package Medium = Med,
    UseNom = false, Afull = 9.6e-8 * txv_size_frac,
    p_nom = p_cond_start, T_nom = 313.15, Mdot_nom = mdot_nom);

  Flow1DimCS evap(
    redeclare package Medium = Med,
    /* A 0.5 -> 0.630 to MATCH CoilAirSide.A_tot. These two MUST be equal: the coil
       divides by A_cell to make a flux, the cell multiplies by Ai to make a power.
       With 0.630 vs 0.5 the air side lost 487 W while the refrigerant side gained
       386 W - 21% of the heat vanished at the interface. NB `res_energy_w` cannot
       detect this: it sums Q_evap + W_comp + Q_cond, all refrigerant-side, and read
       0.00000 W throughout. Value is the sheet's primary (tube) area, 6.78 ft2. */
    /* FROM THE DRAWING: Hussmann 3186699 'COIL ASSY-EVAP 40P 2C .375' (= the
       CoilDesigner 40P-2C sheet). COPPER TUBES 0.375 x 0.016 -> ID 8.712 mm.
         V 0.001051 -> 0.001326 : I had assumed a 0.030 in wall (ID 8.00 mm); the
           drawing says 0.016 in. 40 x pi/4 x ID^2 x 20.57 in = 1246 cm3, plus ~80 cm3
           of return bends and the 23.17 vs 20.57 in coil-vs-fin length.
         A 0.630 -> 0.572 : INTERNAL wetted area (40 x pi x ID x L). 0.630 was the
           CoilDesigner PRIMARY (outside) area - wrong side for a refrigerant-side
           coefficient. MUST equal CoilAirSide.A_tot. */
    N = N, A = 0.572, V = 0.001326, Mdotnom = mdot_nom,   /* V 0.0005 -> 0.001051:
       DERIVED FROM THE SHEET, not assumed. 40 tubes x 20.57 in, and primary area
       6.78 ft2 back-calculates tube OD = Aprim/(N*pi*L) = 9.59 mm = 3/8 in nominal
       (a good self-consistency check on the sheet). With 0.030 in ACR wall, ID 8.00 mm
       -> V = 40*(pi/4)*ID^2*L = 1051 cm3. Model held half that.
       Charge note: at -32 C this volume holds only ~4 g as vapour, ~12 g at x=0.3 -
       the evaporator is NOT where the 110 g lives. The charge is liquid in the
       CONDENSER, whose V/A remain ASSUMED (no condenser sheet exists). */
    Unom_l = 500, Unom_tp = 1500, Unom_v = 200,
    pstart = p_evap_start,
    /* Moved with p_evap_start, 2026-08-04. These must describe the SAME state as the
       pressure or the profile is inconsistent on the first step: 248.99 K = Tsat at
       2.099 bar, 250.25 K = the measured 1.27 K coil-outlet superheat (NOT the 22.88 K
       compressor-inlet figure - that includes suction-line gain the model omits). */
    Tstart_inlet = 248.99, Tstart_outlet = 250.25,
    Discretization = ThermoCycle.Functions.Enumerations.Discretizations.upwind,
    /* h_in = liquid at the measured 8.98 K subcooling (35.84 C, 15.28 bar); h_out =
       vapour at 2.099 bar and 1.27 K superheat. The old pair was consistent with the
       old 4.85 bar start, not with the machine. */
    hstart = linspace(2.95116e5, 5.49227e5, N),
    steadystate = false);

  /* Air-side heat transfer models with airflow dependence (replaces WallTemperatureSource stand-in) */
  CoilAirSide coil_evap(
    /* UA_air_nom 26.75 -> 76.0 (2026-08-03). 26.75 was fitted against the coil while
       its heat-flux sign was INVERTED, and against MT box air; it never described this
       LT evaporator. Symptom: T_evap_sat -39.9 C against entering air -20.8 C, a 19 K
       approach where a real LT coil runs 8-10 K, giving only 229 W.
       Re-derived from the catalogue, not rescaled: at ~-30 C evaporating the ALX440U
       interpolates to ~605 W (459 W @ -35 C, 1190 W @ -10 C); at an 8 K approach
       UA = 605/8 = 76 W/K.
       PREDICTION: evaporating rises toward -30 C, capacity rises toward ~600 W, and
       D11 recovers - it currently fails only because the coil is UA-limited, so opening
       the TXV floods it (superheat -> 0) instead of moving more heat. */
    /* ALL THREE FROM THE CoilDesigner LT SHEET (40P-2C-250cfm.chx), replacing values
       I had interpolated from the compressor catalogue:
         V_dot_air_nom 0.15 -> 0.118   (250 CFM, the sheet's design airflow)
         UA_air_nom    76.0 -> 132.8   (1183 W / 8.91 K mean-temperature difference)
         A_tot          0.5 -> 0.630   (primary/tube area 6.78 ft2)
       The sheet's DUTY is deliberately NOT used. CoilDesigner solves the coil for an
       ASSUMED refrigerant flow (3.908 g/s); it does not know what compressor is
       upstream. The ALX440U-DS3B01 delivers ~605 W at -30 C, not the 1183 W the coil
       is drawn for, so the coil has headroom and the system balances warmer.
       PREDICTION (compressor curve vs coil UA): T_evap ~ -26 to -24 C, capacity
       730-800 W. Range not point: actual airflow (0.15) exceeds the sheet's 0.118, so
       UA scales up by (0.15/0.118)^0.8 ~ 1.21. Today: -36.0 C, 282 W. */
    N = N, V_dot_air_nom = 0.118, UA_air_nom = UA_evap_nom_w_k, A_tot = 0.572,  /* = Flow1DimCS.A */
    T_air_in_k = T_box_k);

  CoilAirSide coil_cond(
    /* UA_air_nom 51.32 -> 262 (2026-08-03). 51.32 was fitted against the coil while its
       heat-flux sign was INVERTED, so it never described this condenser. Re-derived from
       the catalogue duty instead of rescaled: Q_cond = Q_evap + W_comp
       = 1190 + 1190/1.31 = 2098 W, at an 8 K approach to 32 C air -> UA = 262 W/K.
       Symptom it addresses: subcooling 0.00 K and condensing 59.7 C against a 40 C
       rating point - the condenser was making no liquid at all.
       PREDICTION: condensing falls toward ~40 C, subcooling becomes non-zero, capacity
       and COP rise. */
    /* UA_air_nom 262 -> 575 (2026-08-03). CALIBRATED TO MEASURED STEADY-STATE DATA
       (fileshare/Steady_State_Operating_Data.xlsx, 49 windows >=9 min, LT holding):
           air into condenser  88.6 F = 31.4 C
           T_cond from liquid pressure (219.3 psia) = 44.35 C
           -> measured approach 12.95 K
       Model was running a 28.4 K approach (T_cond 60.44 C), i.e. 2.19x too little
       conductance. 262 x 2.19 = 575 W/K.
       The condenser side of this dataset is internally consistent (air in 88.6 -> out
       110.4 F, T_cond 44.35 C all mutually sensible), which is why it is safe to
       calibrate to. The EVAPORATOR side of the same dataset is NOT - air leaves at
       -8.4 F while the suction transducer implies T_evap = -5.7 F, i.e. air colder than
       the refrigerant, impossible. Do not fit UA_evap to it until that is resolved.
       PREDICTION: T_cond 60.4 -> ~45 C, subcooling 16.7 -> lower, capacity up, and D11
       should recover (it broke because the condenser could no longer build head). */
    N = N, V_dot_air_nom = 0.076, UA_air_nom = UA_cond_nom_w_k, A_tot = 0.42,  /* = Flow1DimCS.A */
    T_air_in_k = T_amb_k);

  /* WallTemperatureSource preserved for isolation testing (Senior Engineer Rule 1) */
  WallTemperatureSource wall_evap_placeholder(N = N, T_k = T_box_k);
  WallTemperatureSource wall_cond_placeholder(N = N, T_k = T_amb_k);

  /* Proportional TXV Control Law signal & block driver */
  output Real txv_opening_cmd(start = txv_opening_frac) "Clamped valve opening command [0.05..1.0]";
  Modelica.Blocks.Sources.RealExpression txvCmd(y = txv_opening_cmd);

  /* Drive the compressor through its rotational flange. */
  /* 50.0 -> 58.33 rev/s (2026-08-04). THE MACHINE IS 60 Hz AND THE MODEL WAS RUNNING IT
     AT 50. Measured from the data, not assumed: `Unit Volts` has a median of 122.9 V
     across the run (fileshare/data 2.002.csv), i.e. a US 120 V supply, which is 60 Hz.
     Every temperature in that file is in F, which says the same thing less directly.
     58.33 rev/s = 3500 rpm, the 60 Hz rating for this Cubigel LBP family (2900 rpm at
     50 Hz). The old 50.0 was 3000 rpm - the 50 Hz SYNCHRONOUS speed, so it was wrong
     twice over: wrong mains frequency, and no slip.
     Mass flow is directly proportional to shaft speed, so this is worth +16.7 % on its
     own, against a measured deficit of -19.0 %.
     WHY IT WAS FOUND LAST: it hid behind the coils. Q_evap = M_dot * dh, so a mass-flow
     shortfall looks exactly like a coil that will not absorb heat. It was only after
     mdot_nom (refrigerant-side U, 1.49x -> +2 W), UA_evap_nom_w_k (air-side, 2.26x ->
     +13 W) and UA_cond_nom_w_k (1.57x -> -0.9 K) all failed to move anything that the
     evaporator could be ruled out and the compressor became the only candidate left. */
  Modelica.Mechanics.Rotational.Sources.ConstantSpeed drive(
    w_fixed = 2*Modelica.Constants.pi*58.33*compressor_speed_frac);

  /* ---------------- NAMED RESIDUALS (the point of this model) ----------
     Each is a separately-reported error term. Do NOT collapse them into a
     single objective - the whole purpose is to see WHICH one misbehaves. */

  output Real res_mass_kg_s(unit="kg/s")
    "mass residual: compressor flow minus TXV flow. Zero at closure.";
  output Real res_energy_w(unit="W")
    "energy residual: Q_evap + W_comp - Q_cond_rejected. Zero at closure.";
  output Real res_superheat_k(unit="K")
    "superheat error: actual minus target at compressor suction";
  output Real res_subcool_k(unit="K")
    "subcooling at condenser outlet (reported, not driven to a target)";
  output Real p_lift_pa(unit="Pa")
    "pressure lift across the compressor";

  /* ---------------- FMI 2.0 REQUIRED OUTPUTS ---------------- */
  output Real p_suction_pa(unit="Pa");
  output Real p_discharge_pa(unit="Pa");
  output Real T_evap_sat_k(unit="K");
  output Real T_cond_sat_k(unit="K");
  output Real superheat_k(unit="K") "at the COIL OUTLET - what the TXV controls";
  output Real superheat_comp_k(unit="K") "at the COMPRESSOR INLET - coil superheat plus suction-line gain";
  output Real Q_suction_line_w(unit="W") "ambient heat into the suction line - a LOSS";
  output Real subcooling_k(unit="K");
  output Real m_dot_kg_s(unit="kg/s", start = 4.50e-3);
  output Real Q_evap_w(unit="W");
  output Real Q_cond_w(unit="W");
  output Real W_comp_w(unit="W");
  output Real cop(unit="1");
  output Real M_charge_kg(unit="kg") "total refrigerant mass held in both coils";

  output Real T_air_in_evap_k(unit="K");
  output Real T_air_off_evap_k(unit="K");
  output Real T_air_off_cond_k(unit="K");
  output Real T_suction_k(unit="K");
  output Real T_discharge_k(unit="K");
  output Real T_liquid_k(unit="K");
  output Real m_dot_circuit_kg_s_1(unit="kg/s");
  output Real m_dot_circuit_kg_s_2(unit="kg/s");
  output Real p_cond_in_pa(unit="Pa");
  output Real p_evap_out_pa(unit="Pa");
  output Real p_txv_inlet_pa(unit="Pa");
  output Real superheat_circuit_k_1(unit="K");
  output Real superheat_circuit_k_2(unit="K");
  output Real superheat_mixed_k(unit="K");
  output Boolean txv_saturated;
  /* 7.0 -> 1.27 (2026-08-04). 7.0 K was a generic TXV setting, not this valve.
     EVIDENCE THAT THE COIL, NOT THE VALVE, WAS THE WRONG SUSPECT: dropping mdot_nom
     0.010 -> 0.006 raises every coil coefficient by (10/6)^0.8 = 1.49x, and moved
     Q_evap by 2 W (527 -> 529). The evaporator is therefore NOT refrigerant-side
     limited, so the UA steps queued in HANDOFF.md cannot be the binding constraint
     either. What is left is the valve: superheat is the largest single error in
     scratch/compare_to_measured.py at +710 %, and a coil held at 10.3 K superheat is
     a STARVED coil, which caps mass flow and hence capacity.
     1.27 K is the measured coil-outlet superheat (docs/MEASURED_REFERENCE.md) - the
     real machine runs nearly FLOODED. Deliberately NOT the 22.88 K compressor-inlet
     figure: that includes ~105 W of suction-line gain the model does not represent.
     NB the proportional law leaves a steady-state offset (Kp = 0.05/K), so settled
     superheat will land ABOVE 1.27 K; the target is not the prediction. */
  parameter Real superheat_target_k             = 1.27    "TXV superheat setpoint [K] - MEASURED coil-outlet value" annotation(Evaluate=false);

initial equation
  txv_opening_cmd = txv_opening_frac;

equation
  /* ---------------- the loop ---------------- */
  connect(comp.OutFlow, cond.InFlow);
  connect(cond.OutFlow, txv.InFlow);
  connect(txv.OutFlow, evap.InFlow);
  /* THE SUCTION LINE NOW SITS HERE, 2026-08-04. Was connect(evap.OutFlow, comp.InFlow),
     i.e. the compressor drew straight off the coil and had to see the coil's own
     superheat. It no longer does, which is the whole point - see SuctionLine.mo. */
  connect(evap.OutFlow, suction.InFlow);
  connect(suction.OutFlow, comp.InFlow);
  connect(coil_evap.port, evap.Wall_int);
  connect(coil_cond.port, cond.Wall_int);
  coil_evap.V_dot_air_m3_s = evap_airflow_m3_s;
  coil_cond.V_dot_air_m3_s = condenser_airflow_m3_s;

  connect(txvCmd.y, txv.cmd);
  connect(drive.flange, comp.flange_elc);

  /* Proportional TXV Control Law with bulb time constant & stroke limits: A = clamp(A_ref + Kp*(SH - SH_target), A_min, A_max) */
  /* Kp STAYS AT 0.05 per K. TRIED AND REVERTED 2026-08-04: 0.20, then 0.10.
     The physics prediction was right and the gate still rejected it.
       Kp 0.20 -> superheat 7.18 -> 3.35 K, mdot 2.58 -> 2.85 g/s (-6.8 % of measured),
       Q_evap 631 W. Every headline error improved. But 4/6, repeatably:
         - test_more_mass_flow_raises_discharge_pressure: opening the valve LOWERED
           mass flow (2.899 vs 2.990 g/s). The closed-loop sensitivity is
           d(opening)/d(frac) = 1 + Kp*dSH/dfrac, and at Kp = 0.20 the feedback term
           cancels the operator's own command. The valve stops being a control.
         - test_energy_balance_closes: open by 2.0 % (states imply 644 W, model
           reports 631 W), as the coil outlet approaches saturation.
       Kp 0.10 -> superheat 5.08 K, mdot 2.77 g/s. SAME TWO FAILURES. So the limit
       sits between 0.05 and 0.10, and it is not a solver artifact: as the coil
       approaches flooded, a TXV genuinely loses authority over mass flow.
     THE REAL OBSTACLE IS STRUCTURAL, NOT THIS GAIN. The machine runs 1.27 K at the
     coil outlet AND 22.88 K at the compressor inlet; the difference is ~105 W of
     suction-line heat gain (HANDOFF.md section 6.1) that this model does not
     represent. With no suction line, ONE superheat has to serve both roles, so
     driving the coil to 1.27 K also feeds the compressor near-saturated vapour --
     which is not what the real compressor sees. Raising Kp cannot fix that; adding
     the suction line can. Do not re-tune this gain until it exists. */
  tau_txv * der(txv_opening_cmd) + txv_opening_cmd = max(0.05, min(1.0, txv_opening_frac + 0.05 * (superheat_k - superheat_target_k)));
  txv_saturated   = (txv_opening_cmd >= 0.999) or (txv_opening_cmd <= 0.051);

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

  /* Additional FMI 2.0 outputs */
  T_air_in_evap_k       = T_box_k;
  T_air_off_evap_k      = coil_evap.T_air_off_k;
  T_air_off_cond_k      = coil_cond.T_air_off_k;
  /* 2026-08-04: now the COMPRESSOR INLET, i.e. downstream of the suction line, which is
     both what a technician reads at the suction service port and what app.py already
     labels this ("Suction line actual"). It used to be the coil outlet, because before
     the suction line existed the two were the same point. `superheat_k` deliberately
     stays at the COIL OUTLET: it is what the TXV controls and what
     test_energy_balance_closes uses to reconstruct the evaporator outlet enthalpy. */
  T_suction_k           = suction.T;
  superheat_comp_k      = suction.T - T_evap_sat_k;
  Q_suction_line_w      = suction.Q_w;
  T_discharge_k         = Med.temperature_ph(p_discharge_pa, comp.OutFlow.h_outflow);
  T_liquid_k            = T_cond_sat_k - subcooling_k;
  m_dot_circuit_kg_s_1  = m_dot_kg_s;
  m_dot_circuit_kg_s_2  = m_dot_kg_s;
  p_cond_in_pa          = p_discharge_pa;
  p_evap_out_pa         = p_suction_pa;
  p_txv_inlet_pa        = p_discharge_pa;
  superheat_circuit_k_1 = superheat_k;
  superheat_circuit_k_2 = superheat_k;
  superheat_mixed_k     = superheat_k;

  /* ---------------- residuals, reported separately ---------------- */
  res_mass_kg_s   = comp.InFlow.m_flow + txv.InFlow.m_flow;
  /* Q_suction_line_w added 2026-08-04 WITH the suction line. It is a real energy input
     to the refrigerant, so leaving it out would open this residual by exactly the
     amount of the new heat and look like a modelling error in something else. */
  res_energy_w    = Q_evap_w + Q_suction_line_w + W_comp_w + Q_cond_w;
  res_superheat_k = superheat_k - superheat_target_k;
  res_subcool_k   = subcooling_k;

  annotation(experiment(StartTime=0, StopTime=30, Tolerance=1e-6),
    Documentation(info="<html>
<p>M1e closed loop. Residuals are named outputs so instability can be attributed to a
specific balance rather than guessed at. No damping or continuation is applied on the
first build by design.</p>
</html>"));
end ClosedLoopM1eCS;
