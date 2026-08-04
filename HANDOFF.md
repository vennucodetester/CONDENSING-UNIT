# HANDOFF — refrigeration trainer, state as of 2026-08-04

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

**Gate: 6/6 passing.** FMU `md5 81fa10a087e6ff7ec36aadb3aaef41ee`.
The app runs the FMU (not the placeholder). The **banner stays up** — the couplings are
right, the numbers are not yet.

```
./gate.sh          # THE ONLY supported way to produce a gate result
```

It rebuilds, proves the artifact's md5 actually changed, installs to
`fmu/RefrigerationTrainer.fmu`, then runs the gate. Never run `pytest` directly after
editing a `.mo` file — a staleness guard in `tests/test_scenarios.py` will hard-fail,
because a stale FMU produced **five** false "6/6 PASSED" reports in this project.

### Model vs measured, right now

`python scratch/compare_to_measured.py`

| quantity | model | measured | error |
|---|---|---|---|
| T_evap | -30.41 C | **-24.17 C** | too cold |
| T_cond | 49.16 C | **44.82 C** | +9.7 % |
| coil superheat | 9.16 K | **1.27 K** | far too high |
| subcooling | 6.94 K | **8.98 K** | -22.7 % |
| mass flow | 2.19 g/s | **3.055 g/s** | -28.3 % |
| Q_evap (coil) | 527 W | **776 W** | -32.1 % |
| Q_cond | -877 W | -1124 W | +21.9 % |
| COP | 1.50 | 1.38 | +9.0 % |
| air off evaporator | -5.25 F | -7.6 F | |
| air off condenser | 106.8 F | 111.4 F | -4.1 % |

**The core gap is mass flow and capacity, ~30 % low**, and it is self-reinforcing:
too little flow -> evaporator too cold -> higher PR -> lower eps_v -> less flow.

---

## 2. THE NEXT STEP (was interrupted mid-edit — nothing was written)

**Set `mdot_nom` in `modelica/RefrigerationTrainer/ClosedLoopM1eCS.mo` from `0.010` to
`0.00306` kg/s.**

Why this is the highest-leverage change: ThermoCycle's `Cell1Dim` scales *every* coil
heat-transfer coefficient as

```
U = Unom * (M_dot / Mdotnom)^0.8
```

`Mdotnom = 0.010` against an actual ~2.2 g/s cuts **both** coils to ~26 % of nominal.
The measured design flow is **3.055 g/s**, so `mdot_nom = 0.00306`.

**Prediction to state before running:** U rises ~2.6x, T_evap warms from -30.4 toward
-24.2 C, Q_evap 527 -> 700+ W, PR falls, eps_v rises, mdot rises toward 3 g/s.

**Known risk:** an earlier attempt at `0.0035` destabilised the solver (CVode `mxstep`
at t=6.95 s) on the *old* parameter set. `0.010` was an interim step. If it stalls again,
step down gradually (0.006 -> 0.004 -> 0.00306) and find where it breaks.

After that, in order: evaporator `UA_evap_nom_w_k`, then condenser `UA_cond_nom_w_k`.
One change per gate, prediction stated first.

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
| `UA_evap_nom_w_k` | 132.8 | CoilDesigner mean-temperature method — **still soft** |
| `UA_cond_nom_w_k` | 575.0 | fitted to a 12.95 K approach — **still soft** |
| `mdot_nom` | 0.010 | **WRONG, see section 2** |

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
- `_paint_field_v1` and `_paint_legacy` in `app.py` are **dead paint methods** carrying
  stale copies of the schematic. They caused a wasted edit. Worth deleting.
