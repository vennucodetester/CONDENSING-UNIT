# HANDOFF — R290 refrigeration trainer, state as of 2026-08-06 (end of session 4)

**Self-contained. You should not need the conversation this came from.**

Read `ENGINEERING_DIRECTIVES.md` first — it outranks this file. `SCOPE.md` §0 outranks
both.

This file was rewritten on 2026-08-06 into a single current document. Earlier versions
stacked session notes on top of stale ones, so a reader met contradictions (the banner
"stays up", `Kp` "is 0.04", the traps "unresolved" — all now false). Detailed working
lives in `docs/`; this file is the map.

---

## 0. HOW TO WORK IN THIS PROJECT — read before doing anything

### If you are asked to work autonomously

You work in a **turn**: a continuous run of tool calls. **The turn ends the moment you
write a final message instead of another tool call.** So:

> **Writing a progress report to chat IS stopping.**

1. **Never write a final message mid-task.** Chain tool calls. Write a final message only
   when the goal is met, or you are blocked on a decision only the user can make.
2. **Log, do not report.** Mid-run findings go into `docs/` or this file via a tool call,
   not into chat.
3. **Keep command output terse.** Pipe through `grep`/`tail`/`head`. Never dump a log or
   a whole file.
4. Ask for a **testable stopping rule** if the instruction is vague. `TASKS.md` shows the
   pattern that worked: numbered, mechanically checkable conditions, plus an explicit
   fallback per task so nothing can deadlock.

### TOKENS ARE THE BINDING CONSTRAINT — standing instruction from the user

**"Make every token count."** Context, not wall clock, decides how much gets done.

1. **`fmpy` and the FMU write a wall of stderr on every run** — CoolProp banners,
   `LOG_ASSERT` lines, ctypes tracebacks. **Always end FMU commands with `2>/dev/null`**
   and pipe through `tail`/`grep`.
2. **Never let `./gate.sh` print in full.** Use `--repeat 3` (one line) or
   `| grep -E "built ok|FAILED"`.
3. **Editing a `.mo` with `Edit`/`Write` can echo the whole file back.** Prefer `sed -i`
   or a small `python -` heredoc for value changes; reserve `Edit` for comment blocks.
4. **Do not re-read a file you have read. Do not re-verify a green gate.**
5. **Print derived numbers, not raw data.** A one-line `python -c` that computes the
   comparison beats dumping a table you then have to reason over.

### MANY PARAMETERS SWEEP WITHOUT A REBUILD — use this

Anything annotated `Evaluate=false` is a tunable FMU parameter and can be swept through
`start_values` with **no rebuild and no gate cycle**: `txv_gain_per_k`,
`txv_screw_span_k`, `txv_setpoint_lever`, `UA_evap_nom_w_k`, `UA_cond_nom_w_k`, `T_amb_k`,
`T_box_k`, `V_s_cm3`, `tau_txv`, `superheat_target_k` and every `*_frac` input. A
four-point sweep costs ~3 minutes instead of four 6-minute gates. This is the biggest
efficiency lever in the project and it was only exploited from session 4 onward.

`mdot_nom`, `N`, `p_evap_start` and both `hstart` profiles are **not** tunable — they need
a rebuild.

---

## 1. CURRENT STATE

**Gate: `bash ./gate.sh --repeat 3` → `3/3 runs at 7/7`. Full suite: 50 tests, all pass.**
Pushed as commit `507aae7`; later `Save local work` commits and a merge sit on top and
changed none of it.

The app runs the **FMU**, not the placeholder. The known-wrong-physics banner is now
**hidden when the FMU is live** and still shown on fallback to the demo engine.

### Model vs measured (`python scratch/compare_to_measured.py`)

Targets are **bands**, not points — see §3. A model inside the band is converged as far as
these instruments can tell.

| quantity | model | measured band | verdict |
|---|---|---|---|
| Q_evap | 712 W | 610 – 891 W | **IN** |
| mass flow | 2.90 g/s | 2.11 – 3.08 g/s | **IN** |
| Q_cond | −1270 W | −1428 .. −1147 W | **IN** |
| COP | 1.55 | 1.14 – 1.66 | **IN** |
| air off condenser | 110.6 F | 110.3 – 111.1 F | **IN** |
| subcooling | 8.79 K | 8.89 K | −1.1 % |
| T_cond | 46.65 C | 44.73 C | +4.3 % |
| **coil superheat** | **1.93 K** | **1.27 K** | **+51.9 %** |
| **T_evap** | **−27.69 C** | **−24.17 .. −23.59 C** | **−14.6 %** |
| **air off evaporator** | **−7.09 F** | **−8.33 .. −8.15 F** | **+13.0 %** |

### Held-out extrapolation — the strongest evidence the physics is real

`data 2.003.csv` was never used for calibration and is a **7 K hotter** operating point.
With nothing retuned except `T_amb_k`:

```bash
python -c "import sys; sys.path.insert(0,'scratch');
from compare_to_measured import run, model_row, report;
report(model_row(run(T_amb_k=315.87)), 'data 2.003')"
```

`T_cond` +3.2 %, condenser air-off **IN band**, Q_evap / Q_cond / COP all IN. Capacity
correctly falls with ambient. This is extrapolation, not fitting.

---

## 2. COMMANDS

```bash
bash ./gate.sh --repeat 3          # THE ONLY supported way to produce a gate result
python -m pytest tests/            # full suite (~7 min)
python scratch/compare_to_measured.py            # model vs measured, 2.002
python scratch/compare_to_measured.py "data 2.003"
python scratch/trap_resolution.py                # the measurement analysis
python scratch/trap_resolution.py --emit         # regenerate docs/measured_targets.json
```

**Never run `pytest` directly after editing a `.mo`.** A staleness guard hard-fails,
because a stale FMU produced **five** false "6/6 PASSED" reports in this project.

**If `--repeat` returns 0/3 with a `STALE FMU` message, re-run before believing it.** Seen
once in session 4: the freshly built FMU had not landed before pytest started. The guard
behaved correctly — it refused to report rather than test a stale artifact.

**One green gate is not evidence** — the gate once returned 4/6, 0/6, 6/6, 0/6 on a
byte-identical FMU. Read `docs/NONDETERMINISM.md` before trusting any single result. That
is why `--repeat` exists.

---

## 3. THE MEASURED REFERENCE — and the four traps, all now resolved

Full working: **`docs/TRAP_RESOLUTION.md`**. Source: `fileshare/data 2.002.csv`
(1,435 samples in 48 steady windows) and the held-out `data 2.003.csv`.

### Targets are BANDS. This changed everything.

Every duplicated probe pair on this machine disagrees materially — the evaporator air dT
reads 4.93 K on the Left pair and 3.37 K on the Right, so **Q_evap is 610–891 W, not
776 W**. The old point targets silently used the Left sensor of each pair, which made a
46 % instrument disagreement look like a 10.8 % model error. Targets live in
`docs/measured_targets.json`.

### Trap 1 — the suction transducer reads ~4 psi HIGH. STILL TRUE, still binding.

Every coil sensor contradicts it, and it reproduces on both datasets (3.36 K and 3.84 K).
**Use T_evap = −24.17 C**, not the transducer's value. This trap invalidated a full
calibration cycle (`k_v = 0.0588`).

### Trap 2 — two different superheats. STILL TRUE.

- **Coil-outlet superheat = 1.27 K.** The coil runs nearly flooded. **Compare the model to
  this.**
- Compressor-inlet superheat = 22.88 K, which includes ~105 W of suction-line gain.
  `SuctionLine.mo` reproduces the compressor inlet to 0.65 K.

### Trap 3 — "the condenser approach is impossible". **WITHDRAWN.**

The premise assumed the whole coil sits at `T_cond`. It does not: **31–47 % of the duty is
desuperheating** from gas at 108–163 C, and in a counter-flow coil the air exits at that
end. No sensor contradicts the transducer, and the model reaches the same approach with
finite UA. **`T_cond` = 44.82 C is a valid target.** Working back from a "normal 5–8 K
approach" would have put `T_cond` 5 K wrong.

### Trap 4 — "the data does not close its own energy balance". **DISSOLVED.**

The old reference derived `mdot` **from** `Q_cond` and `Q_evap` **from** `mdot`, so they
were never independent measurements. The "17 % gap" reduced to the wattmeter disagreeing
with one strap-on thermocouple (`Cond Inlet Temp`) that implies 85.7 kJ/kg of compressor
work — **below the isentropic floor, therefore impossible**. Anchoring on the evaporator
air side and carrying the probe disagreement as an interval, **the balance closes at the
calibrated 0.1203 m³/s on both datasets.**

### Do NOT trust these sensors

`Disch Temp Out of Comp` and `Cond Inlet Temp` are strap-on thermocouples reading
50–70 F below the gas. Both imply compressor work below isentropic. **Never calibrate
against them.** Use `Unit Watts` minus the fan.

---

## 4. WHAT IS CALIBRATED, AND FROM WHAT

`tests/test_calibration_provenance.py` enforces this mechanically: a value cannot change
unless its recorded source changes with it.

| parameter | value | source |
|---|---|---|
| `V_s_cm3` | 20.0 | ALX440U-DS3B01 nameplate |
| `k_v` (in `CompressorEM.mo`) | 0.0380 | coil-derived eps_v 0.7116 at PR 7.28 |
| compressor speed | 58.33 rev/s (3500 rpm) | 60 Hz, from a measured 122.9 V supply |
| evaporator `A` / `V` | 0.572 m² / 1326 cm³ | Hussmann 3186699 drawing |
| condenser `A` / `V` | 0.42 m² / 183 cm³ | Hussmann 3113227 microchannel drawing |
| `T_box_k` | 255.37 K (0 F) | CoilDesigner LT sheet; confirmed by measurement |
| `T_amb_k` | 308.04 K (94.80 F) | measured `Air Into Cond Right` |
| evaporator airflow | 0.15 m³/s (318 CFM) | fan curve × coil dP; confirmed at 323 CFM |
| condenser airflow | **0.1203 m³/s (255 CFM)** | air-side energy balance; inside the closing interval on both datasets |
| `CoilAirSide.counterflow` | **true** | real coils are circuited counter-flow |
| `UA_evap_nom_w_k` | 132.8 | CoilDesigner. **SOFT, and now known NOT to be the binding constraint** — §5 |
| `UA_cond_nom_w_k` | 575.0 | fitted to a 12.95 K approach; `T_cond` +4.3 % |
| **`txv_setpoint_lever`** | **true** | thermostatic element; user-approved 2026-08-06 |
| **`txv_gain_per_k`** | **0.50** | 2× the property-derived 0.25; swept, `docs/PHYSICS_NOTES.md` |
| `txv_screw_span_k` | 6.0 | setpoint span across full screw travel |
| `superheat_target_k` | 1.27 | measured coil-outlet superheat |
| `tau_txv` | 60.0 s | a bulb is a lump of copper: 30–90 s |
| `UA_suction_w_k` | 2.5 | 105 W over a 44 K mean driving dT |
| condenser `hstart` | `linspace(5.2e5, 2.9e5, N)` | the only charge control; subcooling −1.1 % |
| `p_evap_start` | 2.099e5 | Psat at the measured −24.17 C |
| `mdot_nom` | 0.006 | **a NUMERICAL limit, not a physical one — §5** |
| `N` | 5 | grid-converged for capacity (N=10 gives +1.4 %) |

### The TXV, and why it looks the way it does

The lever the operator turns is the **superheat setpoint** (a real adjustment screw), not
a bias on the stroke. The old additive law had authority `1 + Kp·dSH/dfrac` with
`dSH/dfrac < 0`, so raising the gain cancelled the operator's own command — that deadlock
is what pinned the coil at 8.19 K. Writing the real bulb force balance does **not** escape
it; it reduces to the same proportional law with the gain pinned by property data at
~0.25 /K. **The gain was never the free variable — the lever was attached to the wrong
place.**

Consequence worth knowing: a faithful TXV has **almost no authority over mass flow**
(+0.8 %). At fixed displacement and speed the **compressor** sets mass flow; the valve
only adjusts stroke to pass it while holding superheat. That is why
`test_more_mass_flow_raises_discharge_pressure` drives `compressor_speed_frac`.

---

## 5. WHERE TO GO NEXT — start here

### The remaining error is the evaporator, and the next suspect is named

Superheat, `T_evap` and evaporator air-off are the three symptoms still open. Session 4
proved they are **not** one defect with three symptoms — superheat closed to 1.93 K and
the other two barely moved. But superheat was a **precondition**:

| `UA_evap_nom_w_k` | 132.8 | 265.6 | 531.2 | 2000 |
|---|---|---|---|---|
| air-side effectiveness | 0.397 | 0.522 | 0.616 | 0.694 |
| `T_evap` (C) | −27.69 | −26.06 | −25.16 | −24.55 |

**With the thermostatic element on, evaporator UA is no longer inert.** Under the legacy
law that same sweep saturated at 0.439. The superheated zone was masking the air side.

**UA was deliberately NOT re-tuned.** Implied UA asymptotes near **214 W/K** even at 15×
air-side conductance, while the measured effectiveness of 0.798 implies about **289 W/K**.
Air-side conductance alone cannot reach the measurement, so a **series resistance** binds,
and fitting a 4–6× rise into a parameter this file calls "soft" would hide it — the
`k_v = 0.0588` mistake a third time.

### THE LEAD: refrigerant-side coefficients run at 56 % of nominal

ThermoCycle scales every refrigerant-side coefficient as `U = Unom·(M_dot/Mdotnom)^0.8`
(`MassFlowDependence.mo`). With `mdot_nom = 0.006` and an actual mass flow of
**0.0029 kg/s**, every coil's refrigerant-side `U` runs at **56 % of nominal** — and
`mdot_nom` sits at 0.006 only because 0.004 and 0.00306 will not integrate (CVode `mxstep`
at t≈7.4 s). **A numerical limit is standing in for a physical one.** Untested, and the
most promising remaining lead.

Approaches, cheapest first: raise `Unom_l/tp/v` to compensate for the known scaling
artifact (needs a rebuild; defensible precisely because the factor is an artifact); or
attack the integration failure that pins `mdot_nom` (harder, fixes the cause).

### The diagnostic that keeps working

**Persistent insensitivity to a parameter that physics says should matter is itself the
diagnostic.** It means the quantity is limited by *structure*, not magnitude. This has now
found three separate defects: the co-current coil, the unbounded per-cell law, and the
superheated zone masking the air side. When a lever goes inert, look for the bound.

---

## 6. WITHDRAWN HYPOTHESES — do not re-derive these

| claim | verdict |
|---|---|
| `k_v = 0.0588` from "measured" eps_v | **WRONG** — used the faulty transducer. Coil-derived is 0.0380 |
| Condensate-pan hot-gas coil is a significant load | **WRONG** — measured 26.3 W, 2.3 % |
| Airflows are wrong / need measuring | **WRONG** — independently confirmed to 1.5 % |
| `M_charge_kg` vs the 110 g system charge is a discrepancy | **NOT COMPARABLE** — coils only |
| The gate's pass count is a property of the model | **WRONG** — varied 0/6 to 6/6 on a byte-identical FMU |
| Coil superheat can be fixed by raising the TXV gain | **WRONG** — breaks valve authority. Fixed by moving the LEVER, not the gain |
| The coils' poor effectiveness is a conductance, mesh or charge problem | **WRONG** — it was the FLOW ARRANGEMENT (co-current) |
| The compressor is the remaining suspect | **WRONG** — specific work 167.8 kJ/kg vs ~174 measured |
| Coarse discretisation (N=5) limits the coils | **WRONG for capacity** — N=10 gives +1.4 % |
| The measured `T_cond` is not a valid target | **WITHDRAWN 2026-08-05** — trap 3 refuted on its own premise |
| The measured data cannot close its own energy balance | **DISSOLVED 2026-08-05** — trap 4 |
| Model subcooling should be compared to the condenser-outlet 4.11 K, not 8.98 K | **WRONG 2026-08-05, self-corrected** — both the real condenser and the real liquid line reject into the same ~35 C air, and the model's condenser outlet IS its TXV inlet. It lands within 0.4 K |
| Superheat, `T_evap` and effectiveness are one defect with three symptoms | **WRONG 2026-08-06** — superheat closed, the others did not follow. It was a PRECONDITION, §5 |
| Evaporator UA is inert | **WAS TRUE, NOW FALSE (2026-08-06)** — inert under the legacy TXV, live once superheat was fixed. §5 |
| A faithful TXV can be given authority over mass flow | **WRONG 2026-08-06** — the COMPRESSOR sets mass flow (+0.8 % via the valve). Correct physics, not a model defect |

---

## 7. KNOWN MODEL OMISSIONS

1. **Circuit maldistribution** — measured 4.2 F split between the two evaporator circuits;
   the model is single-circuit. M4.
2. **Charge inventory** — `M_charge_kg` is coils only: no lines, drier, shell or oil.
   Charge is an *outcome* of the initial condition, not an input. M3.
3. **Condensate-pan coil** — measured negligible (26 W), deliberately not modelled.

---

## 8. DISCIPLINE THAT HAS REPEATEDLY MATTERED

1. **Run the experiment; don't reason about it.** Every real advance came from a run.
2. **Read the built artifact, not the source.** Several hypotheses died this way.
3. **A tool reporting success is not proof.** `checkModel` prints "completed successfully"
   on an over-determined model; `buildModelFMU` returns an **empty path** on failure.
4. **Check the FMU is newer than every `.mo`.** Five false 6/6 reports came from this.
5. **In Modelica, `Real x = expr;` is an EQUATION, not a start value.** Use `(start = ...)`.
6. **State predictions before running, and score them.** Sessions 3 and 4 recorded eight
   predictions and most failed — and the failures were the most useful output.
7. **Never edit a test to pass.** If an assertion fails, the physics or the CLAIM is wrong
   — fix one of those. Session 4 corrected a claim (user-approved, recorded in
   `docs/VALIDATION.md`) and the gate got *harder*: 6 scenario tests became 7.
8. **Conservation checks cannot see a structural bound.** `res_energy_w` read 0.00 W
   through both of the worst defects in this project — energy was not lost, the transfer
   was BOUNDED. `tests/test_physics_invariants.py` exists because of that: it bounds
   **effectiveness and direction**, not just totals.

---

## 9. STILL OPEN / NEEDS THE USER

Nothing in the repo can close these; they need measurements or decisions.

- **Filter drier part number** and **liquid-line length + tube size** — the remaining data
  blockers for charge inventory (M3).
- **Actual compressor shaft rpm.** The data pins only the product `N · eps_v = 35.6 rev/s`.
  Deriving "shaft speed" from the data returns 3000 rpm because that is what was fed in —
  **that is circular and must never be cited as confirmation of the speed.** Separating
  them needs one new measurement: actual rpm, or a capacity point at a stated rpm and PR.
- **Where the two condenser inlet probes are physically mounted.** They disagree by 6.3 F
  on both datasets, and the 255 CFM figure depends on which represents entering air.
- **Two orphaned `git.exe` processes** were left running (one from 2026-07-31, one from
  08-05, both idle). A stale `.git/index.lock` from them was removed on 2026-08-06.

### Deliberately kept — do not "clean up"

- The `ILLUSTRATIVE DEMO` badge and the R290 flammability text stay in the UI in **both**
  engine modes. The model still has open errors and propane is flammable.
- `txv_setpoint_lever = false` and `CoilAirSide.counterflow = false` preserve the old
  behaviour so past results stay reproducible.
- `scratch/measured_reference.py` is SUPERSEDED but must keep working — the current
  scripts import its window-selection helpers. **Do not quote the numbers it prints.**
