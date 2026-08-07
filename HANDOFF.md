# HANDOFF — R290 refrigeration trainer, state as of 2026-08-06 (end of session 5)

**Self-contained. You should not need the conversation this came from.**

Read `ENGINEERING_DIRECTIVES.md` first — it outranks this file. `SCOPE.md` §0 outranks
both.

This file was rewritten on 2026-08-06 into a single current document. Earlier versions
stacked session notes on top of stale ones, so a reader met contradictions (the banner
"stays up", `Kp` "is 0.04", the traps "unresolved" — all now false). Detailed working
lives in `docs/`; this file is the map.

**Session 5 (2026-08-06) added the as-built drawing package and two new test campaigns.**
Nothing in the model changed. What changed is what is *known*: `docs/AS_BUILT_GEOMETRY.md`
holds the line, drier, coil and electrical facts; §1 and §3 below carry the new measured
results. Two of §9's four open items closed, and three new asks replaced them.

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

### Two new campaigns, 2026-05-27 (NSF) and 2026-05-28 (DOE) — a REPEATABILITY check

`python scratch/extract_xlsm.py` converts the workbooks; `scratch/steady_windows_new.py`
selects windows; `scratch/compare_to_new_runs.py` scores the model.

**They are a repeat of this same operating point, not an independent one.** Steady-window
medians put all three campaigns within **0.4 K** on evaporating temperature, **1.2 K** on
condensing and **0.3 F** on room ambient. The workbooks were handed over as "the stable
state" data, but both are 24 h *cycling* tests — `Unit Watts` swings 1 → 960 W, only ~85 %
of samples run, and the DOE run defrosts. Whole-run or last-N averages are meaningless: they
put liquid pressure at 163 psig where the steady value is 202–205 psig.

| | NSF | DOE | 2.002 |
|---|---|---|---|
| steady samples | 275 (25 windows) | 676 (30 windows) | 2585 (58 windows) |
| `T_evap` sat, transducer | −20.52 C | −20.54 C | −20.92 C |
| `T_cond` sat | 43.88 C | 44.39 C | 45.09 C |
| PR | 6.24 | 6.31 | 6.50 |
| model `T_cond` error | **+2.27 K** | **+2.15 K** | +1.9 K |
| model `T_evap` error vs coil | **−3.43 K** | **−3.81 K** | −3.5 K |
| model condenser air-off | **+0.09 F** outside | **IN band** | IN band |

The model reproduces condenser air-off to within 0.1–0.8 F on all three. That is evidence
the **measurement repeats** and the condenser air side is right — **not** evidence that the
physics extrapolates. `data 2.003.csv` below remains the only extrapolation point.

Five predictions were recorded before the run; four held. The miss: `T_cond` was predicted
to overshoot by 2.5–3.0 K and actually overshoots by 2.15–2.27 K — the model is *better*
than predicted, not worse.

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

python scratch/extract_xlsm.py                   # .xlsm test workbooks -> pipeline CSV
python scratch/steady_windows_new.py             # steady on-cycle windows, all 3 campaigns
python scratch/compare_to_new_runs.py            # model vs the NSF / DOE campaigns
python scratch/charge_inventory.py               # coils + lines + drier vs the 110 g charge
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

**Reconfirmed 2026-08-06 on the two new campaigns**, from steady-window medians — the
transducer's saturation temperature against the colder of the two evaporator coil-inlet
probes: NSF **+3.82 K**, DOE **+3.36 K**, 2.002 **+2.36 K**. Four independent datasets now.

Those same medians also reconfirm **circuit maldistribution** (§7 item 1, M4): the two
evaporator coil-inlet probes differ by **2.4–2.7 K** on every campaign.

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

### The condenser ingests RECIRCULATED air — established 2026-08-06, on all three campaigns

Steady-window medians (`python scratch/steady_windows_new.py`):

| set | room `Ta` | Air Into Cond **L** | Air Into Cond **R** | dT_L | dT_R | dT_R/dT_L |
|---|---|---|---|---|---|---|
| NSF 05-27 | 79.78 F | 88.10 F (+8.3) | 93.81 F (+14.0) | 11.90 K | 8.29 K | 0.70 |
| DOE 05-28 | 79.56 F | 89.48 F (+9.9) | 94.58 F (+15.0) | 11.61 K | 8.31 K | 0.72 |
| 2.002 | 79.89 F | 89.93 F (+10.0) | 95.91 F (+16.0) | 12.30 K | 8.51 K | 0.69 |

**Neither condenser inlet probe reads room air.** Both sit 8–16 F above it, on every
campaign, so this is a property of the installation. It was present in the 2.002 data all
along; the new runs only made it visible by giving three independent campaigns to compare.

Two consequences:

1. **`T_amb_k` = 308.04 K is the right VALUE and the wrong NAME.** The model's condenser
   needs the air actually entering it; feeding it 79.9 F room air would be the error. But
   anything that genuinely sees *room* air — the suction line and compressor shell heat
   paths of §4 — is 15 K colder than this parameter suggests. Do not reuse `T_amb_k` for
   those.
2. **The 255 CFM figure is still probe-dependent, and heavily.** The condenser air dT is
   11.6–12.3 K on the Left pair against 8.3–8.5 K on the Right — a ratio stable at 0.69–0.72
   across all three datasets. Airflow inferred as `Q_cond/(ρ·c_p·ΔT)` therefore swings ~45 %
   with the choice. That is why the probe-mounting question in §9 is still open.

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
| `UA_suction_w_k` | 2.5 | **LUMPED, and not bare-tube — see below.** Originally 105 W over a 44 K mean driving dT |
| line + drier volumes | 120.5 mL | as-built drawings, `docs/AS_BUILT_GEOMETRY.md` §1 |
| condenser `hstart` | `linspace(5.2e5, 2.9e5, N)` | the only charge control; subcooling −1.1 % |
| `p_evap_start` | 2.099e5 | Psat at the measured −24.17 C |
| `mdot_nom` | 0.006 | **a NUMERICAL limit, not a physical one — §5** |
| `N` | 5 | grid-converged for capacity (N=10 gives +1.4 %) |

### The as-built drawing package arrived 2026-08-06 — `docs/AS_BUILT_GEOMETRY.md`

Five drawings plus line dimensions. Read that file before touching geometry. Three things
in it change what is written above:

1. **`UA_suction_w_k` = 2.5 is not a bare-tube conductance and must not be read as one.**
   The line is 40 in of 0.319 in OD tube = 0.0259 m² external area, so 2.5 W/K implies
   97 W/m²K — unreachable in 35 C room air, where natural convection gives 5–15 W/m²K. The
   105 W does not all enter through the suction line. The compressor drawing specifies
   **compressor cooling: FAN**, and a hermetic shell dumps motor heat into the suction gas.
   The parameter is the lumped stand-in for both paths. **Do not lower it toward the
   bare-tube value** until the shell path is modelled — it reproduces the measured
   compressor inlet to 0.65 K today, and a worse match is not an improvement.
   `tests/test_calibration_provenance.py` now guards it.
2. **`V_evap` = 1326 cm³ is confirmed, not contradicted.** The drawing gives 1.288 L for
   tubes and returns and states a 1.29–1.35 L practical range once the distributor and
   manifolds are included. The model sits inside it.
3. **The condenser volume is a STATED UNCERTAINTY at 183 cm³ — closed as far as it can be.**
   The 0.26–0.36 L figure circulated with the drawings rests on two misreadings — a mounting
   bracket hole taken for the header OD, and the connection-stub spacing taken for the
   header length — so it is not an independent measurement and must not be averaged in. The
   uncropped drawing that would have settled it is **not obtainable** (user, 2026-08-06).
   Keep 183 cm³, and treat it as a known soft input if charge distribution or subcooling
   ever becomes the binding question. Do **not** retune `hstart` to compensate for it —
   `ClosedLoopM1eCS.mo:178` records what happened last time the condenser flooded.

### The 110 g charge comparison is now possible — and it closes

`python scratch/charge_inventory.py` adds the line and drier inventory to `M_charge_kg` by
evaluating propane density at the model's own converged state — **no rebuild, no gate
cycle**. Coils 43.44 g + lines and drier 21.90 g = **65.33 g accounted against a 110 g
system charge**. The 44.7 g shortfall is the right sign: compressor shell, oil, and
refrigerant dissolved in the oil are all still missing and can only add. The filter drier
alone holds **16 g — 15 % of system charge** — because it is 34 mL running liquid-full.
This says the inventory is not absurd. It does **not** validate the charge *distribution*,
and it is not a target: do not tune `hstart` toward 110 g.

### The TXV, and why it looks the way it does

The lever the operator turns is the **superheat setpoint** (a real adjustment screw), not
a bias on the stroke. The old additive law had authority `1 + Kp·dSH/dfrac` with
`dSH/dfrac < 0`, so raising the gain cancelled the operator's own command — that deadlock
is what pinned the coil at 8.19 K. Writing the real bulb force balance does **not** escape
it; it reduces to the same proportional law with the gain pinned by property data at
~0.25 /K. **The gain was never the free variable — the lever was attached to the wrong
place.**

### "Why doesn't superheat move when I change other things?" — asked 2026-08-06, answered

Because the TXV is a **working superheat controller**, and that is what one does. Verified by
sweeping the setpoint rather than by argument (`scratch/probe_superheat_authority.py`, no
rebuild):

| case | coil SH | subcool | mdot g/s | `M_charge_kg` |
|---|---|---|---|---|
| baseline (target 1.27) | 1.93 K | 8.79 K | 2.903 | 43.44 g |
| `superheat_target_k` = 4.0 | **4.61 K** | 8.76 K | 2.821 | 43.44 g |
| `superheat_target_k` = 8.0 | **8.55 K** | 8.70 K | 2.705 | 43.44 g |
| screw 0.50 → 0.90 | **1.17 K** | 8.80 K | 2.927 | 43.44 g |

A 6.7 K setpoint change moves settled superheat 6.6 K, and the screw moves it independently
in the right direction. **The lever is connected.** This is not the 8.19 K deadlock pattern,
where superheat sat pinned regardless of command.

**`M_charge_kg` is a CONSERVATION INVARIANT, not a distribution readout.** It is identical to
two decimals in every case above because the model holds exactly two volumes — evaporator and
condenser — and the compressor and valve are quasi-static with no holdup. So
`evap.M_tot + cond.M_tot` *is* the whole closed inventory and cannot change. Two things
follow, and both bite:

1. **Charge cannot be swept from `start_values` at all.** The condenser `hstart` profile is
   the only charge control and it is **not tunable** — a charge sweep costs a rebuild plus a
   3× gate.
2. **The per-coil split is not exposed.** `evap.M_tot` and `cond.M_tot` would have to be
   added as outputs before charge migration could be observed at all.

Small anomaly, logged and not chased: a growing superheated zone should push liquid out of
the evaporator into the condenser and *raise* subcooling. Subcooling instead fell 8.79 → 8.70
K across a 6.6 K superheat change. Tiny, plausibly second-order via the falling mass flow, but
the sign is against expectation. Investigating it needs the per-coil outputs from point 2.

Robustness note: `txv_opening_frac` = 0.10 aborts at t ≈ 4.35 s with `CompressorEM.mo:247`,
discharge enthalpy out of range. Do not sweep the screw below ~0.2.

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
| `M_charge_kg` vs the 110 g system charge is a discrepancy | **SUPERSEDED 2026-08-06** — was NOT COMPARABLE while `M_charge_kg` was coils only. With the as-built line and drier volumes the comparison is possible, and it closes at 65.3 g accounted with the shortfall in the right direction. §4 |
| The condenser holds ~0.30 L and the model's 183 cm³ is far too low | **NOT ESTABLISHED 2026-08-06** — the 0.30 L estimate read a mounting-bracket hole as the header OD and the connection-stub spacing as the header length. `docs/AS_BUILT_GEOMETRY.md` §5 |
| The compressor is a 6.93 cc Tecumseh TCX413U, so the model's 20 cc is ~3× too large | **PARKED BY THE USER 2026-08-06** — 6.93 cc yields 1.02–1.24 g/s across 2900–3500 rpm against a measured 2.11–3.08 g/s band, and the wiring diagram shows a line-fed compressor with no VFD. Keep the ALX440U. Reopen only on a nameplate photo |
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
| The 2026-05-27/28 workbooks are steady-state data | **WRONG 2026-08-06** — both are 24 h *cycling* tests. Whole-run averages put liquid pressure at 163 psig where the steady value is 202–205 psig, which would have looked like a 5 K colder operating point that does not exist. §1 |
| `Case Watts` dropping to 46 W identifies a switched case load | **WRONG 2026-08-06** — 182 episodes of 1–2 min with suction, liquid and the defrost flag all unchanged and evaporator air *colder*. A metering artifact, not an operating mode |
| `Drain Pan Surface Temp` at 103 F shows the 40 W pan heater sits outside the box | **WRONG 2026-08-06, self-corrected** — that probe is on the *condensate-evaporation* pan warmed by the hot-gas coil, a **different pan** from the one under the evaporator carrying the element. Right conclusion (not modelled), wrong reason: the heater is out because it is **defrost-only and off in the steady state**. A channel name that plausibly matches the device you are asking about is not evidence that it measures it |
| Superheat's insensitivity to charge means the TXV lever is stuck again | **WRONG 2026-08-06** — the setpoint sweep moves settled superheat 6.6 K for a 6.7 K command. The loop is live; holding superheat while charge moves is what a TXV *does*. §4 |
| `M_charge_kg` staying constant across a sweep is a sign of insensitivity | **WRONG 2026-08-06** — it is mass conservation. The model has two volumes and no other holdup, so that sum cannot change. §4 |
| A faithful TXV can be given authority over mass flow | **WRONG 2026-08-06** — the COMPRESSOR sets mass flow (+0.8 % via the valve). Correct physics, not a model defect |

---

## 7. KNOWN MODEL OMISSIONS

1. **Circuit maldistribution** — measured 4.2 F split between the two evaporator circuits;
   the model is single-circuit. M4.
2. **Charge inventory** — `M_charge_kg` is still coils only *inside the model*. Lines and
   drier are now accounted **post-hoc** by `scratch/charge_inventory.py` (§4); shell and oil
   remain unaccounted. Charge is an *outcome* of the initial condition, not an input. M3.
3. **Condensate-pan coil** — measured negligible (26 W), deliberately not modelled.
4. **Electric pan heater — 40 W, DEFROST-ONLY, correctly absent from a steady-state model.**
   User, 2026-08-06: it sits **below the evaporator** and **energises only during defrost**,
   at the same time as the hot-gas solenoid. So it is not a steady-running load at all — the
   model runs the steady state, and the heater is off there. Nothing to add.
   It *would* matter to any future defrost or cycling model, where it lands **inside** the
   box and must be carried.
   **A wrong reasoning path was recorded here first and is corrected for the record:** the
   `Drain Pan Surface Temp` channel reads 103–104 F in steady windows, which was read as
   "the pan is in the warm machine compartment, so the heater rejects outward". That probe is
   on the **condensate-evaporation pan warmed by the hot-gas coil** (item 3) — a *different*
   pan from the one under the evaporator. Right conclusion, wrong reason. The heater is out
   because it is **off**, not because of where it sits.

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

**NOTHING IS OPEN. The user has supplied everything obtainable on this rig (2026-08-06).**
Items are struck through with their answers so they are not re-asked. Treat any remaining
unknown — shaft rpm above all — as a **standing caveat on the model**, not as a request to
make of the user. Asking again is the failure mode this section now guards against.

- ~~**Filter drier part number** and **liquid-line length + tube size**~~ — **SUPPLIED
  2026-08-06.** Danfoss 023Z8250 (34 mL net), suction 40 in × 0.256 in ID, discharge 89 in ×
  0.194 in ID, liquid 20 in × 0.194 in ID. `docs/AS_BUILT_GEOMETRY.md` §1.
- ~~**Compressor shaft rpm and displacement**~~ — **CLOSED 2026-08-06. STOP ASKING.** The
  user has supplied everything obtainable: the compressor is the **ALX440U-DS3B01**,
  `V_s_cm3` = **20.0**, speed **58.33 rev/s (3500 rpm)**, line-fed with no VFD. **Actual
  shaft rpm is not measurable on this rig and will not be provided.** The data pins only the
  product `N · eps_v = 35.6 rev/s`, and deriving "shaft speed" from it is circular — that
  remains true, but it is now a *standing caveat on the model*, not an open request. Do not
  reopen this, do not re-derive the TCX413U conflict (§6), and do not ask for a nameplate
  photo again.
- ~~**Where the two condenser inlet probes are physically mounted**~~ — **ANSWERED
  2026-08-06.** Both `Air Into Cond Left` and `Air Into Cond Right` are entering-air probes,
  on the left and right of the coil face. **There is nothing to choose between them**, so
  they are carried as a **band** like every other duplicated pair (§3), and the 255 CFM
  figure keeps its interval. Do not reopen this hunting for a single correct sensor.
- ~~**An uncropped copy of condenser drawing Hussmann 3113227**~~ — **NOT OBTAINABLE**, user
  2026-08-06. The `…T- 0.319` fragment stays unresolved and must not be guessed at. The
  condenser volume is now a *stated uncertainty* at 183 cm³, not an open question (§4).
- ~~**Electric pan heater wattage**~~ — **SUPPLIED 2026-08-06: 40 W.** Not a box load — see
  §7 item 4. The data could never have given it: `Case Watts` sits at ~277 W whether the
  compressor runs or not (276 vs 286 W) and whether defrosting or not (279 vs 277 W), so no
  switched load was separable. The flat reading through defrost does confirm the defrost is
  **hot gas**, not electric.

### Deliberately kept — do not "clean up"

- The `ILLUSTRATIVE DEMO` badge and the R290 flammability text stay in the UI in **both**
  engine modes. The model still has open errors and propane is flammable.
- `txv_setpoint_lever = false` and `CoilAirSide.counterflow = false` preserve the old
  behaviour so past results stay reproducible.
- `scratch/measured_reference.py` is SUPERSEDED but must keep working — the current
  scripts import its window-selection helpers. **Do not quote the numbers it prints.**
