# HANDOFF — refrigeration trainer, state as of 2026-08-04 (end of session 2)

**Self-contained. You should not need the conversation this came from.**

Read `ENGINEERING_DIRECTIVES.md` first — it outranks this file.
Supersedes the older status blocks in `NEXT_STEPS.md`; those are kept as history.

---

## 0. IF YOU ARE ASKED TO WORK AUTONOMOUSLY — READ THIS FIRST

The previous session was told "you have all night, keep pushing" and **stopped after one
finding**. Not a capability limit — a mistake. Do not repeat it.

### How this actually works

You do not run in the background. You work in a **turn**: a continuous run of tool calls.
**The turn ends the moment you write a final message instead of another tool call**, and
nothing happens until the user types again. So:

> **Writing a progress report to chat IS stopping.**

The previous session ended its turn to report an important discovery (a faulty sensor
that invalidated its own earlier calibration). The instinct to surface it was reasonable;
ending the turn to do so was not.

### The protocol

1. **Never write a final message mid-task.** Chain tool calls continuously. Write a final
   message only when the goal is met, or you are blocked on a decision only the user can
   make (a physics change, a procurement, a gate edit).
2. **Log, do not report.** Mid-run findings go into `docs/` or this file via a tool call,
   not into chat. This both preserves the work and keeps context lean.
3. **Keep command output terse.** Pipe through `grep` / `tail` / `head`. Never dump a full
   log or a whole file. Most of the previous session's context went into output where only
   one line mattered.
4. **Background or parallelise slow work.** `./gate.sh` is ~5 minutes. Probes can run
   concurrently rather than blocking.

### The real constraint is CONTEXT, not time

Roughly **15-25 gate cycles** before the context window fills. When it fills, detail is
lost to summarisation. Budget accordingly: terse output, write findings to files, do not
re-read large files you have already seen.

Expect to need the user to press continue when context runs out. That one is unavoidable.

### A good stopping rule to ask for

If the instruction is vague ("keep going"), ask for a testable one, e.g.:

> "Do not write a final message until `scratch/compare_to_measured.py` is within 10 % on
> capacity and 2 K on the saturation temperatures, or you hit a decision only I can make."

Unambiguous, and it makes "am I done?" a measurement rather than a judgement call.

---

## 1. Where things stand

**Gate: 6/6 passing, and now REPEATABLE.** FMU `md5 99d83db88d52149a746788a16ff85237`.
The app runs the FMU (not the placeholder). The **banner stays up** — the couplings are
right, the numbers are closer but not yet there.

```
./gate.sh          # THE ONLY supported way to produce a gate result
```

It rebuilds, proves the artifact's md5 actually changed, installs to
`fmu/RefrigerationTrainer.fmu`, then runs the gate. Never run `pytest` directly after
editing a `.mo` file — a staleness guard in `tests/test_scenarios.py` will hard-fail,
because a stale FMU produced **five** false "6/6 PASSED" reports in this project.

### READ `docs/NONDETERMINISM.md` BEFORE TRUSTING ANY GATE RESULT

The gate used to return **4/6, 0/6, 6/6, 0/6 on a byte-identical FMU**. Every pass/fail
count in this repo written before 2026-08-04 — including the old "6/6" baseline above —
was one sample of a random variable. Cause and fix are in that file. Since the fix, the
gate has returned 6/6 in eight consecutive separate processes.

**Standing rule: one green gate is not evidence. Repeat it.**

```bash
for i in 1 2 3; do python -m pytest tests/test_scenarios.py -v 2>/dev/null | grep -cE " PASSED"; done
```

### Model vs measured, right now

`python scratch/compare_to_measured.py`

| quantity | model | measured | error | was (session 1) |
|---|---|---|---|---|
| T_evap | -28.59 C | **-24.17 C** | -18.3 % | -30.41 C |
| T_cond | 46.13 C | 44.82 C | **+2.9 %** | 49.16 C (+9.7 %) |
| coil superheat | 8.24 K | **1.27 K** | +549 % | 9.16 K |
| subcooling | 8.62 K | **8.98 K** | **-4.0 %** | 6.94 K (-22.7 %) |
| mass flow | 2.72 g/s | **3.055 g/s** | -11.0 % | 2.19 g/s (-28.3 %) |
| Q_evap (coil) | 693 W | **776 W** | **-10.8 %** | 527 W (-32.1 %) |
| Q_cond | -1225 W | -1124 W | -9.0 % | -877 W (+21.9 %) |
| COP | 1.56 | 1.38 | +12.7 % | 1.50 (+9.0 %) |
| air off evaporator | -6.89 F | -7.6 F | **+9.3 %** | -5.25 F |
| air off condenser | 110.00 F | 111.4 F | **-1.3 %** | 106.8 F (-4.1 %) |
| system charge (coils) | ~62 g | 110 g total | not comparable | 55 g |

COP, `Q_cond` and both condenser air temperatures are now within 3 %. Mass flow and
capacity have closed by more than half. `T_cond` reads worse but probably is not —
section 3, third trap.

### THE DEFECT THAT WAS HOLDING EVERYTHING — the air side was plumbed CO-CURRENT

`CoilAirSide.mo` marched the air `T_air[1] -> T_air[N+1]` across cells 1..N while the
refrigerant also flows 1 -> N, so air cell `i` exchanged with refrigerant cell `i`.
**That is a parallel-flow exchanger.** A co-current coil cannot cool its air below the
refrigerant it is leaving alongside, no matter how large its UA.

This single defect produced every symptom that had resisted two sessions of diagnosis:

- both coils stuck near half the effectiveness the measured air temperatures imply;
- **total immunity to UA** — sweeping `UA_evap_nom_w_k` 132.8 -> 5000 (38x) moved
  `Q_evap` 628.9 -> 646.7 W and then SATURATED, with air off pinned at **-21.35 C**,
  which is exactly the refrigerant outlet (T_evap -27.85 + 6.50 K superheat). The model
  was sitting on its co-current limit and holding there;
- immunity to mesh refinement (N 5 -> 10, +1.4 %);
- **invisibility to every conservation check.** `res_energy_w` read 0.00 W throughout,
  because no energy is lost — the transfer is BOUNDED, not leaked. This is why the
  defect survived so long: the model was perfectly self-consistent and wrong.

Fixed by pairing air node `i` with refrigerant cell `N+1-i` (`counterflow = true`, a
parameter, so the old arrangement remains reproducible). Real fin-tube coils are
circuited counter-flow to the air.

**Effect: `Q_evap` -19.0 % -> -10.8 %, and it unlocked the whole condenser** (T_cond
+10.2 % -> +2.9 %, subcooling -30.4 % -> -4.0 %) once charge and TXV gain were re-tuned
against a coil that finally responds.

### The lesson worth keeping

Seven parameter levers were swept before this was found, and all seven were nearly inert.
**Persistent insensitivity to a parameter that physics says should matter is itself the
diagnostic.** It means the quantity is limited by structure, not by magnitude — and the
place to look is the flow arrangement, not the coefficient.

---

## 2. What to do next

### Do NOT re-run these. Seven levers, all nearly inert.

Every one of these was swept with the gate repeated at each point. They are inert because
the coils were structurally limited (section 1), and re-testing them now that the coil is
fixed is reasonable ONLY for `UA_evap_nom_w_k` — the rest were sound to begin with.

| lever | range tried | effect on Q_evap |
|---|---|---|
| `mdot_nom` (refrigerant-side U) | 1.49x | +2 W |
| `UA_evap_nom_w_k` (evaporator air side) | 2.26x, then 38x | +13 W, then SATURATED |
| `UA_cond_nom_w_k` (condenser air side) | 1.57x | ~0 (T_cond -0.9 K) |
| `txv.Afull` (valve capacity) | 2.0x | -4 W, while mass flow rose 23 % |
| condenser `hstart` (charge, 36-72 g) | 2.0x | 611-629 W |
| condenser airflow + ambient | 1.58x | +8 W |
| `N` (cells per exchanger) | 5 -> 10 | +9 W |

Two components were also checked and cleared outright:

- **The compressor.** Specific work **167.8 kJ/kg** against ~176 measured, -4.7 %. It
  does the right work per kilogram.
- **The mesh.** N 5 -> 10 gives +1.4 %, so the N = 5 results are grid-converged.

### The TXV gain, and why it is 0.04

The proportional law is `opening = clamp(txv_opening_frac + Kp*(SH - SH_target))`, and
closed-loop valve authority is `d(opening)/d(frac) = 1 + Kp*dSH/dfrac`. Raise `Kp` too
far and the feedback cancels the operator's own command — the valve stops being a
control, which `test_more_mass_flow_raises_discharge_pressure` correctly rejects.

Swept AFTER the counterflow fix:

| Kp | superheat | mass flow | Q_evap | gate |
|---|---|---|---|---|
| 0.05 | 7.04 K | 2.75 g/s | 697 W | **5/6** — authority +4.8 %, bar is +5 % |
| **0.04 (current)** | 8.24 K | 2.72 g/s | 693 W | **6/6** |
| 0.03 | 9.71 K | 2.63 g/s | 674 W | 6/6, but capacity drops |

0.05 fails by 0.2 percentage points. It is tempting and it is not available.
**Do not "fix" this by loosening the 1.05 factor in that test.**

### A CIRCULARITY YOU MUST NOT WALK INTO

`k_v = 0.0380` was fitted so `eps_v = 0.95 - k_v*(PR-1)` gives **0.7116** at the measured
PR of 7.28. But that 0.7116 was itself computed from measured mass flow **assuming a
50 rev/s shaft**. Since

```
M_dot = rho_suction * V_s * (N * eps_v)
```

the data pins only the **product** `N * eps_v = 35.6 rev/s`. Deriving "shaft speed" from
the data returns exactly 3000 rpm because that is what was fed in. **That is not
independent evidence and must never be cited as confirmation of the speed.**

The 60 Hz correction rests on the supply voltage (122.9 V median), which IS independent.
Separating `N` from `eps_v` needs one new measurement: actual shaft rpm, or a compressor
capacity point at a stated rpm and PR.

### THE NEXT STEP — resolve the measurement contradictions BEFORE tuning further

Three of the four traps in section 3 are unresolved, and two of them now bound what can
be believed about the remaining error:

1. **The data does not close its own energy balance** (fourth trap, 17 % gap). If
   `Q_cond` and `Unit Watts` are right, true `Q_evap` is nearer 586 W and the model's
   693 W is 18 % HIGH rather than 11 % low. **The sign of the remaining capacity error
   is currently unknown.** Tuning capacity further without settling this risks
   calibrating toward a wrong number — exactly the `k_v = 0.0588` mistake again.
2. **The condenser approach is impossible** (third trap, 0.71 K). Until a trustworthy
   head pressure exists, `T_cond` is not a valid target — though it now reads +2.9 %
   anyway, so this is less urgent than it was.

**If you must make model progress while those are open**, the honest target is superheat
(+549 %), which is structural rather than parametric: the machine holds 1.27 K at the
coil outlet and 22.88 K at the compressor, and the model's single proportional TXV law
cannot reproduce a real thermostatic element's near-integral behaviour without losing
valve authority. That needs a better TXV model, not a better gain. See section 6.

## 3. The measured reference — READ `docs/MEASURED_REFERENCE.md`

Derived from `fileshare/data 2.002.csv` (10,080 rows x 98 columns), 1,435 samples inside
the 49 steady windows in `fileshare/Steady_State_Operating_Data.xlsx`.
Regenerate: `python scratch/measured_reference.py`

### THE SENSOR TRAP — this invalidated a full calibration cycle

**The suction pressure transducer reads ~4 psi HIGH.** Every sensor on the coil
contradicts it:

| sensor | reading |
|---|---|
| Evap coil inlet, circuit 2 (refrigerant, two-phase) | **-10.01 F** |
| Defrost termination sensor (on the coil) | -9.90 F |
| TXV bulb (coil outlet) | -9.22 F |
| air off the coil | -7.7 F |
| **T_evap implied by the transducer** | **-5.73 F** |

Coil metal cannot be colder than the refrigerant inside it. Use **T_evap = -24.17 C**,
implying ~15.7 psig, not the transducer's 19.56.

### THE OTHER TRAP — two different superheats

- **Coil-outlet superheat = 1.27 K.** The coil runs nearly FLOODED. **Compare the model
  to this.**
- Compressor-inlet superheat = 22.88 K. Includes ~105 W / 21 K of **suction-line heat
  gain**, which the model does not represent at all.

Comparing the model's coil superheat against the 22.88 K figure was an error made and
corrected on 2026-08-04.

### A THIRD TRAP — the condenser approach is impossible (found 2026-08-04)

`T_cond` and `air off condenser` cannot both be right:

| | condensing | air leaving | approach |
|---|---|---|---|
| measured | 44.82 C | 44.11 C (111.4 F) | **0.71 K** |
| model | 50.07 C | 44.57 C (112.2 F) | 5.50 K |

**A 0.71 K approach is not achievable by a finite-area coil.** Air cannot leave a
condenser at essentially the condensing temperature; that needs infinite UA. A real
air-cooled condenser runs 5-10 K.

The air-side energy balance independently supports the air-off reading: at the modelled
0.076 m3/s the model reproduces `air off condenser` to **+0.7 %** and `Q_cond` to
**-2.6 %**. So the airflow and the leaving-air temperature are consistent with each
other, and it is `T_cond` that does not fit.

Working back from a normal 5-8 K approach on the measured leaving air gives a true
condensing temperature of **49-52 C** — which is where the model sits unaided (50.07 C).

**So the model's apparent +11.7 % error on `T_cond` may not be an error at all**, and the
discharge-pressure transducer is the prime suspect, exactly as the suction transducer was.
**Do not tune the condenser against `T_cond` until this is resolved.** It would be the
`k_v = 0.0588` mistake a second time. Resolving it needs one measurement: a reliable
head pressure, or a liquid-line temperature at the condenser outlet.

### A FOURTH TRAP — the measured data does not close its own energy balance

```
Q_evap 776 W + W_gas 538 W (683.1 Unit Watts - 50 W fan, at 85 % motor) = 1314 W
condenser air side                                                      = 1124 W
                                                                    gap = 191 W (17 %)
```

Whatever the machine rejects, it must equal what it absorbs plus the work put in. These
three measurements cannot all be right. Note the model closes its own balance exactly
(`res_energy_w` = 0.00 W), so this is a property of the DATA, not of the model.

This matters for how the comparison table is read: if `Q_cond` is right and `W` is right,
then the true `Q_evap` is nearer 586 W — and the model's 693 W would be 18 % HIGH rather
than 11 % low. **Do not drive capacity further until this is resolved**, or you may be
calibrating toward a number that is itself wrong. It is the same family of problem as the
condenser approach above and probably has the same root.

### Do NOT trust the discharge temperature

`Disch Temp Out of Comp` = 155.3 F gives compressor work of 89.1 kJ/kg — **less than the
isentropic 96.9 kJ/kg, which is impossible.** Strap-on thermocouple, reads ~50-70 F below
the gas. Real discharge would be 188-227 F. **Never calibrate compressor efficiency
against it.** Use `Unit Watts` (685 W, minus ~50 W condenser fan) instead.

---

## 4. Withdrawn hypotheses — do not re-derive these

| claim | verdict |
|---|---|
| `k_v = 0.0588` from "measured" eps_v | **WRONG** — used the faulty transducer. Coil-derived value is **0.0380**, where the catalogue already sat. Reverted. |
| Condensate-pan hot-gas coil is 16-30 % of condenser load | **WRONG** — measured **26.3 W, 2.3 %**. Negligible. Does not need modelling. |
| Airflows are wrong / need measuring | **WRONG** — deriving evaporator airflow independently (condenser air + refrigerant enthalpies) gives **323 CFM** vs the model's 318. Agreement 1.5 %. NEXT_STEPS Step 2 is settled. |
| Redundant `Cells.p` states cause the index-reduction errors | **WRONG** — alias elimination already collapses them; one pressure state per exchanger. |
| Mass-flow sign / start values cause the init failure | **WRONG** — tested, bit-identical across four start configurations. |
| `M_charge_kg` (55 g) vs the 110 g system charge is a discrepancy | **NOT COMPARABLE** — coils only. No lines, drier, shell or oil in the model. |
| The evaporator is refrigerant-side limited, so coil UA / `mdot_nom` are the lever | **WRONG (2026-08-04)** — a 1.49x rise in every coil coefficient moved `Q_evap` by **2 W**. Killed the whole queued UA plan. |
| The gate's pass count is a property of the model | **WRONG (2026-08-04)** — it varied 0/6 to 6/6 on a byte-identical FMU. See `docs/NONDETERMINISM.md`. |
| Coil superheat can be brought to the measured 1.27 K by raising the TXV gain | **WRONG (2026-08-04)** — it works numerically and breaks valve authority and the energy balance. Blocked on the suction line, section 2. |
| The `mxstep` stalls were solver stiffness needing gentler parameter steps | **PARTLY WRONG** — the dominant cause was `p_evap_start` being 30 K too warm, i.e. a startup transient. Fixing the initial condition cured both the stalls at 0.006 and the nondeterminism. |
| Adding the suction line will make TXV gain 0.10-0.20 admissible | **WRONG (2026-08-04)** — my own prediction, scored and failed. Both gains still break valve authority and the energy balance with the suction line present. The suction line was still correct on its own merits (COP +13.2 % -> -0.3 %). |
| Subcooling collapsed to 0 K because the model has no receiver or liquid line | **WRONG (2026-08-04)** — it collapsed because the `p_evap_start` fix removed ~19 g of charge. Restoring charge through the condenser start profile brought it back to 5.29 K. |
| The coils' poor effectiveness is a conductance, mesh or charge problem | **WRONG (2026-08-04)** — it was the FLOW ARRANGEMENT. `CoilAirSide` was co-current. Section 1. |
| The compressor is the remaining suspect | **WRONG (2026-08-04)** — specific work 167.8 kJ/kg against ~176 measured, -4.7 %. |
| Coarse discretisation (N=5) limits the coils | **WRONG (2026-08-04)** — N=10 gives +1.4 %. Grid-converged. |
| Some coil conductance is the binding constraint on capacity | **WRONG (2026-08-04)** — all three were tried and none moved anything. See section 2. |
| `T_box_k` (0 F) might not match the box air in the measured windows | **WRONG (2026-08-04)** — measured medians are +0.77 F and -1.86 F on the two evaporator inlet sensors. 0 F is right. |
| The measured `T_cond` of 44.82 C is a valid calibration target | **DOUBTFUL (2026-08-04)** — it implies a 0.71 K condenser approach, which is impossible. Section 3, third trap. |

---

## 5. What is calibrated, and from what

| parameter | value | source |
|---|---|---|
| `V_s_cm3` | 20.0 | ALX440U-DS3B01 nameplate |
| `k_v` | 0.0380 | coil-derived eps_v 0.7116 at PR 7.28 |
| evaporator `A` / `V` | 0.572 m2 / 1051 cm3 | Hussmann 3186699 drawing (0.375 x 0.016 in tube) |
| condenser `A` / `V` | 0.42 m2 / 183 cm3 | Hussmann 3113227 microchannel drawing |
| `T_box_k` | 255.37 K (0 F) | CoilDesigner LT sheet |
| evaporator airflow | 0.15 m3/s (318 CFM) | fan curve x coil dP; **confirmed by measurement** |
| condenser airflow | **0.1203 m3/s (255 CFM)** | air-side energy balance over the running samples — MEASURED, was an 0.076 fan-curve estimate |
| `T_amb_k` (condenser inlet) | **308.04 K (94.80 F)** | measured `Air Into Cond Right`; the LEFT sensor reads 88.48 F, see section 3 |
| `CoilAirSide.counterflow` | **true** | real coils are circuited counter-flow. The old co-current arrangement was THE defect — section 1 |
| `UA_evap_nom_w_k` | 132.8 | CoilDesigner mean-temperature method — still soft. It was inert only because the coil was co-current; **worth ONE re-test now that it is not** |
| `UA_cond_nom_w_k` | 575.0 | fitted to a 12.95 K approach — soft; `T_cond` now reads +2.9 %, so leave it |
| compressor speed | **58.33 rev/s (3500 rpm)** | 60 Hz, from a measured 122.9 V median supply. Was 50.0 (3000 rpm, 50 Hz synchronous) |
| suction line `UA_suction_w_k` | 2.5 | 105 W measured over a 44 K mean driving dT |
| condenser `hstart` | **linspace(5.2e5, 2.9e5, N)** | THE ONLY charge control (no receiver, no liquid line). Gives subcooling -4.0 %. Re-tuned after the counterflow fix |
| `mdot_nom` | **0.006** | 0.00306 is the measured flow and is CORRECT in principle, but the model will not integrate there — see below |
| `p_evap_start` | **2.099e5** | Psat at the measured -24.17 C. Was 4.85e5 (= +0.72 C) — the startup-transient bug behind the flaky gate |
| `evap.Tstart_inlet/outlet` | **248.99 / 250.25 K** | same measured state, kept consistent with `p_evap_start` |
| `evap.hstart` | **2.95116e5 -> 5.49227e5** | liquid at 8.98 K subcooling -> vapour at 1.27 K superheat |
| `comp.T_su_start` | **271.86 K** | measured compressor inlet (-24.17 C + 22.88 K) |
| `superheat_target_k` | **1.27** | measured coil-outlet superheat. Was a generic 7.0 |
| TXV `Kp` | **0.04** | swept after the counterflow fix. 0.05 is better physics but fails valve authority by 0.2 points — section 2 |
| `N` | 5 | grid-converged: N=10 gives +1.4 % |

### Why `mdot_nom` is 0.006 and not the measured 0.00306

`0.00306` and `0.004` both fail to integrate (CVode `mxstep` at t≈7.4 s), *even after*
the initial-condition fix. Lowering `mdot_nom` raises every coil coefficient, which
stiffens the evaporator's torn nonlinear block (equations 1266-1312). `0.006` is the
lowest value that gates cleanly. Since dropping 0.010 -> 0.006 changed `Q_evap` by 2 W,
**pushing further down this parameter is not worth another gate** — it is not where the
remaining error lives.

---

## 6. Known model omissions

1. **Suction line** — ~105 W / 21 K of heat gain between coil outlet and compressor.
2. **Circuit maldistribution** — measured 4.2 F split between the two evaporator
   circuits (coil inlet circ 1 -5.84 F, circ 2 -10.01 F). Single-circuit model. M4.
3. **Charge inventory** — `M_charge_kg` is coils only. Blocked on filter-drier free
   volume and liquid-line length/ID. Charge is an *outcome* of the initial condition,
   not an input; making it a control needs the model inverted. M3.
4. **Condensate-pan coil** — measured negligible (26 W), deliberately not modelled.

---

## 7. Discipline that has repeatedly mattered

1. **Run the experiment; don't reason about it.** Every real advance came from a run.
2. **Read the built artifact, not the source.** Two hypotheses died this way.
3. **A tool reporting success is not proof.** `checkModel` prints "completed
   successfully" while reporting an over-determined system; `buildModelFMU` returns an
   **empty path** on failure.
4. **Check the FMU is newer than every `.mo`.** Five false 6/6 reports came from this.
5. **In Modelica, `Real x = expr;` is an EQUATION, not a start value.** Twice this
   silently over-determined the model. Use `(start = ...)`.
6. **State predictions before running, and score them.** The recurring error is
   assuming open-loop scaling in a loop that self-limits.
7. **Never edit a test to pass.** If an assertion fails, the physics or the claim is
   wrong — fix one of those.

---

## 8. Still open / needs the user

- **Filter drier part number** and **liquid-line length + tube size** — the only
  remaining data blockers, both for charge (M3).
- **The 8 s solve** blocks the UI. Batched inputs + explicit Calculate defuses it, but a
  background thread would keep the window responsive.
- ~~`_paint_field_v1` and `_paint_legacy` in `app.py` are dead paint methods.~~
  **DONE 2026-08-04** — both deleted, 408 lines removed (2059 -> 1651). Neither name was
  referenced anywhere but its own `def`. `paintEvent` is the live one. The other 16 tests
  (including `test_ui_workflow`) still pass.
- ~~The suction line.~~ **DONE 2026-08-04** — `SuctionLine.mo`, ~82 W of ambient gain,
  reproduces the measured compressor inlet to 0.65 K.
- **A trustworthy head pressure** — resolves the third trap. Until then `T_cond` is not a
  valid calibration target.
- **Actual compressor shaft rpm** — breaks the `N * eps_v` circularity in section 2.
  Nothing in the existing data can separate them.
- **Where the two condenser inlet probes are physically mounted.** They disagree by
  6.3 F. The 255 CFM figure depends on which one represents true entering air.
- **Which of `Q_evap`, `Q_cond` or `Unit Watts` is wrong** (fourth trap). Until this is
  settled, the SIGN of the remaining capacity error is unknown.
