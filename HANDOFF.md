# HANDOFF — refrigeration trainer, state as of 2026-08-04 (session 2)

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

**Gate: 6/6 passing, and now REPEATABLE.** FMU `md5 fd97454b797c9706103fff2c1ea1db3c`.
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
| T_evap | -27.48 C | **-24.17 C** | -13.7 % | -30.41 C |
| T_cond | 54.42 C | 44.82 C | +21.4 % **(see the third trap, section 3)** | 49.16 C (+9.7 %) |
| coil superheat | 5.21 K | **1.27 K** | +310 % | 9.16 K |
| subcooling | 9.79 K | **8.98 K** | **+9.0 %** | 6.94 K (-22.7 %) |
| mass flow | 2.65 g/s | **3.055 g/s** | -13.3 % | 2.19 g/s (-28.3 %) |
| Q_evap (coil) | 611 W | **776 W** | -21.2 % | 527 W (-32.1 %) |
| Q_cond | -1153 W | -1124 W | **-2.6 %** | -877 W (+21.9 %) |
| COP | 1.34 | 1.38 | **-2.9 %** | 1.50 (+9.0 %) |
| air off evaporator | -6.09 F | -7.6 F | +19.9 % | -5.25 F |
| air off condenser | 112.24 F | 111.4 F | **+0.8 %** | 106.8 F (-4.1 %) |
| system charge (coils) | 71.9 g | 110 g total | not comparable | 55 g |

COP, `Q_cond` and both condenser air temperatures are now within 3 %. Mass flow and
capacity have closed by more than half. `T_cond` reads worse but probably is not —
section 3, third trap.

**What is left is one number: mass flow, -13.3 %.** `Q_evap = M_dot * dh`, and dh is now
right (subcooling matches), so the capacity error is now essentially the flow error.

Mass flow decomposes as `M_dot = rho_suction * V_s * N * eps_v`. `V_s` is nameplate,
`N * eps_v` is pinned by the measurement (see the circularity warning in section 5), and
the whole remaining deficit is **suction density: 3.67 kg/m3 modelled against 4.293
measured, -14.5 %**, because the evaporator settles 3.3 K too cold. That is the one
number to attack next.

---

## 2. What was tried, what worked, and what to do next

### Why the queued tuning steps were the wrong target

The old plan said: `mdot_nom`, then `UA_evap_nom_w_k`, then `UA_cond_nom_w_k`.
That plan is now disproven at its first step.

Dropping `mdot_nom` 0.010 -> 0.006 raises every coil coefficient by
`(10/6)^0.8 = 1.49x`, and **moved `Q_evap` by 2 W** (527 -> 529). So the evaporator is
**not refrigerant-side limited**, and the two UA steps behind it cannot be binding
either. Do not spend gates on them.

### What is actually blocking

The machine runs **1.27 K superheat at the coil outlet** and **22.88 K at the compressor
inlet**. The difference is ~105 W of suction-line heat gain (section 6.1). The model has
no suction line, so **one superheat value has to serve both roles**, and the two roles
want opposite things:

- to match the coil, it must run near-flooded (1.27 K);
- to match the compressor, the gas entering it must be well superheated (22.88 K).

This was tested, not assumed. Raising the TXV gain `Kp` drives coil superheat down and
every headline error improves — and the gate rejects it, repeatably:

| Kp | superheat | mdot | gate |
|---|---|---|---|
| 0.05 (kept) | 7.18 K | 2.58 g/s | **6/6** |
| 0.10 | 5.08 K | 2.77 g/s | 4/6 |
| 0.20 | 3.35 K | 2.85 g/s (-6.8 %) | 4/6 |

Both failures are physical, not artifacts:

1. **Opening the valve stops raising mass flow** (2.899 vs 2.990 g/s). Closed-loop
   sensitivity is `d(opening)/d(frac) = 1 + Kp*dSH/dfrac`; at high `Kp` the feedback
   cancels the operator's own command. A flooded coil's TXV genuinely loses authority.
2. **Energy balance opens to 2.0 %** as the coil outlet approaches saturation.

So `Kp` was left at 0.05. `superheat_target_k` **was** corrected 7.0 -> 1.27 K (the
measured value) and kept — that change alone is worth -26.7 % -> -15.7 % on mass flow.

That reasoning about subcooling turned out to be **wrong**, and is kept here only so it
is not re-derived: subcooling was zero because of lost charge, not a missing receiver.
See the charge finding below.

### The suction line was added. It did NOT unlock the gain — but it was right anyway

`SuctionLine.mo` now sits between `evap.OutFlow` and `comp.InFlow`. It reproduces the
compressor inlet closely (**T_suction -0.64 C against a measured -1.29 C**, Q 81.6 W
against ~105 W) and it is what took COP from +13.2 % to about 0.

**The stated prediction that it would make `Kp` 0.10-0.20 admissible was WRONG.** With
the suction line in place, `Kp` 0.20 and 0.10 still fail the same two tests. `Kp` stays
at **0.05**. The valve-authority test is a correct claim: a controller that reverses the
operator's own command is non-physical, whatever it does to the error table.

### THE BIG RESULT: no coil UA is the constraint. Three tried, all dead.

| knob | change | effect |
|---|---|---|
| `mdot_nom` (refrigerant-side U, both coils) | 1.49x | `Q_evap` **+2 W** |
| `UA_evap_nom_w_k` (evaporator air side) | 2.26x | `Q_evap` **+13 W** |
| `UA_cond_nom_w_k` (condenser air side) | 1.57x | `T_cond` **-0.9 K** |

All three reverted to their sheet-derived values. **Do not spend further gates on coil
conductances.** The evaporator is not heat-transfer limited in either fluid, and the
condenser is air-FLOW limited, not UA limited — which is why `air off condenser` already
matches to 0.7 %.

### What actually moved the numbers, and what is left

1. **The compressor was running at the wrong mains frequency.** `w_fixed` was 50 Hz;
   `Unit Volts` medians **122.9 V** across the run, so the machine is US 120 V / 60 Hz.
   Corrected to 58.33 rev/s (3500 rpm, the 60 Hz rating for this Cubigel LBP family;
   the old 3000 rpm was the 50 Hz *synchronous* speed, so it was wrong twice — wrong
   frequency AND no slip). Worth +16.7 % open-loop; the closed loop kept **+8.5 %**,
   because it self-limits exactly as section 7.6 warns.
2. **Charge sets subcooling, and charge is set by the initial condition.** Making the
   condenser start profile liquid-heavy took `M_charge` 36.4 -> 58.7 g and subcooling
   0.00 -> 5.29 K. Note the trap I fell into: the `p_evap_start` fix *itself* removed
   ~19 g of charge (evaporator vapour is 2.3x less dense at 2.099 bar than at 4.85), and
   that — not the missing receiver — is why subcooling had collapsed to zero.

3. **Charge was raised to match subcooling.** The condenser `hstart` profile is the only
   charge control in the model (no receiver, no liquid line). Swept and recorded in the
   comment beside it: 36.4 g / 0.00 K, 58.7 g / 5.29 K, 63.1 g / 6.63 K (**5/6**),
   71.9 g / 9.79 K. Chose 71.9 g — lowest total error, subcooling within 9 %.

### A CIRCULARITY YOU MUST NOT WALK INTO

`k_v = 0.0380` was fitted so that `eps_v = 0.95 - k_v*(PR-1)` gives **0.7116** at the
measured PR of 7.28. But that 0.7116 was itself computed from the measured mass flow
**assuming a 50 rev/s shaft**. So:

```
M_dot = rho_suction * V_s * (N * eps_v)
```

and the data pins only the **product** `N * eps_v = 35.6 rev/s`. Deriving "shaft speed"
from the data returns exactly 3000 rpm because that is what was fed in. **It is not
independent evidence, and it must not be cited as confirmation of the speed.**

The 60 Hz correction rests on the supply voltage (122.9 V), which *is* independent. If
the true speed is 3500 rpm then `eps_v` at PR 7.28 is 0.610, not 0.7116, and `k_v`
should be ~0.054. Both were left alone because the model's own PR (9.53) already puts
`eps_v` at 0.626, close to that figure. **To separate them you need one measurement:
actual shaft rpm, or a compressor calibration point at a known PR.**

### The next step: suction density, the last -13.3 %

Everything else is within ~3 % or is a suspect measurement. The flow deficit is entirely
suction density (3.67 vs 4.293 kg/m3), i.e. the evaporator settling at -27.5 C instead
of -24.2 C. In order of expected value:

- **Do NOT reach for coil UA.** Three conductances, all inert. It is not a heat-transfer
  problem.
- **Measure the shaft rpm** and break the circularity above. It is the least-evidenced
  number in the model.
- **Resolve the condenser approach contradiction (section 3)** — a trustworthy head
  pressure would re-open `T_cond` as a target and let the charge choice be revisited.
- ~~Check `T_box_k` against the data.~~ **DONE, it is correct.** Over 8,623 running
  samples, `Air Into Evap Left` medians **+0.77 F** and `Air Into Evap Right`
  **-1.86 F**, straddling the model's 0.00 F. `Air Out of Evap Right` medians -7.90 F,
  consistent with the -7.6 F reference. The entering air is not the problem.

---

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
| condenser airflow | 0.076 m3/s (161 CFM) | fan curve x coil dP |
| `UA_evap_nom_w_k` | 132.8 | CoilDesigner mean-temperature method — soft, but **proven not to be the constraint** |
| `UA_cond_nom_w_k` | 575.0 | fitted to a 12.95 K approach — soft; condenser now matches to 0.1 %, so leave it |
| compressor speed | **58.33 rev/s (3500 rpm)** | 60 Hz, from a measured 122.9 V median supply. Was 50.0 (3000 rpm, 50 Hz synchronous) |
| `superheat_target_k` | 1.27 | measured coil-outlet superheat |
| suction line `UA_suction_w_k` | 2.5 | 105 W measured over a 44 K mean driving dT |
| condenser `hstart` | **linspace(4.5e5, 2.6e5, N)** | sets system charge -> 58.7 g, subcooling 5.29 K |
| `mdot_nom` | **0.006** | 0.00306 is the measured flow and is CORRECT in principle, but the model will not integrate there — see below |
| `p_evap_start` | **2.099e5** | Psat at the measured -24.17 C. Was 4.85e5 (= +0.72 C) — the startup-transient bug behind the flaky gate |
| `evap.Tstart_inlet/outlet` | **248.99 / 250.25 K** | same measured state, kept consistent with `p_evap_start` |
| `evap.hstart` | **2.95116e5 -> 5.49227e5** | liquid at 8.98 K subcooling -> vapour at 1.27 K superheat |
| `comp.T_su_start` | **271.86 K** | measured compressor inlet (-24.17 C + 22.88 K) |
| `superheat_target_k` | **1.27** | measured coil-outlet superheat. Was a generic 7.0 |
| TXV `Kp` | 0.05 | 0.10 and 0.20 both tried and reverted — section 2 |

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
- **The suction line — section 2. This is the next real step and it needs your decision.**
