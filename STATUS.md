# STATUS — what is done, what is pending

**Last updated: 2026-08-03 (late). Gate: 6/6 — verified, `md5 4a5c2e237e42`.**
Update this file whenever a milestone changes state.
**Full detail and next steps: `NEXT_STEPS.md`.** This file is the summary.

> ⚠️ This file was found reverted to a stale "0/6 / singular linear system" state on
> 2026-08-03 and corrected. Verify against `./gate.sh` output before trusting it.

---

## In one line

**M1e is done: the closed loop builds, initialises, converges, and passes all six
scenarios.** D3 (high-side fault reaches the low side) and D11 (low-side reaches the
high side) both pass — that was the entire point of M1e. Energy closes to 0.00000 %.

**The banner STAYS UP.** 6/6 proves the *couplings*, not the *numbers*. Capacity is
439 W, T_cond 48.6 °C against a 40 °C rating, superheat 7.94 K against a 3.3–5.0 target.

### Bugs found and fixed to get here
- `CoilAirSide.mo` duplicate binding equation — over-determined by 2, would not build
- Air/refrigerant flux units — W supplied where W/m² required
- **Coil sign inversion** — evaporator was *heating* the box, condenser *absorbing*
  13.7 kW with air leaving at 454 K
- **Air/refrigerant interface area mismatch** (`A_tot` 0.630 vs `A` 0.5) — 21 % of the
  evaporator's heat vanished, and **the gate stayed 6/6 throughout**, because
  `res_energy_w` sums three refrigerant-side terms and is blind to air-side leakage.
  **An air-side closure assertion belongs in the gate before the banner comes down.**

### LT configured from real data, not interpolation
CoilDesigner sheets (copper = LT, aluminium = MT) supplied `T_box_k` = 255.37 K (0 °F),
evaporator `UA` 132.8 W/K, `A` 0.630 m², `V` 1051 cm³. Tube OD back-calculates to
9.59 mm = 3/8 in nominal — a self-consistency check on the sheet. `k_v` = 0.039
calibrated by inverting the compressor catalogue at our operating PR (~10).

## Physics pipeline

| # | Milestone | State | Evidence |
|---|---|---|---|
| M0 | FMI toolchain: export FMU, run via FMPy | ✅ **DONE** | `docs/PHASE0_RESULT.md` |
| M1a | ThermoCycle coil + AixLib R290 medium | ❌ **DEAD END** (by design of the test) | AixLib cannot supply ExternalMedia saturation derivatives |
| M1b | ExternalMedia + CoolProp installed | ✅ **DONE** | prebuilt win64 DLLs, no compiler needed |
| M1c-1 | R290 properties + saturation derivatives | ✅ **DONE** | Tsat 0.7217 °C cross-checked vs. CoolProp; h_fg 373.9 kJ/kg |
| M1c-2 | Finite-volume refrigerant coil runs | ✅ **DONE** via `Flow1DimCS` | Q_tot 1568.73 W = ṁ·Δh **exactly**; M_tot 22.7 g |
| M1c-3 | Air side responds to airflow | ✅ **DONE** | U 60.00 → 28.83 W/m²K for 60 % airflow cut, matches ^0.8 law exactly |
| M1d | FMU export + FMPy + native DLL, isolated runtime | ✅ **DONE** | `fmu/Evap_me.fmu` runs with OpenModelica off `PATH` (**isolated-runtime, not a true clean machine**); DLL bundled; Q matches in-OMC exactly |
| **M1e** | **Closed refrigeration loop that converges** | ⛔ **BLOCKED — model builds/initialises but the linear system goes singular at t≈0.0553 s**, identically under CVode and DASSL (structural). Two real bugs fixed to reach this point (duplicate binding equation; W vs W/m² unit mismatch on air/refrigerant heat exchange). See `NEXT_STEPS.md` Steps A/B. | `NEXT_STEPS.md` |
| M2 | TXV control law, stroke limits, saturation + airflow | ⏳ pending | **App ships here** — experiments 2, 6, 7 |
| M3 | Charge inventory (110 g R290 nominal) | ⏳ pending | experiments 4, 5 |
| M4 | 2-circuit evaporator + distributor restriction | ⏳ pending | experiment 3 |
| M5 | Valves, flow reversal, hot-gas defrost | ⏳ pending | experiment 8 |
| M6 | Frost sub-model | ⏳ pending | experiment 1 |

**M1e is the remaining unproven gate** — a closed loop must actually converge
numerically, and that is not guaranteed. M1d cleared the packaging/runtime risk, so
M1e is now a pure physics problem rather than physics + deployment at once.

**Two OpenModelica defects are worked around, not fixed** (details in
`docs/PHASE0_RESULT.md` M1d):
- Co-Simulation export fails silently -> **use Model Exchange**
- `modelDescription.xml` violates FMI 2.0 -> **`validate=False` required**, which makes
  the explicit `REQUIRED_OUTPUTS` check the only interface guard. Keep it.

**Silent-failure pattern — second occurrence.** OMC reports failure without reporting the
cause, and the real error needs a separate invocation to see:
- M1d: Co-Simulation export fails silently.
- M1e: `simulate()` returns only `Failed to build model`; the C error needs
  `make -f <Model>.makefile` with the OMC MSYS toolchain on `PATH`. Also,
  `print(r.resultFile)` in a `.mos` script errors silently — read the echoed
  `SimulationResult` record instead.

Assume OMC failures are under-reported. Budget a separate capture step.

---

## Application

| | State |
|---|---|
| UI, schematic, sliders, baseline, narration | ✅ built |
| Capability system (honest disabling with reasons) | ✅ built |
| Provenance + assumption lineage | ✅ built |
| SI boundary discipline | ✅ built |
| FMU adapter with interface validation | ✅ built |
| Tests | ✅ 18 pass, 5 xfail (the xfails are the physics defects) |
| **Physics** | ❌ **still placeholder correlations** |

---

## Known-wrong physics in the shipped app

Eleven defects, `docs/VALIDATION.md` D1–D11. The three that would teach wrong reflexes:

- **D3** — restricting the condenser produces **zero** low-side response
- **D1** — superheat **rises** when evaporator airflow falls (it should fall)
- **D11** — opening the TXV moves 74 % more refrigerant with **no** discharge pressure change

D3 and D11 together mean **the demo has no refrigerant loop at all**. Not fixable by
tuning — they die when M1e lands. The in-app red banner stays until then.

---

## Decisions still needed from the user

**None outstanding.** Q2 and Q5 were answered 2026-08-02.

Answered and closed: unit topology (§13.1 — one self-contained unit, 2 circuits,
1 TXV), nominal charge (110 g R290), air-side model (§15 Q7), **Q2 compressor map**,
**Q5 defrost topology**.

### §15 Q2 — compressor map. ANSWERED 2026-08-02.

**Seed from the modelled unit's own geometry; user supplies a real AHRI map later
through the app.**

The user initially proposed 11 HP, then withdrew it as a guess. Computed from the
parameters already in `ClosedLoopM1e.mo` (V_s 1.05e-5 m³, 50 rev/s, ε_v 0.85) at
4.85 / 15.2 bar with 7 K superheat and 5 K subcooling, via CoolProp:

| | |
|---|---|
| Suction density | 10.196 kg/m³ |
| Mass flow | **4.55 g/s** |
| Refrigerating effect | 282.1 kJ/kg |
| **Cooling capacity** | **1283 W (0.36 ton)** |

Cross-check: M1c-2 measured the coil at 1568.73 W — same order, consistent.
**11 HP would be ~24.6 kW, about 19× the modelled unit**, and inconsistent with the
110 g R290 charge (a self-contained-cassette figure). Do not reintroduce it.

**Still ASSUMED provenance** — this is the model's own geometry, not a manufacturer map.
Requires the in-app editing route below.

### §15 Q5 — defrost topology. ANSWERED 2026-08-02.

**TOPOLOGY ADDED 2026-08-03 from the field tubing trace (app schematic).** The
2026-08-02 answer settled *which unit* (RLN2MA); it did not give the plumbing. The
trace does:

    compressor discharge -> hot-gas solenoid -> check valve -> DISTRIBUTOR
    liquid-line solenoid CLOSES for pump-down

Hot gas enters the evaporator **at the same point the TXV feeds** — not a separate
header, not at the coil outlet. Two circuits confirmed (matches the coil sheet's
`40P-2C`). **M5 is no longer blocked on topology.**

Also seen on the trace and NOT in the model: a **condensate-pan hot-gas coil** between
compressor and condenser, worth 16–30 % of the condenser's rejection load. See
`docs/MODEL_INPUTS.md` — fix that before further condenser `UA` tuning, or the UA gets
fitted to cover a missing component.

**The unit is `RLN2MA`, not `RLN5MA`.** `RLN2MA` is the one carrying the defrost data,
and it is what this app should model. This supersedes the E5 conflict at SCOPE §78 and
the `IDD5SL12WE` mismatch — that data is from a different system and should not be used.
Approximate defrost values to start, marked ASSUMED, editable in-app later.

### New work item, from both answers

**User-editable parameters with persistence.** Both Q2 and Q5 are answered "seed it, let
me correct it later." That requires an in-app editing route for ASSUMED values —
edit, validate, persist, and re-mark provenance when a user value replaces an assumption.
Not yet built. M2-era; it does not move M1e.

---

## Open items

- **True clean-machine test** for the FMU (second machine or fresh VM). M1d's test was
  isolated-runtime on the dev box only.

## Immediate next steps

1. **M1e — finish the closed loop.** Model exists (`RefrigerationTrainer/ClosedLoopM1e.mo`),
   unchanged, with named residuals and no damping, as agreed.
   ✅ Wiring fixed — balanced at 1153/1153.
   ✅ **Defect 3 diagnosed and closed.** The failing variable is `comp.vaporIn.phase`, an
   **Integer** inside ExternalMedia's `ThermodynamicState`. OMC's nonlinear-system emitter
   reads `.attribute.nominal` for every iteration variable; that member exists on
   `REAL_ATTRIBUTE`, not `INTEGER_ATTRIBUTE`. **Confirmed an OMC codegen defect** by a
   17-equation reproducer with no ThermoCycle — `modelica/spikes/PhaseNominal/`.
   **Nothing can be stripped from the Modelica source — the attribute exists only in
   generated C. Do not patch the C.**
   ➡️ **Next action: file it upstream.** Report drafted at
   `modelica/spikes/PhaseNominal/UPSTREAM_BUG_REPORT.md`; `MinRepro.mo` attaches as-is.
   ⛔ **The `Derivative of expression` / `Failed to solve` errors are still UNDIAGNOSED.**
   ❌ **Withdrawn hypothesis (2026-08-02):** that per-cell pressure states make the system
   high index. `Cell1Dim.mo:88/:150/:204-205` do give each cell a differentiated `p`
   welded to its neighbours — but **alias elimination already collapses them.** The
   compiled state vector holds **one pressure per exchanger** (`cond.Cells[1].p`,
   `evap.Cells[5].p`) alongside 10 enthalpy states. **There is no redundancy to remove,
   and no model change is warranted on this basis.** Verified in
   `RefrigerationTrainer.ClosedLoopM1e_info.json`.
   `--newBackend`'s `Sliced Dummies` message reflects **its own** array representation and
   its unimplemented slicing during index reduction — a WIP limitation, not evidence about
   our model. It should not have been read as such.
   **What is actually known:** these messages come from `Differentiate.mo` /
   `ExpressionSolve.mo`, which serve **symbolic Jacobian generation** as well as index
   reduction. They fire on ExternalMedia paths lacking derivative annotations, on a
   differentiation w.r.t. an array (`evap.Cells.Q_tot`), and on `drive.phi`
   (`Modelica.Mechanics.Rotational.Sources.ConstantSpeed`). **They did not stop C from
   being generated** — the build died later, at the C compiler, on defect 3. Whether they
   matter at runtime cannot be known until a build succeeds.
   ⏸️ **Component rewrites (`CompressorEM` / `ValveEM`) are on hold.** The reproducer needs
   no compressor at all, so rewriting components may aim at the wrong target — prefer the
   upstream report plus whatever OMC-side workaround it surfaces.
   **Note:** a closed loop does NOT need an external pressure datum or a receiver — it
   needs a defined initial inventory (`steadystate=false` + explicit `pstart`/`hstart`,
   already in place). M3 makes that inventory adjustable later.
2. Replace `twin/demo_engine.py` with the FMU engine.
3. **Acceptance gate, agreed:** the banner comes down **only** when the closed loop
   converges **and** the 5 xfail tests in `tests/test_scenarios.py` flip to passing.
   That flip is the proof the physics is real — not a judgement call.

### Optional, not blocking

- Reproduce the `Flow1Dim` codegen failure on a second OpenModelica version to promote
  it from *likely* bug to confirmed, and report upstream.

---

## Reproductions

All in `modelica/spikes/PathB/` — models, run scripts, logs and reference result files:

| Script | Proves |
|---|---|
| `run_pathB.mos` | properties pass; `Flow1Dim` codegen failure |
| `run_deconfound.mos` | **the trigger is `sat_in`/`ComputeSat=false`, not the component array** |
| `run_airside.mos` | air-side conductance responds to airflow |
| `run_flow1dimcs.mos` | **`Flow1DimCS` works — energy balance closes exactly** |
| `modelica/build_evap_fmu.mos` | **M1d: FMU export, self-contained, runs off-box** |
