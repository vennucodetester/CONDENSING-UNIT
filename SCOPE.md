# Refrigeration Trainer — Implementation Scope (v2)

**Audience:** the LLM/engineer implementing this.
**Read §0 CHARTER first. Then §1 and §3, before writing any code.**

> Named **Refrigeration Trainer**, not "digital twin." It earns that name only after
> calibration against measured data. (Adopted from review.)

---

# §0. CHARTER — Requirements and intent

> **This section outranks every other section in this document.**
> Technical decisions serve it; they do not amend it. If a proposed design conflicts
> with anything here, the design changes — or the conflict is recorded in §0.4 DRIFT
> LOG and raised with the user. **Silent erosion of this section is the primary failure
> mode this project must avoid.**

## §0.1 Purpose

**The purpose of this software is to build genuine working fluency in refrigeration
system behaviour.** The user is starting from limited domain knowledge and intends to
finish as a competent practitioner. Model accuracy and software quality are means to
that end, not the end itself.

When a trade-off is unclear, the tie-break is:
**which option teaches more, sooner?**

Supporting intent:

- Reproduce the symptoms observed during physical testing, and understand how the
  remaining system parameters respond when those symptoms occur.
- Test data regularly shows behaviour the user cannot yet account for mechanistically.
  Closing that gap is the point of the exercise.
- Priority of outcomes: **causal understanding first**, predicted values for untested
  conditions second, a live-synchronised model eventually.

## §0.2 Non-negotiable requirements

| # | Requirement |
|---|---|
| **E1** | **Direct manipulation.** Adjust a parameter, see the system respond immediately. Interactive — not batch, not a report generator. |
| **E2** | **Fault-injection workflow.** Introduce a root cause, then observe the full system response. This is the core loop. |
| **E3** | **Six experiments**, all of them eventually: frost the evaporator coil · drive the expansion valve beyond its control range · restrict one distributor circuit · reduce charge · increase charge · vary evaporator airflow. |
| **E4** | **Pressures at multiple points in the circuit**, together with the other thermodynamic markers that characterise system state — not four cycle corners. |
| **E5** | **Defrost visualisation.** Show how refrigerant flow redistributes between circuit branches as solenoid and check valves change state. |
| **E6** | **Use established physics, don't generate it.** The physics must come from proven, validated libraries rather than being written from scratch for this project. The user's experience is that code generated from scratch for problems of this complexity is often unreliable, and a model that looks convincing while being wrong is worse than no model at all. Effort goes into adapting existing libraries, not rebuilding what they already do. |
| **E7** | **Self-contained.** Removing this project leaves the existing Lab Viewer application entirely unaffected. |
| **E8** | **Works with whatever data exists.** Not every test records every measurement. Some units have channels others don't, and some fields in the case files are simply empty. The tool must still run, show whatever the available data supports, and clearly mark anything missing, defaulted, or assumed. Missing data may disable a display; it must never block the tool from working. |
| **E9** | **Generalisation over enumeration.** The model is built from general component equations — not six hard-coded fault responses — so behaviour beyond the predefined list emerges from the physics rather than from special cases. Whether any given response is *correct* is established by validation (§16), not asserted here. |
| **E10** | **Getting the behaviour right matters more than getting the numbers exact.** For v1 it is enough that the model moves the right way by roughly the right amount — if suction pressure should drop when airflow falls, it drops. Matching measured values precisely requires calibration that would delay the tool without teaching anything yet. It stays on the roadmap; it is not a v1 requirement. |

## §0.3 Working principles

- **Purpose precedes equipment detail.** *Product* requirements begin from the learning
  goal, not from hardware specifics. **Physical model construction is the opposite** —
  it begins from verified equipment topology (§15 Q6). Do not confuse the two: decide
  *what the tool is for* before touching the machine, then build the model *from* the
  machine.
- **Do not assume.** Verify against the repository and the data. Where an assumption is
  unavoidable, state it as one and make it visible in the output.
- **No reflexive agreement.** Challenge proposals — the user's, a reviewer's, or your
  own — wherever there is technical reason to. Agreement without scrutiny is a defect.
- **Requirements do not erode silently.** Any deviation from this charter is surfaced
  explicitly and recorded in §0.4.
- **Assume no refrigeration expertise in the reader.** Explain mechanisms. Do not use
  domain jargon as though it were shared vocabulary.

## §0.4 DRIFT LOG — known conflicts with this charter

Any decision that compromises §0.2 is recorded here with its justification.
**Adding a row is mandatory. Removing one requires the user's agreement.**

| Charter item | Current conflict | Justification | Resolution |
|---|---|---|---|
| **E1** (interactive from the start) | Contract-first ordering defers UI to the final phase | Physics correctness must precede polish | **Mitigated:** a deliberately crude 3-slider harness is required as soon as M1e produces a converging cycle (§4). The polished UI comes later; the *feedback loop* does not. |
| **E3** (six experiments) | First ship (M2) enables **2 of 6** — expansion valve and airflow | Modelica model maturity is staged | Charge M3, circuits M4, defrost M5, frost M6 (§4). **The capability system (§6.2) must state which experiments are unavailable and why, in the UI.** |
| **E5** (defrost on the user's unit) | Defrost data is IDD5SL12WE; the fixed schematic is RLN5MA; IDD metadata claims no defrost | Data and topology come from different systems | Unresolved — see §15 Q5. Must be settled before defrost work. |
| **E10** (behaviour over precision) | Typed contracts, provenance lineage, and validation add work beyond "roughly right" | **Not optional polish.** These prevent *silent wrongness*, which the user cannot yet detect unaided — the one failure this project cannot tolerate. | **In v1:** typed contracts (§6), assumption lineage (§6.1), validation matrix (§16). **Deferred to v2:** broad test coverage, performance targets, UI polish. |
| — (timeline) | Originally implied weeks; realistically **months** | Consequence of E6 — accepted knowingly by the user | Ship at M2 rather than waiting for completeness |

## §0.5 Existing assets — available, not mandatory

The Lab Viewer application contains material that may save time:

- A **process diagram in Python** with piping, compressor, condenser and evaporator
- **Logged time-series** from instrumented testing
- Component catalogues, case definitions and sensor-mapping tooling (§5)

**Use these where they genuinely help. There is no obligation to reuse any of it.** If
something is faster or cleaner to write fresh for this project, write it fresh. Where
existing material *is* used, it is **copied** into this project — never imported across
the boundary, so §0.5 never puts E7 at risk.

---

## §0.6 Context and the required experiment list

**User:** tests refrigerated display cases and condensing units. Strong data and
diagram tooling already. **Limited refrigeration domain knowledge — the tool exists to
fix that.**

**Required experiments:**

1. Ice the evaporator coil
2. Open the TXV beyond its control point
3. Block one distributor circuit
4. Remove refrigerant
5. Add refrigerant
6. Change evaporator fan speed
7. Read pressure/temperature **at many locations**
8. Watch **hot gas defrost** — solenoid/check-valve switching rerouting flow

---

## §0.7 IMMEDIATE PLAN — one feature end to end, then judge

> **This supersedes any recommendation to complete the specification before building.**
> Decided by the user: *do not perfect the plan and then discover the direction is
> wrong.* Build one experiment all the way through — physics, visuals, explanation —
> and evaluate whether the result is worth continuing. Everything else waits.

### The slice

**Experiment 6, evaporator airflow, on RLN5MA.** Chosen because it is the shortest
path to a complete experience: no stroke limits, no control law, no charge inventory,
no multi-circuit. The physics is the simplest of the six, which is the point — **the
purpose of the slice is to evaluate the experience, not to prove the physics depth.**

### What "all the way" means — every one of these, or the slice is not done

| Layer | Must be present |
|---|---|
| Physics | FMU responds to an airflow input change |
| Values | Pressures at multiple locations + the other markers (E4) |
| Baseline | Lock a baseline, see deltas against it |
| Visual | Schematic with live values, coloured by deviation |
| p-h | Current cycle with the baseline ghosted behind it |
| Narration | The causal chain in plain English (§10) |
| Provenance | Every value tagged, assumptions visible (§6.1) |
| Honesty | Capability system greys out the other five experiments **with reasons** |
| ~~Predict-first~~ | **REMOVED 2026-08-02 — user rejected it as unnecessary. Do not reintroduce.** |
| Validation | One row of the §16 matrix, evidence-backed, for this experiment |

### The judgement

After the slice, the user answers one question: **is this worth building out?**

- **Yes** → proceed with experiments 2, 4, 5, 3, 1, 8 in milestone order, reusing the
  now-proven UI and explanation machinery.
- **No** → the direction changes, and at most a few weeks were spent — not months.

### What is deliberately NOT specified yet

Do not write these until the slice is judged. Specifying them now is the exact failure
this section exists to prevent:

- the full Modelica topology for all components (specify only what the slice needs)
- the validation matrix for experiments not in the slice
- multi-circuit, charge inventory, defrost, frost sub-models
- the full application milestone ladder
- CSV overlay and import validation *(the slice runs on physics defaults — E8 is about
  not blocking on data, and the slice tests exactly that)*

**One question must still be answered before the Modelica model is built**, because it
changes the topology and cannot be deferred: see §15 Q6 (circuit count).

## §0.8 Safety boundary — read before use

**R290 (propane) is flammable.** This application is **educational and diagnostic
only**:

- It **does not control equipment** and must never be connected to do so.
- It is **not a substitute** for safety procedures, qualified supervision, or
  manufacturer limits.
- **Assumed or uncalibrated results must never be used to set charge, pressure, or
  operating limits on physical equipment.** Per §0.2 E10 the model is not calibrated;
  per §6.1 many outputs depend on assumed inputs including a placeholder compressor map.

This notice must also appear in `README.md` and in the application's About screen.

---

## 1. Architecture decision — Modelica is the physics engine

**Decision made by the user, after review, and it stands: the system physics comes from
Modelica. No parallel Python physics engine will be written.** Rationale: flow
reversal, valve switching, phase-zone appearance/disappearance, and refrigerant mass
conservation are hard, and are solved in Modelica with 20+ years of validated work
behind them. Regenerating them for this project risks a model that looks plausible and
is wrong — the worst possible outcome when the goal is to *learn what is true*.

```
Modelica model  →  .fmu  →  FMPy  →  PyQt app  →  user
   physics        standard   BSD      ours
```

### Scope of E6 — what it does and does not forbid

E6 forbids **regenerating the hard system physics** listed above. It does **not**
forbid all calculation in Python. Permitted on the Python side:

- unit conversion, derived quantities from measured data (superheat from bulb
  temperature and suction pressure), plotting, statistics
- small, closed-form, **hand-verifiable** relations where the alternative is blocking on
  a Modelica milestone

Any such Python-side calculation must be (a) simple enough to check by hand, (b)
documented in `docs/PHYSICS_NOTES.md` with its formula and source, and (c) marked
`DERIVED` or `MODELED` with its assumptions (§16). **Do not use this allowance to
recreate the cycle solver by increments.** If a Python-side calculation starts needing
iteration, phase logic, or mass balance, it belongs in Modelica.

**A prior review recommended a Python steady-state engine first, with Modelica added
later. That recommendation is declined.** But its underlying concern is valid and is
addressed differently:

> *Concern:* Modelica maturity should not gate whether the product exists.
> *Resolution:* §4 replaces the binary gate with **FMU maturity milestones**. The app
> ships at M2 with three working experiments — expansion valve, airflow, and pressures
> at many locations — and unlocks more as the Modelica model matures. The **capability
> system** (§6.2) is what makes this safe: the UI disables what the current FMU cannot
> do, honestly and with a stated reason.

**What this choice costs, stated once:** this is a modeling project with an app
attached, not an app project. Milestones M3–M5 are genuine engineering, not
integration. Plan accordingly.

**Vendor neutrality limits the blast radius — it does not eliminate it.** FMU is an
open standard, so **the Python interface can remain stable if each tool exports the
same declared FMU contract** (§6.2b). But switching tools may still require
vendor-specific changes to the Modelica source, solver settings, exported variable
names, and event handling. Budget rework on the Modelica side, not on the app side.

---

## 2. Hard constraints

| Constraint | Detail |
|---|---|
| **Standalone** | Everything under `C:\Users\silam\OneDrive\Documents\CONDENSING UNIT\`. Delete it → nothing else breaks. |
| **Source app is READ-ONLY** | `C:\Users\silam\OneDrive\Documents\Lab viewer\HVAC_Lab_Viewer_App\` — copy out, never import from, never edit. |
| **Offline at runtime** | App must run with no network. **The FMU must run on a machine with no OpenModelica installed** — this is an explicit M1 test. |
| **Platform** | Windows 11, PowerShell. `pathlib` in code. |
| **Python stack** | PyQt6, pyqtgraph, pandas, numpy, scipy, **FMPy** (BSD-3), CoolProp. |
| **Property source** | **CoolProp, via ExternalMedia inside the Modelica model** — this is the physics property source (§3.3, decided by experiment). The earlier rule "CoolProp only for data-side quantities, not physics" is **withdrawn**; it was written assuming a pure-Modelica medium was viable, which the M1a test disproved. CoolProp on the Python side stays limited to derived quantities and plotting. |
| **Modelica toolchain** | ExternalMedia 4.1.1 installed via OpenModelica's package manager with prebuilt win64 binaries — no compiler needed. Record exact versions in `docs/VERSIONS.md`. |
| **Licensing** | `docs/LICENSES.md` records **exact versions and actual license files** of every component. Do **not** assert a blanket conclusion. OpenModelica FMU redistribution terms are nuanced and depend on incorporated libraries; ThermoCycle, AixLib and FMPy have their own terms. Internal use triggers no distribution obligation. (Corrected per review.) |

---

## 3. Library stack — decided, with reasons

### 3.1 Do **not** build on VCLib

v1 of this scope named VCLib. **Reversed.** VCLib self-describes as work in progress
being folded into AixLib — fine for research, wrong foundation for a schedule.

### 3.2 Primary: **ThermoCycle**

<https://github.com/thermocycle/Thermocycle-library>

Chosen because it solves this project's specific hard problems explicitly:

| Need | ThermoCycle provides |
|---|---|
| Flow reversal (defrost) | **Enthalpy limiter method** — keeps the equation system solvable through reversal |
| Zones appearing/disappearing | **Both moving-boundary and finite-volume** HX models, open-sourced |
| Solver fragility | Numerical robustness strategies exposed as **Boolean parameters** — tunable rather than hard-coded |
| Fluid properties | CoolProp via ExternalMedia from v2.0 |
| OpenModelica | Documented on build.openmodelica.org |

### 3.3 R290 properties — RESOLVED BY EXPERIMENT, 2026-08-02

> **Outcome: ExternalMedia + CoolProp is a HARD DEPENDENCY of ThermoCycle's
> finite-volume components. It is not a media preference and there is no way around it
> while using those components.**

#### What was actually run

`Flow1Dim` (ThermoCycle's finite-volume pipe — the core evaporator element) was
instantiated with the AixLib pure-Modelica R290 medium and `checkModel`-ed under
OpenModelica 1.26.3.

| Claim tested | Result |
|---|---|
| "AixLib and ThermoCycle cannot coexist" | ❌ **FALSE.** Both load together. OMC resolves both against MSL 4.1.0 and reports AixLib *"fully compatible without conversion script"*. |
| "ThermoCycle needs 237 files hand-converted to MSL 4" | ❌ **FALSE.** `convertPackageToLibrary(ThermoCycle, Modelica, "4.1.0")` returns `true` — one command, in memory, source untouched. |
| "A ThermoCycle FV pipe can run on an AixLib medium" | ❌ **FALSE — and this is the real blocker.** |

#### The real blocker

After conversion, the namespace errors disappear and this remains:

```
Error: Variable sat.ddldp not found in scope Flow1Dim.
```

`Flow1Dim` line 115 requires:

```modelica
sat_in = {sat.ddldp, sat.ddvdp, sat.dhldp, sat.dhvdp, sat.dTp, ...}
```

These are **saturation-property derivatives** (∂ρ_liquid/∂p, ∂h_vapour/∂p, …) — they are
**ExternalMedia extensions to the medium interface.** AixLib's R290 medium provides
none of them (verified by grep). No plain `Modelica.Media` medium provides them.

#### Consequences — binding

1. **ThermoCycle's detailed coils require ExternalMedia/CoolProp.** Use
   `ThermoCycle.Media.R290_CP`.
2. **AixLib is no longer the media source.** It stays vendored only for the existing
   `R290PropertySmoke` artifact and as a cross-check reference for property values.
   Its 263–343 K validity limit therefore stops constraining the project — CoolProp
   covers the full range including discharge and defrost temperatures.
3. **ExternalMedia is installed** via `installPackage(ExternalMedia,"4.1.1")`, which
   ships prebuilt win64 binaries. **No compiler toolchain was needed** — the earlier
   CMake/C++/Python claim was wrong (they are source-build fallbacks only).
4. **The exported FMU carries a native binary.** FMI has a `binaries/` folder for this,
   but whether the Windows export packages *and locates* it reliably is unproven —
   **M1c is now a genuine risk, not a formality** (§17 A3).
5. **§2's "CoolProp only for data-side derived quantities, not for physics" is
   superseded.** CoolProp *is* the physics property source. Corrected in §2.

#### Prior framing that was wrong

- The assistant claimed the libraries "cannot coexist". Asserted from declared
  `uses()` annotations without testing. **Disproven.**
- The assistant framed ThermoCycle's own `R290_CP` as a way to *avoid* the
  ExternalMedia setup cost. **Backwards** — it is how the cost becomes mandatory.
- A reviewer's caution that `R290_CP` "uses ExternalMedia/CoolProp, not self-contained
  native physics" was correct, and understated: the dependency is in the *components*,
  not just the medium.

**Method note:** all three prior positions were argued from documentation. One
20-minute compile settled it. **Prefer the experiment.**

---

### 3.3b Superseded — original portability comparison, kept for context

Modelica Standard Library does **not** ship propane media. Two options, and the choice
has large downstream consequences:

| | **Option A — AixLib native R290** | **Option B — ExternalMedia + CoolProp** |
|---|---|---|
| What | `AixLib.Media.Refrigerants.R290.R290_IIR_P05_30_T263_343_Horner` (or `_Formula`) — hybrid polynomial, **pure Modelica** | C++ property library linked into the model |
| FMU portability | ✅ **Self-contained.** No native binary. | ⚠️ **Higher packaging risk, not incompatible.** FMI provides a `binaries/` folder; a CoolProp DLL can in principle be bundled and shipped inside the FMU. The open question is whether the Windows export packages and *locates* it reliably — **test this (M1c) rather than assuming it fails.** |
| Build pain | None | **High** — needs CMake, a C/C++ compiler, Python; `cannot find -lExternalMediaLib` linker failures are widely reported on Windows |
| Accuracy / range | ⚠️ **See below** | Full CoolProp range |

> **Option A was selected on paper and then eliminated by experiment (§3.3). Option B
> is the path.** The AixLib 263–343 K validity limit no longer constrains the project,
> since CoolProp covers the full range. The envelope check (M1b) still runs, but
> against CoolProp's limits rather than AixLib's.
>
> **Retained principle, still binding:** during development an out-of-range property
> call must **fail loudly, not warn**. A silently extrapolated property is exactly the
> "convincing but wrong" outcome E6 exists to prevent.

---

## 4. FMU maturity milestones (replaces the v1 binary gate)

**Timing: the earlier "2–5 days for M0–M2" estimate was unrealistic and is withdrawn.**
M1e alone (a converging closed refrigeration cycle in an unfamiliar library, plus a
C++ toolchain build) is the bulk of the work. Estimate per milestone as it is reached;
do not commit to a total.

Each milestone is independently verifiable and unlocks specific capabilities.
**Record every result in `docs/PHASE0_RESULT.md`** with OpenModelica version, model
file, and verbatim error text on failure.

| M | Test | Unlocks | Status |
|---|---|---|---|
| **M0** | Install OpenModelica. Export a **trivial** model as FMU. Load and run it in FMPy. | Toolchain proven | ✅ **DONE** 2026-08-02 |
| **M1a** | Compile **one representative ThermoCycle finite-volume evaporator** with the chosen R290 medium, **including every property derivative the component requires**. | The largest unproven assumption | ⚠️ **RUN — Path A FAILED.** `Flow1Dim` needs ExternalMedia saturation derivatives; AixLib cannot supply them (§3.3). **Re-run as Path B once ExternalMedia is installed.** |
| **M1b** | **ExternalMedia installed** | Unblocks everything below | ✅ **DONE.** `installPackage(ExternalMedia,"4.1.1")` → prebuilt win64 DLLs. **No compiler needed** — the earlier "CMake + C++ + Python prerequisite" claim was wrong; those are source-build fallbacks only. |
| **M1c-1** | **Path B properties:** R290 + all four saturation derivatives, *simulated* | Property layer proven | ✅ **PASSED.** Tsat 0.7217 °C at 4.85 bar matches independent CoolProp; h_fg 373.9 kJ/kg; `ddldp`/`ddvdp`/`dhldp`/`dhvdp` all compute. |
| **M1c-2** | **Path B refrigerant side:** FV coil initializes and runs a transient | FV coil proven | ✅ **CLEARED 2026-08-02** via `RefrigerationTrainer.Flow1DimCS`. De-confounded: the trigger is `sat_in`/`ComputeSat=false`, **not** component arrays. Replacement keeps the array with `ComputeSat=true`. Q_tot = ṁ·Δh exactly; M_tot 22.7 g. Repro: `modelica/spikes/PathB/run_flow1dimcs.mos`. |
| **M1c-3** | **Path B air side:** air mass flow as an input, air-side conductance responding to it | **The slice experiment (§0.7) depends on this** | ✅ **PASSED 2026-08-02.** `AirCell` + `MassFlowDependence`: U scales as (ṁ/ṁ_nom)^0.8 — 60.0 → 28.83 W/m²K for a 60% airflow cut, matching the law exactly. Q fell 53%. **Answers §15 Q7.** Air uses a plain Modelica medium, so the ExternalMedia codegen bug does not affect it. |
| **M1d** | FMI 2.0 export **and** FMPy execution **and** the native DLL working on a machine with no OpenModelica | Portability | ✅ **CLEARED 2026-08-02.** `fmu/Evap_me.fmu` bundles `ExternalMediaLib.dll` + MinGW runtime; ran with OpenModelica off `PATH`; Q = 1568.73 W matching in-OMC exactly. **Model Exchange, not Co-Simulation** (CS export fails). |
| **M1e** | **Closed refrigeration cycle** — compressor, condenser, TXV, evaporator connected in a loop; converges | **Ends defects D3 and D11** — the loop closes and faults propagate | ❌ **The big one.** |

> **Path B pass criteria (all five required):** property + saturation-derivative calls
> execute · the coil model **initializes and runs a transient**, not merely
> `checkModel` · exports as FMI 2.0 · FMPy executes the FMU · the native DLL is
> packaged and works without OpenModelica installed.
>
> **If Path B fails, classify before concluding:** property call → ExternalMedia
> integration · coil model → ThermoCycle/OpenModelica compatibility · FMU-only →
> packaging/portability · airflow response → air-side model choice.
> **Only then reopen the library decision.**
>
> **Current classification: ThermoCycle/OpenModelica compatibility.** The specific
> trigger is **not** isolated — component array and `sat_in`/`ComputeSat` are
> confounded (see M1c-2). Workaround to try first: a faithful `Flow1Dim` replacement
> built from individually-declared `Cell1Dim` instances with `ComputeSat=true` — the
> exact configuration proven to simulate. See `docs/PHASE0_RESULT.md` for the full
> fidelity requirements.

> **Envelope-check ordering (corrected):** fault and defrost state audits **cannot**
> run before those models exist. Preliminary property-range checks happen now; the
> real audit of actual operating states happens **after M1e / M2 / M5**.
| **M2** | **TXV, fully:** manual opening override **and** automatic superheat control **and** physical stroke limits **and** controller saturation → loss of superheat control. Plus airflow as a live input. | **Experiments 2, 6, 7 → SHIP THE APP HERE** | ❌ |
| **M3** | Change **initial charge** and **reinitialize** cleanly | **Experiments 4, 5** | Charge stays disabled in UI, honestly labelled |
| **M4** | **Multi-circuit evaporator** — see mandatory sub-requirements below | **Experiment 3** | Single-circuit only; capability disabled |
| **M5** | **Valve / check-valve network** switches without chatter; flow reverses; **whole hot-gas-defrost system initializes and switches** | **Experiment 8 thermal** | Defrost falls back to replay (§9) |
| **M6** | Frost sub-model driving airflow blockage + UA + latent | **Experiment 1** | Frost as manual airflow/UA degradation |

**The app ships at M2** — experiments 2 (TXV), 6 (fan speed), 7 (pressures at many
locations). Later milestones extend it. No milestone blocks release; milestones only
determine what the capability system enables.

### M2 — why the TXV sub-requirements are listed explicitly

Changing an orifice-opening input **is not** the TXV experiment. Without automatic
control, a stroke limit, and saturation behaviour, the "TXV cliff" — control works,
works, works, then fails completely — cannot occur, and that behaviour is the entire
teaching point of experiment 2.

### M4 — mandatory sub-requirements

**Per §13.1: 2 circuits, 1 TXV** — not 6. Two is the minimum that can express
maldistribution, and it is sufficient.

Two identical parallel pipes would technically satisfy "parallel-circuit evaporator"
while reproducing **none** of the teaching point. M4 is met only when all of these hold:

- per-circuit refrigerant mass flow
- per-circuit air share and UA
- per-circuit outlet state and superheat
- **mixing in the suction header**
- **TXV bulb/controller responds to the mixed outlet condition, not any single circuit**
- one restricted circuit dries out or floods differently from the others
- mass and energy conservation across splitter and mixer

The behaviour that must emerge: **capacity falls measurably while the mixed superheat
the TXV sees still reads near target.** That is why maldistribution is hard to diagnose,
and it is the reason this experiment exists.

### M5 — scope note

ThermoCycle's enthalpy limiter keeps an **individual discretised component** solvable
through flow reversal. It does **not** by itself prove that a complete hot-gas-defrost
system will initialise and switch correctly. M5 must demonstrate the whole network.

---

## 5. Files to copy

Source (**read-only**): `C:\Users\silam\OneDrive\Documents\Lab viewer\HVAC_Lab_Viewer_App\`
Destination: `C:\Users\silam\OneDrive\Documents\CONDENSING UNIT\`

### 5.1 Reference only — read, extract, do not ship

| Source file | Take from it |
|---|---|
| `cycle_solver.py` | **Not for physics.** Read `compute_deviations` (~line 690) and `infer_root_cause` (~line 775) — the model-vs-measured comparison, conceptually reusable in §10. Its defects are documented in §14 as physics *pitfalls to avoid*, not a spec to build. |
| `calculation_engine.py` | Unit conversions; `calculate_volumetric_efficiency` |
| `ph_diagram_generator.py`, `ph_diagram_plotter.py` | p-h plotting approach — reimplement smaller, originals are app-coupled |
| `circuit_semantics.py` | `suggest_sensor_mappings` (~line 495) — the CSV-column fuzzy matcher. **Directly reusable** for §8. |
| `port_resolver.py` | `get_evaporator_outlet_temps` returns a **per-circuit list**; `get_pressures_from_compressor` |

**Do not copy:** `diagnostics_engine.py` (262 KB of threshold rules — replaced by model
residuals + causal graph), `data_manager.py`, `diagram_widget.py`,
`diagram_components.py`, wiring/DXF validators, all `*_PLAN.md`.

### 5.2 Copy verbatim

| Source | Destination |
|---|---|
| `component_schemas.py` | `twin/schemas_reference.py` |
| `library/catalogs/*.json` (coils, compressors, condensers, distributors, fans, txvs) | `data/catalogs/` |
| `library/cases/RLN5MA/case.json` + `diagram.json` + `tests/tr_2f7ddc99.json` | `data/cases/RLN5MA/` |
| `library/cases/IDD5SL12WE/case.json` + `diagram.json` | `data/cases/IDD5SL12WE/` |
| `DATA/IDD5SL12WE/DataDOE081.csv` | `data/samples/` — 6,078 rows; **trim to ~1,500 including the defrost event** |
| `DATA/IDD5SL12WE/DataDOE80f.csv` | `data/samples/` — trim similarly |
| `logging_setup.py` | `twin/logging_setup.py` |
| `diagram_theme.py` | `twin/theme.py` |

**All catalog values are placeholders.** `compressors.json` literally contains
`"JUST A SAMMPLE"`. Mark every catalog-sourced value as **Assumed** (§8).

---

## 6. Engine interface

### 6.1 Structured result

`solve() -> dict` cannot express convergence, units, provenance, warnings, or
time series. **This is the contract — implement exactly this.**

```python
class Provenance(Enum):
    MEASURED       = "measured"        # mapped from a data column
    DERIVED        = "derived"         # computed here from measured values
    SOURCE_DERIVED = "source_derived"  # calculated column already in the file,
                                       # formula unknown to us  (§8.1)
    MODELED        = "modeled"         # engine output
    ASSUMED        = "assumed"         # default standing in for a missing input

@dataclass(frozen=True)
class ScalarQuantity:
    value: float
    unit: str                        # SI, canonical
    provenance: Provenance
    assumptions: tuple[str, ...] = ()  # e.g. ("compressor_map_fitted",
                                       #       "evap_internal_volume_estimated")
    valid: bool = True
    note: str | None = None

@dataclass(frozen=True)
class BoolQuantity:
    value: bool
    provenance: Provenance
    assumptions: tuple[str, ...] = ()
    note: str | None = None

@dataclass(frozen=True)
class SeriesQuantity:
    values: np.ndarray
    time_s: np.ndarray
    unit: str
    provenance: Provenance
    assumptions: tuple[str, ...] = ()
    valid: bool = True
    note: str | None = None

Quantity = ScalarQuantity | BoolQuantity | SeriesQuantity

@dataclass(frozen=True)
class EngineResult:
    status: SolverStatus             # CONVERGED | FAILED | PARTIAL | NOT_INITIALIZED
    values: dict[str, Quantity]
    warnings: list[str]              # e.g. "R290 media out of validity range"
    solver_log: str
    inputs_echo: dict[str, float | bool | tuple[float, ...]]  # exactly what was applied
```

**`assumptions` is load-bearing.** An output computed from an assumed compressor map is
*both* modeled and assumption-dependent; a single provenance value hides that. The
component catalogue literally contains `"JUST A SAMMPLE"`, so most outputs will carry
assumptions and the user must be able to see which. **The UI must expose them.**

### 6.2 Structured capabilities

```python
@dataclass(frozen=True)
class InputSpec:
    name: str                        # SI-suffixed, §6.4
    unit: str
    valid_range: tuple[float, float] | None
    default: float | bool
    requires_reinit: bool            # §6.3

@dataclass(frozen=True)
class Capability:
    id: str                          # "charge"
    available: bool
    reason: str | None               # why not — SHOWN TO THE USER
    inputs: tuple[InputSpec, ...]    # a capability may need several
    milestone: str                   # "M3" — what would unlock it
```

**Availability is evaluated per loaded case**, not from milestone alone. It depends on
the loaded case, the available measurement file, receiver presence, and the current
FMU's declared interface. Compute it at load time; do not hard-code.

The UI **must** render `reason` in a tooltip on any disabled control. Silent
unavailability is a defect.

### 6.2b FMI version and variable naming

- **FMI 2.0 Model Exchange, win64** — changed from Co-Simulation 2026-08-02.
  OMC's CS export fails on the evaporator model (silently; needs `-d=failtrace` to
  diagnose). ME exports cleanly and FMPy supplies the solver. See M1d in
  `docs/PHASE0_RESULT.md`. Incidental benefit: ME does not embed the OpenModelica
  runtime, simplifying the §2 licensing question.
- **`validate=False` is required** when reading the FMU: OMC emits Integer variables
  with `variability="continuous"`, which FMI 2.0 forbids. The explicit interface check
  against `REQUIRED_OUTPUTS` therefore becomes the only guard — **keep it.**
- On load, the adapter **validates the FMU's declared variables against the expected
  contract** and fails loudly with a readable diff if they disagree.
- **Array notation in this document is not literal.** Declare the real flattened names
  explicitly, one per line, 1-based, matching physical circuit numbering.
  **Per §13.1 there are exactly 2 circuits:**
  `superheat_circuit_k_1`, `superheat_circuit_k_2`,
  `m_dot_circuit_kg_s_1`, `m_dot_circuit_kg_s_2`,
  `circuit_restriction_frac_1`, `circuit_restriction_frac_2`.
  Record the final names in `docs/FMU_INTERFACE.md` — that file, not this one, is the
  authority once M1 completes.

### 6.3 Charge is initialization, not a live input

Refrigerant charge is an **initial inventory**, not a flow you inject mid-run. The
slider may exist, but applying it **creates and initializes a new simulation**. The UI
must say so — *"Reinitialize with 80% nominal charge"* — and `requires_reinit=True`
distinguishes it from live inputs.

### 6.4 Unit naming discipline

Every variable name **ends in its SI unit**. No name may state one unit and carry
another (v1 had `evap_fan_cfm` specified in m³/s — exactly the bug this rule prevents).

`evap_airflow_m3_s`, `charge_kg`, `p_suction_pa`, `T_discharge_k`,
`superheat_k`, `circuit_restriction_frac_1`, `circuit_restriction_frac_2`,
`txv_opening_frac`. *(2 circuits — §13.1.)*

**The UI converts for display** (°F, psig, BTU/hr, lb/hr, CFM — matching the user's
existing tooling). The engine boundary is SI only.

### 6.5 Outputs (minimum set)

`p_suction_pa`, `p_discharge_pa`, `p_evap_out_pa`, `p_cond_in_pa`, `p_txv_inlet_pa`,
`T_suction_k`, `T_discharge_k`, `T_liquid_k`, `T_evap_sat_k`, `T_cond_sat_k`,
`superheat_mixed_k`, `superheat_circuit_k_1`, `superheat_circuit_k_2`, `subcooling_k`,
`m_dot_kg_s`, `m_dot_circuit_kg_s_1`, `m_dot_circuit_kg_s_2`,
`Q_evap_w`, `Q_cond_w`, `W_comp_w`, `cop`,
`txv_opening_frac`, `txv_saturated` (bool), `T_air_off_evap_k`, `T_air_off_cond_k`,
`receiver_fill_frac` *(only if §15 Q1 confirms a receiver exists)*.

---

## 7. Charge modeling — needs its own spike

Mass conservation is **native** to Modelica dynamic models — this is the single
biggest advantage of the chosen architecture over a Python solver. But it is not free.
Credible inventory still requires (per review):

- internal volume of **every** component and line
- phase-zone lengths/volumes
- density throughout each zone
- receiver geometry, **if one exists**
- void-fraction assumptions
- oil/refrigerant assumptions
- consistent behavior when zones appear or disappear

**M3 is a spike, not an integration task.** Budget it as such. Document every assumed
volume in `docs/PHYSICS_NOTES.md` with its source.

> **Do not promise or build "receiver masking" until §15 Q1 confirms a receiver
> physically exists on the unit.** (Adopted from review.)

---

## 8. Data handling

**The simulator never requires measured data to run.** Physics model with defaults;
measurement is an optional overlay.

### 8.1 Provenance tiers

| Tier | Meaning | Style |
|---|---|---|
| MEASURED | mapped from a CSV column | solid |
| DERIVED | computed from measured | outlined |
| SOURCE-DERIVED | a **named calculated column already in the CSV** whose formula we do not know | outlined + ⚠ |
| MODELED | engine output | dashed |
| ASSUMED | default standing in for a missing input | dashed + grey |

**SOURCE-DERIVED is new.** The sample CSVs contain named
calculated columns after the raw sensor columns. Do **not** treat them as measurements.
Mark them SOURCE-DERIVED unless their formula is known and independently reproduced.

### 8.2 Import validation report — required

Generated on every CSV load, shown before use:

- columns matched / unmatched / ambiguous
- **metadata conflicts** — see §8.3
- out-of-range and stuck-sensor checks
- assumed inputs in play, each with a **sensitivity number**: how far key outputs move
  across that input's plausible range. This tells the user whether instrumenting it is
  worth the effort.

**Sensitivity must be cheap, or it will not be used.** Full FMU sweeps on every CSV
import are too slow. Required:
- **fixed ranges** per assumed input, declared in the case file — not discovered at runtime
- **3 points** per input (low / nominal / high), not a continuous sweep
- **cached** by `(case_id, fmu_hash, input_set)`; recomputed only when one changes
- computed **in the background** with the report usable before it finishes

### 8.3 Known metadata conflict — verified, must be handled

`data/cases/IDD5SL12WE/case.json` declares `"defrost_type": "none"`, but
`DataDOE081.csv` contains **200 defrost-active samples out of 6,078**.

Therefore: **case metadata must never silently control defrost behavior.** Detect the
conflict, report it, and require a user-confirmed override. (`RLN5MA` correctly
declares `hot_gas`.)

### 8.4 Column matching

Port the scorer from `circuit_semantics.py:495`. **The data misspells "Distributor" as
`Distrubutor`** in the per-module columns — match the data as it is, not as it should be.

---

## 9. Defrost — two layers, and honest labels

### 9.1 Flow path taxonomy

The graph layer identifies a *permitted* path. It **cannot prove refrigerant is
flowing** — a commanded-open solenoid may pass zero flow, and check-valve state depends
on differential pressure. Four labels, displayed verbatim:

| Label | Basis |
|---|---|
| **Permitted / intended path** | valve command + mode logic only |
| **Inferred active path** | supported by modeled or measured pressures |
| **Measured active path** | supported by instrumentation |
| **Simulated flow** | FMU transient result (M5+) |

### 9.2 Layer 1 — topology

> 🚫 **BLOCKED. The defrost visualisation capability is UNAVAILABLE until §15 Q6/Q5 is
> answered.** Earlier wording said "always available" — that was wrong. v1 uses a fixed
> RLN5MA schematic, the only defrost data is IDD5SL12WE with a different topology, and
> the topology source is undecided. Until then, `Capability(id="defrost",
> available=False, reason="topology source unresolved — see §15 Q5")`.

Once unblocked: graph traversal over the chosen topology source given valve states.
Highlight permitted paths, grey dead legs. No physics invented. `twin/defrost.py`.

### 9.3 Layer 2 — thermal behavior

- **M5 reached:** FMU simulates it.
- **Before M5:** **replay measured data.** Scrub a timeline from `Defrost case 1`,
  animate real `Coil Inlet 1…6` values over the Layer-1 diagram. The user watches their
  own coil's real defrost asymmetry — more instructive than any model.

Mode must be labelled on screen at all times.

---

## 10. Explanation layer — the actual product

### 10.1 Authored causal graph, not residual inference

**Do not infer causation from which residuals moved.** In a coupled nonlinear system
that produces confident, false explanations.

Instead: a **small authored causal graph** supplies mechanically valid ordering; the
engine supplies **direction and magnitude** along its edges.

```
airflow → air-side conductance → evaporating condition → suction density
        → mass flow → capacity
```

Stored as data (`data/causal_graph.json`), reviewable by a domain expert, versioned.
Narration walks the graph and fills in engine numbers. If the engine's numbers
contradict the graph's expected direction, **say so** — that is a finding, not a bug to
hide.

### 10.2 Ranked hypotheses, never a single certain diagnosis

Different faults produce overlapping signatures. Root-cause output is always **ranked
hypotheses with supporting and contradicting evidence**, plus what measurement would
discriminate between them. A simulated fingerprint is not proof.

### 10.3 Features

1. **Delta table** vs. locked baseline, arrows and magnitudes
2. **Causal narration** per §10.1
3. **Live p-h diagram**, baseline ghosted behind current.
   **Property source must match the engine.** Per §3.3 the engine now uses
   CoolProp/ExternalMedia, so the plot should use CoolProp too — but confirm they are
   the *same* CoolProp build. If the dome and the model's own states disagree, the
   mismatch reads as a physics error. If they cannot be matched, label the plot a
   **reference dome** and state the property source on the chart.
4. **Per-circuit strip** — **2** bars (§13.1) of flow and exit superheat beside the
   mixed value the TXV bulb actually sees
5. **Fault signature cards** — severity sweeps per fault
6. **Saturation flags** — *"TXV at maximum opening — superheat no longer controlled."*
   These moments carry the densest learning.

> **Removed 2026-08-02:** "Predict-first mode" (guess the direction before revealing).
> Proposed by the assistant, **rejected by the user as unnecessary.** Do not reintroduce.

---

## 11. Calibrated teaching scenarios (replaces v1's absolute acceptance criteria)

v1 asserted behaviors as universal laws. **They are not**:
maldistribution does not always leave mixed superheat in target; a charge sweep does
not always produce a TXV cliff at a convenient point; airflow blockage does not always
dominate UA loss; receiver masking requires a receiver.

Ship these as **saved scenarios with fixed parameters**, in `data/scenarios/`, each
with a stated teaching point and the parameter set that demonstrates it:

| Scenario | Teaching point |
|---|---|
| `maldistribution_hidden.json` | capacity falls while mixed superheat still reads in target |
| `txv_cliff.json` | superheat control does not degrade — it works, then fails at the stroke limit |
| `airflow_diminishing.json` | doubling airflow does not double capacity (series refrigerant-side resistance) |
| `frost_blockage_dominates.json` | at these conditions, blockage outweighs UA loss |
| `receiver_masking.json` | **only if §15 Q1 confirms a receiver** |

Each scenario is a regression test: it must reproduce its teaching point.

---

## 12. Repository layout

```
CONDENSING UNIT/
├── SCOPE.md
├── README.md
├── requirements.txt
├── Launch Trainer.cmd
├── docs/
│   ├── PHASE0_RESULT.md      ← M0–M6 results, verbatim errors, versions
│   ├── LICENSES.md           ← exact versions + actual license files
│   ├── PHYSICS_NOTES.md      ← assumed volumes, fits, and their sources
│   ├── FMU_INTERFACE.md      ← authoritative flattened variable names (§6.2b)
│   ├── VALIDATION.md         ← the evidence matrix (§16)
│   └── VERSIONS.md           ← pinned versions / commit hashes (below)
├── modelica/
│   ├── CondensingUnit.mo
│   ├── build_fmu.mos
│   ├── lib/                  ← VENDORED dependencies — see note
│   │   ├── ThermoCycle/
│   │   └── AixLib/
│   └── README.md             ← how to rebuild the FMU
├── fmu/
│   └── CondensingUnit.fmu    ← build artifact, checked in
├── twin/
│   ├── engine_base.py        ← Quantity types, EngineResult, Capability (§6)
│   ├── engine_fmu.py         ← the only physics engine
│   ├── faults.py
│   ├── explain.py            ← causal graph walker (§10.1)
│   ├── dataio.py             ← loader + validation report (§8)
│   ├── defrost.py            ← flow-path graph + taxonomy (§9) — BLOCKED, §9.2
│   ├── schemas_reference.py  ← copied
│   ├── theme.py              ← copied
│   └── logging_setup.py      ← copied
├── app.py
├── tests/
│   ├── test_engine_contract.py   ← FMU interface matches §6.2b
│   ├── test_provenance.py        ← every output carries provenance + assumptions
│   ├── test_capabilities.py      ← unavailable capabilities give a reason
│   └── test_scenarios.py         ← saved scenarios reproduce their teaching point
└── data/
    ├── cases/{RLN5MA,IDD5SL12WE}/
    ├── catalogs/
    ├── samples/
    ├── scenarios/
    └── causal_graph.json
```

**Vendoring is required, not optional.** Without `modelica/lib/`, this repository
cannot rebuild its own FMU — the artifact would depend on libraries acquired
separately, at unknown versions. Vendor ThermoCycle and AixLib (both permissively
licensed; record exact terms in `docs/LICENSES.md`).

**Pin everything** in `docs/VERSIONS.md`: OpenModelica, Modelica Standard Library,
ThermoCycle, AixLib, FMPy, Python. Commit hashes where available, release tags
otherwise.

**`tests/` is v1, not v2.** These four tests exist to prevent *silent wrongness*, which
is the one failure mode the user cannot catch unaided (§0.4). Broad coverage is
deferred; these are not.

---

## 13. Known facts — do not re-derive

**RLN5MA (primary):** `insight` family, doored, **medium-temp**, cassette system,
reverse cassette airflow, **TXV**, defrost **hot_gas**, condenser **Air**,
6 shelf rows, **R290**.

> The case file's `cassette_count: 3` / `size_count: 3` describe **how many identical
> self-contained units the case is built from** — not the structure of the thing being
> modelled. **Each unit is complete and independent.** See §13.1. Do not derive shared
> equipment, shared suction, or inter-unit interaction from these numbers.
Targets: coil superheat **6–9 °F**, subcooling **5–15 °F**, product temp **≤ 38 °F**.
**`charge_oz`, `water_gpm`, `fan_cfm` are all `null`** → drives §8.

### 13.1 MODELLED SCOPE — ONE self-contained unit. Settled.

**Stated directly by the user; this overrides the case metadata. Do not reopen.**

> **The unit is self-contained.** It has its own compressor, its own condenser, its own
> evaporator, and its own TXV. **Nothing is shared with anything else.**
>
> `cassette_count: 3` in the case file means **the same complete unit built three
> times** — three compressors, three condensers, three evaporators. It does **not** mean
> one system split three ways. There is no shared suction, no shared compressor, no
> externally imposed pressure, and no interaction between units.
>
> **This project models one unit. That has been the goal from the start.**

| Property | Value |
|---|---|
| Units modelled | **One complete, independent unit** |
| Compressor | **1, dedicated** |
| Condenser | **1, dedicated** |
| Evaporator | **1, dedicated** |
| Circuits in the evaporator | **2** |
| TXVs | **1** |
| Distributor | 1, feeding the 2 circuits |
| Suction header | 1, mixing the 2 circuit outlets |
| **Nominal refrigerant charge** | **110 g R290** — supplied by the user, 2026-08-02. This is the charge in the test data. `case.json` has `charge_oz: null`; the user's value governs. **Unblocks the charge *reference*; the M3 inventory physics is still required before the slider can be enabled.** |

> A 110 g R290 charge is consistent with a small self-contained hermetic system, which
> independently corroborates §13.1. Use it as the 100% reference for charge experiments
> (e.g. 85% = 93.5 g).

**Consequences — all simplifications:**

- The Modelica topology is **one complete refrigeration circuit**. No external boundary
  conditions on the refrigerant side, no shared equipment, no imposed suction pressure.
- **Suction pressure is a genuine model output.** Reducing evaporator airflow *will*
  move it, so the airflow experiment teaches the full causal chain (§16.3).
- **M4 becomes far smaller**: 2 parallel branches, not 6. Two circuits is the minimum
  that can express maldistribution, and it is sufficient — restrict one of two, and the
  mixed superheat the single TXV bulb sees still masks it (§4, M4).
- Flattened names use **`_1` and `_2` only** (§6.2b): `superheat_circuit_k_1`,
  `superheat_circuit_k_2`, `m_dot_circuit_kg_s_1/2`, `circuit_restriction_frac_1/2`.
- The unit selector is **a case-file parameter**, not a Modelica parameter — the same
  FMU serves all three; only boundary conditions and sensor mapping differ.

> ⚠️ **Recorded discrepancy — not an error, just unreconciled.**
> `RLN5MA/case.json` records `circuits: 6`. The user states **2**. The user's statement
> governs. Do not "fix" `case.json` — treat it as a data-quality finding, surface it in
> the import validation report (§8.2), and confirm against hardware or drawings when
> convenient. **Do not assume the IDD5SL12WE 6-coil-inlet layout describes RLN5MA** —
> different unit.

**IDD5SL12WE (secondary, has data):** water-cooled. Modules **Left / CTR / Right**,
each with own TXV, distributor, **6 coil inlets**. Metadata conflict per §8.3.

**CSV structure (verified):** `Timestamp` (MM/DD/YYYY HH:MM:SS, 1-min);
`Defrost case 1`; `{Left|CTR|Right} Coil Inlet 1…6`; `{…} TXV Inlet`; `{…} TXV Bulb`;
`Into {…} Distrubutor` *(sic)*; `Into Main Distributor`;
`Air {in|off} {left|ctr|right} evap 6 in {LE|RE}`;
`Discharge/Secondary/Return Air` curtain arrays; `Ambient Dry Bulb Ta/Tb`;
`Ambient Wet Bulb`; `PS …` product simulators; then **named calculated columns**
(→ SOURCE-DERIVED, §8.1).

---

## 14. Physics pitfalls (from the source app's solver — avoid, do not copy)

Documented so nobody reintroduces them when building the Modelica model:

| Pitfall | Why it breaks things |
|---|---|
| Superheat as an **input** (`cycle_solver.py:321`) | TXV can never lose control; experiment 2 impossible |
| No charge variable (`:350` — subcooling purely a condenser energy consequence) | experiments 4, 5 impossible |
| Air as infinite capacity at fixed temperature, **no flow rate** (`:358`) | experiment 6 has no handle |
| TXV specified twice — `Cv` residual *and* imposed superheat (`:366` + `:321`) | over-specified, physically muddled |
| One lumped evaporator UA, `circuits` ignored | experiment 3 invisible |
| Frost modeled as UA reduction alone | Incomplete. Frost acts through **three** mechanisms — airflow blockage, air-side UA loss, and latent shift — and **which dominates depends on frost morphology and operating conditions**. Model all three separately and let the conditions decide; do not assume a fixed ranking. |

---

## 15. Decisions needed from the user

1. **Receiver — does one physically exist on the unit?** Blocks §7 inventory structure
   and the `receiver_masking` scenario. **Verify from hardware, do not assume.**
2. **Real compressor map?** Catalog says `"JUST A SAMMPLE"`. An **AHRI 10- or
   20-coefficient map** is the highest-leverage input in the model. Without it,
   curve-fit from rated points and record the uncertainty in `docs/PHYSICS_NOTES.md`.
3. **Confirmed defaults** (recommended, override if wrong): first system **RLN5MA
   air-cooled**; **fixed schematic** in v1, not `diagram.json`-driven; frost as **one
   severity slider with an expandable three-effect breakdown**.
4. **Is accurate transient defrost the primary objective, or is the learning tool?**
   If transient defrost is primary, M5 moves ahead of M3/M4 and the schedule becomes
   research-shaped. If learning is primary, ship at M2 and let defrost arrive later.
   **Per charter §0.1, the default answer is the learning tool** — confirm or override.
5. **Defrost topology conflict — blocks all defrost work (charter E5, drift log).**
   The fixed schematic is **RLN5MA** (hot gas, 3 cassettes). The only defrost *data* is
   **IDD5SL12WE** (3 modules, different topology, metadata claims no defrost).
   Measured IDD coil temperatures **cannot** be animated over an RLN schematic.
   Choose one:
   **(a)** separate built-in topology graphs for RLN and IDD;
   **(b)** IDD replay shown only in a neutral three-module / per-circuit view;
   **(c)** drive both from `diagram.json`, overriding the fixed-schematic decision.
   Also: `Defrost case 1 = 1` proves only that **a defrost channel was active**. Until
   the mechanism is verified, label it *"recorded defrost-state interval"* — never
   "hot gas defrost".
6. ~~Circuit count~~ — **RESOLVED by the user. See §13.1.** One unit at a time,
   **2 circuits**, **1 TXV**. *(Note: `case.json` records `circuits: 6` — the user's
   statement takes precedence; the discrepancy is recorded in §13.1 and should be
   confirmed against hardware when convenient.)*
6b. ~~What drives the modelled unit?~~ — **RESOLVED. See §13.1. Do not reopen.**
   **The unit is fully self-contained: its own compressor, its own condenser, its own
   evaporator.** Nothing is shared, nothing is imposed from outside. Where the case file
   records `cassette_count: 3`, that means *the same self-contained unit repeated three
   times* — not three parts of one system. **The scope models one unit, always.**
7. ~~Air-side coil model~~ — **✅ ANSWERED BY EXPERIMENT 2026-08-02. Closed.**
   `ThermoCycle...Pipes.AirCell` defaults to the `MassFlowDependence` heat-transfer
   model, `U = Unom*(M_dot/Mdotnom)^0.8`. Simulated at two airflows: U 60.00 → 28.83
   W/m²K for a 60% cut, matching the law exactly; Q fell 53%. **Air-side conductance
   responds to airflow, so the slice experiment is viable.** Repro:
   `modelica/spikes/PathB/AirSide.mo`. Detail: `docs/PHASE0_RESULT.md`.
   *Remaining caveat: proven for a single `AirCell`, not yet a full finned-tube coil
   with fin efficiency and a fan curve — sufficient for the slice, revisit for
   quantitative work.*

   *Superseded text below, kept for context:*

7b. ~~STILL OPEN — air-side coil model.~~
   A finite-volume *refrigerant-side* heat exchanger does not by itself model
   evaporator airflow behaviour, and **the vertical slice (§0.7) is entirely about
   airflow.**

   *Assistant note, 2026-08-02: I briefly marked this resolved on finding
   `ThermoCycle...HeatExchangers.CrossHX` with `Medium2 = Modelica.Media.Air.SimpleAir`.
   **That was too fast and the closure is withdrawn.** A generic two-fluid cross-flow
   exchanger with air as the secondary fluid is not the same as a finned-tube coil with
   fin efficiency, airflow-dependent air-side heat transfer, and a fan characteristic.*

   **What exists and is worth checking** (not yet verified as sufficient):
   `ThermoCycle/Components/FluidFlow/Pipes/AirCell.mo` and `AirCell_pT.mo`; `CrossHX`;
   `CrossCondenser`.

   **The question to answer at M1e:** does the air-side model let evaporator **airflow
   rate** be an input, and does the air-side heat transfer coefficient respond to it?
   If air-side conductance is a fixed parameter, **the slice experiment cannot work as
   written** — reducing airflow would change the air temperature rise but not the
   coil's heat transfer, which is only half the physics.

   If neither library supplies an adequate air-side model, **raise it before building**
   — the slice experiment would need to change.

---

## 16. Validation — the model cannot validate itself

**Why this section exists.** §11's saved scenarios are *regression* tests: they prove a
future version reproduces the same behaviour as today's. They prove nothing about
whether that behaviour is **right**. The target user has limited refrigeration
knowledge and **may not notice a convincing but wrong result** — which is precisely
the failure E6 exists to prevent, arriving by a different route.

**Rule: no experiment is enabled in the UI until it has a validation row backed by
evidence outside this model.**

### 16.1 The matrix — `docs/VALIDATION.md`

One row per fault, per experiment:

| Input / fault | Expected direction | Operating conditions | Evidence source | Permitted exceptions |
|---|---|---|---|---|

Acceptable evidence, roughly strongest first:

1. **Measured test data** from the user's own units — strongest, and already available
2. **Component documentation** — compressor, TXV, coil manufacturer data
3. **Established refrigeration references** — textbook or standards
4. **Comparison against a validated example model** shipped with ThermoCycle/AixLib
5. **Review by a refrigeration-domain expert**

"It looked right in the simulation" is **not** evidence.

**"Permitted exceptions" is required, not optional.** Most refrigeration behaviours are
conditional. Recording where an expected direction does *not* hold is what stops §11
scenarios from being mistaken for universal laws.

### 16.2 Scope, per §0.7

**For the vertical slice: one row only** — evaporator airflow. Do not write the matrix
for experiments that are not yet built. Each later experiment adds its row as part of
its own milestone, before its capability is enabled.

### 16.3 The slice's row — write this first

| Field | Value |
|---|---|
| Input | evaporator airflow reduced from nominal |
| Expected | evaporator saturation temperature ↓, suction pressure ↓, refrigerant mass flow ↓, capacity ↓, air-off temperature ↓ *(closer to coil temp)*, **superheat ↓ with a fixed valve opening** — see correction below |
| Conditions | RLN5MA, air-cooled, steady state, nominal charge. **State the valve mode explicitly** — fixed opening vs. TXV actively controlling. The expected superheat direction depends entirely on which. |
| Evidence | **To be filled from the user's logged test data** — the sample CSVs contain `Air in`/`Air off` per evaporator section, giving measured air ΔT against which the modelled response can be checked |
| Exceptions | **To be determined.** At minimum: behaviour differs once the TXV saturates, and at very low airflow where the coil approaches dry-out |

> ### ⚠️ CORRECTION — 2026-08-02. An earlier version of this row was wrong.
>
> It read *"superheat ↑ before the TXV compensates."* **That is backwards.**
>
> Reducing evaporator airflow reduces the heat entering the refrigerant. With a
> **fixed valve opening**, less heat means less of the refrigerant evaporates, the coil
> floods, and **superheat falls** — which is precisely why low evaporator airflow is a
> liquid-floodback risk. With a **TXV actively controlling**, superheat stays roughly
> constant and the valve *closes* to hold it; the observable signature is the valve
> position moving, not the superheat.
>
> **In neither case does superheat rise.**
>
> **Consequences of this error, recorded rather than quietly fixed:**
> - `twin/demo_engine.py` encoded it (`+5.0 * airflow_drop` on superheat).
> - `tests/test_scenarios.py` asserted it, locking it in.
> - `docs/VALIDATION.md` repeated it.
>
> **Independent of direction, the demo was self-contradictory.** Over an airflow sweep
> from 100% to 40% it reduced its own Δh (Q ÷ ṁ) from 180.6 to 157.4 kJ/kg while
> claiming superheat rose 6.5 → 9.5 K. Less enthalpy rise cannot produce more
> superheat. **Any validation row must be checked against the model's own energy
> balance, not only against its direction of change** — a plausible direction can still
> sit on top of impossible numbers.
>
> This is exactly the failure mode §16 exists to catch, arriving through the
> specification rather than the implementation. Treat every remaining "expected
> direction" in this document as **unverified until it has evidence** (§16.1).

---

## 17. Application readiness

Physics milestones (§4) do not establish that the *application* works. The vertical
slice (§0.7) must satisfy all of these before the judgement is made:

| | Requirement |
|---|---|
| **A0** | FMU adapter loads, **validates the declared interface** against §6.2b, and handles solver failure without crashing the UI |
| **A1** | Baseline lock, reset, unit conversion, solver status, capability reasons, and **assumption display** all work |
| **A2** | Airflow control, pressures at multiple locations, delta table, p-h diagram, and causal narration all work |
| **A3** | Packaged application runs **offline, under a clean Windows account**, with no OpenModelica installed. **Now harder than originally scoped** — ExternalMedia adds a native binary that must ship inside the FMU (§3.3). |

**Deferred until after the judgement:** CSV import and validation report, and the
remaining five experiments.

**Interaction target:** a live input change updates the display within **~2 seconds**.
Anything slower — reinitialisation, sensitivity computation, severity sweeps — shows
progress and can be cancelled. If the FMU cannot meet 2 s for a live change, that is a
finding for `docs/PHASE0_RESULT.md`, not something to hide behind a spinner.
