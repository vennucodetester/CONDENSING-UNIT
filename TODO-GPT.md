# TODO-GPT — authoritative execution plan for a usable Trainer v1

**Created 2026-08-08 after a code/test/FMU/documentation/repository audit.
Reconciled 2026-08-08 against `HANDOFF.md` and `todo.md` (session 6 model changes).**

Two independent analyses fed this file:

- an **audit** of the repository, tests, FMU artifact and app (what is *claimed* vs what is
  *true*), and
- the **session-6 engineering record** in `HANDOFF.md` + `todo.md` (what the model now
  actually contains).

They disagreed in one direction only: the audit's physics phases were written without
knowing that session 6 had already built the dual-circuit evaporator, the box + thermostat,
two line pressure drops and the flooded-start branch. Those are marked **DONE** below with
their evidence. Nothing was deleted for being inconvenient.

**Division of labour with `todo.md`:** `todo.md` is the *tactical* list — it carries the
measured targets, sweep tables and refuted hypotheses, and it is current. This file carries
the *ordering and the acceptance checks*, including the product/truthfulness work that
`todo.md` does not track. Read `todo.md` for how; read this for what next and when it is done.
Do not duplicate numbers between them — cross-reference.

A feature is complete only when its acceptance check passes. A document saying so is not
evidence.

## 0. Product definition — do not shrink this without the user's approval

Trainer v1 is a usable refrigeration diagnostic trainer, not the narrower M2 demo. It must
support a real FMU-backed workflow for:

- airflow, condenser performance, compressor, TXV, and box-load changes;
- realistic thermostat cycling and door-load schedules;
- line/drier restrictions with distinct displayed pressures and visible fault effects;
- two-circuit maldistribution and mixed-superheat masking;
- charge initialization and inventory behaviour;
- hot-gas defrost and frost/recovery; and
- a responsive, honest, installable UI with explanations, baseline comparison, provenance,
  and capability states.

Validation is scoped per capability. A green steady-state test does **not** validate cycling,
charge, defrost, frost, or a UI control.

## 1. Verified starting state — re-check only after a relevant change

| Item | Verified state | Source |
|---|---|---|
| FMU artifact | `fmu/RefrigerationTrainer.fmu` matches `modelica/ClosedLoopM1eCS.fmu`; source older than artifact | audit |
| Scenario gate | Last `gate.sh --repeat 3`: **3/3 at 7/7**. Covers scenario tests only | both |
| Fast tests | **30 passed, 1 failed** — `M_evap_wall_kg` has no top-level provenance entry. That is the *only* red. Component modifiers and `eta_is_nom` are guarded and green | audit, confirmed |
| Full suite | 53 tests collect. **No current full-green result exists.** `HANDOFF.md` §1's "50 tests, all pass" is STALE — it predates `M_evap_wall_kg` | audit vs HANDOFF |
| `HANDOFF.md` §1 comparison table | **STALE.** Predates four calibration moves (`Unom_v`, suction dP, liquid dP, dual-circuit). Q_evap is now **674 W**, not 712 W | HANDOFF header |
| Working tree | `ClosedLoopM1eCS.mo`, both FMUs and both vendor worktrees are **modified and uncommitted** | git |
| FMU UI | Model Exchange FMU; a solve is ~8 s, runs off the UI thread, **cannot be cancelled** | audit |
| Defrost controls | App exposes hot-gas and liquid-line solenoid commands. Both parameters are **declaration-only** in the model (`ClosedLoopM1eCS.mo:265-266`, referenced nowhere else) — **no physics authority** | audit, confirmed |
| Charge display | `app.py:272` `nameplate_charge_g = 100.0` against the supplied **110 g** | audit, confirmed |
| Per-circuit UI | **RESTORED and honest** (`app.py:394-401`) — real `superheat_circuit_k_1/2` from `evap1`/`evap2` | todo 1.3(c), confirmed |
| Vendor sources | AixLib and ThermoCycle worktrees hold uncommitted edits; **a clean clone cannot reproduce the current FMU** | audit |
| Doc layering | `HANDOFF.md` was consolidated to 346 lines and is back to **840**. Five status docs coexist (`todo.md`, `TASKS.md`, `NEXT_STEPS.md`, `STATUS.md`, this) | audit |

## 2. Non-negotiable working discipline

Full copy of the token rules in `CLAUDE.md` and `todo.md` §0. The ones specific to *this* plan:

1. One acceptance criterion at a time. State the physical prediction and the check before editing.
2. Cheapest evidence first: static/interface check → targeted Python test → one FMU scenario →
   repeated gate only when a phase acceptance is ready.
3. Batch `.mo` edits into ONE rebuild. Never report a Modelica result from a stale FMU.
4. A visible enabled control requires an **authority test** proving it moves an expected FMU
   output. Otherwise hide/disable it with a stated reason.
5. Do not fit a parameter to close a number before ruling out a missing topology, a saturation
   bound, an initialization error, or a measurement mismatch.
6. Never change a test to make it pass. Preserve refuted hypotheses (`todo.md` §3, `HANDOFF.md` §6).
7. Keep build products and caches out of commits; do not disturb user changes in vendor repos.

---

## P0. THE BLOCKER — the recent box sweep results, not the whole phase

Scope precisely. This invalidates **the duty/period/OFF-time numbers from the session-6 box
sweeps**, and therefore the coil-mass conclusion drawn from them ("~16 kg equivalent needed").
It does **not** touch the measured thermostat evidence — cut-out/cut-in from 35+ transitions on
two independent campaigns agreeing to 0.25 °F — nor the two-capacitance finding, nor the
flooded-start fix. Those stand.

**The confound:** `T_prod` started at `T_box_k` = 252.4 K, *below* the 253.95 K cut-in, so the
product began every cycling run as a large cold reservoir holding the air down. Duty came out
6–13 % against a measured 74–85 %, and with a ~1500 s product time constant an 8000 s run never
equilibrated. Every one of those numbers is a transient.

**The fix is already written** (uncommitted worktree, `ClosedLoopM1eCS.mo:812-813`):
`T_prod_start_k` is now its own `Evaluate=false` parameter feeding `T_prod_k`'s start. The old
`start = T_box_k` was bound at **compile** time — verified: setting `T_prod_k` through
`start_values` returned `T_box_k` unchanged.

### The seed is still wrong — the parameter exists but nothing yet uses it correctly

`scratch/calib_box.py:48` sets `T_prod_start_k = 252.3`, and its comment argues that this "sits
inside the 250.65–253.95 K band, so the product is not a cold reservoir." **That argument is
correct for the air and wrong for the product.** Measured `AVG Prod Temp` is 0.08–0.13 °F =
**≈255.43 K — above the whole thermostat band, not inside it.** Seeding at 252.3 K leaves the
product ~3.1 K colder than the real one, so it is still a cold reservoir; the confound was
reduced by 0.1 K, not removed. The next sweep would reproduce it.

**Do not seed the product from `scratch/box_equilibrium.py`.** That script solves `T_box_k` for a
**continuously running** compressor (≈ −5.4 °F = 252.4 K). It is the air equilibrium of a
non-cycling machine — not the product temperature, and not the cycling air temperature either.
Seeding from it lands essentially on the bad value. (Its own docstring says to initialise inside
the band for cycling runs; that instruction is about the *air*.)

Two different variables, two different sources:

| | seed | source |
|---|---|---|
| `T_box_k` (air) | 252.4 K, inside the 250.65–253.95 K band | already correct in `calib_box.py:41` |
| `T_prod_start_k` (product) | **≈255.43 K** | **measured `AVG Prod Temp`, 0.08–0.13 °F** |

Remaining work:

- [ ] Rebuild; verify the FMU actually **exposes** `T_prod_start_k` as a settable parameter.
      (The declared default is `T_box_k`, so a rebuild alone changes no behaviour — the seed must
      be *set*. Once exposed it is `Evaluate=false` and sweeps with no further rebuild.)
- [ ] Fix `scratch/calib_box.py:48` to **≈255.43 K from measured `AVG Prod Temp`**, and correct
      the comment above it — "inside the band" is the criterion for the air, not the product.
- [ ] Update `calib_box.py` to use the corrected NSF/DOE cycling targets; remove stale prose and
      obsolete UA-target logic.
- [ ] **Discard the partial first cycle** before scoring anything.
- [ ] Re-run the **one valid** check: OFF period at the geometry value `M_evap_wall_kg` = 4.3 kg,
      before concluding anything about coil mass.

**Acceptance:** the last several complete cycles show stable duty *and* stable off-time — scored
on those only, first cycle discarded. A run whose duty is still drifting has not equilibrated and
supplies no parameter, however green the gate is. Targets: `todo.md` §1.1.

---

## 3. Immediate stabilization — cheap, no rebuild, do alongside P0

### 3.1 Make repository status truthful

- [ ] **The one red item:** resolve `test_no_calibrated_parameter_escaped_the_table` for
      `M_evap_wall_kg` — a top-level parameter with no provenance entry. Record the geometry
      evidence (4.3 kg, both circuits) or make it non-tunable. **No invented provenance.**
- [x] **Component modifiers are guarded** — `test_component_modifier_coefficients_are_guarded`
      (`tests/test_calibration_provenance.py:322`) covers `Unom_l` / `Unom_tp` / `Unom_v`, written
      after the `Unom_v` 200 → 80 change slipped past. `todo.md` §1.7 is **done**. Same root cause
      as the item above — provenance coverage — but a *different check*, so they close separately.
- [x] **`eta_is_nom` is in the provenance table** (`tests/test_calibration_provenance.py:44`), and
      the entry itself records "STILL CONSTANT WITH PRESSURE RATIO". It is guarded. Its lack of PR
      dependence is a **model limitation, tracked in Phase G** — not pending provenance work.
- [ ] Add a **control-authority test** covering every enabled app input, including both solenoids.
      `scratch/probe_app_control_authority.py` already does the probing and
      `_start_values_template()` already prevents name drift — this is promoting that probe into
      an assertion, not new machinery.
- [ ] Correct capability truthfulness now: **defrost must be unavailable** until its FMU network
      has authority; charge must state that the 110 g nameplate exists but M3 inventory is pending.
- [ ] Fix `app.py:272` — displayed nameplate charge 100 g → **110 g**.
- [ ] Regenerate the `HANDOFF.md` §1 comparison table (`python scratch/compare_to_measured.py`)
      and correct its "50 tests, all pass" claim. (`todo.md` §1.4.)
- [ ] Consolidate the five status documents into one current source plus dated history. Re-layering
      has already recurred once (346 → 840 lines in two days). Do **not** create a sixth document.

**Exit:** targeted suites clean; every enabled UI control is authoritative; no document claims
the FMU is absent, Co-Simulation, or universally validated when that is false.

### 3.2 Make builds reproducible

- [ ] Inventory the exact modified vendor files and why each modification is required.
- [ ] Commit those changes in the vendor repos, or produce durable applied patches with documented
      upstream base revisions.
- [ ] Fix the untracked `fileshare` gitlink/submodule mapping or remove it from the release path.
- [ ] Add ignore rules for caches, logs and generated compiler output; retain deliberate FMU
      release artifacts.
- [ ] Rebuild from a clean checkout; compare FMU interface and scenario results.

**Exit:** a clean clone rebuilds the same supported FMU without local dirty vendor work.

---

## 4. Physics phases

### Phase A — cycling and box dynamics  ← **active, blocked on P0**

Built in session 6 and gated: `box_thermal_model` (two capacitances, `C_air_j_k` + `C_prod_j_k`
coupled by `UA_prod_w_k`), `box_thermostat` (cut-out 250.65 K / cut-in 253.95 K, both measured
across 35+ transitions on two campaigns), the door schedule, and the **flooded-start branch** in
`CompressorEM` that unblocked stopping the compressor at all. All default **off**.

- [x] **Compressor can now stop.** `rho_pump` capped at saturated vapour; `h_valid_max` 400 → 500 K.
      A 6000 s cycling run completes — 12 switches, period 16.7 min, up from 0.8. Gate 3/3 at 7/7.
- [x] **Two capacitances established from measurement** — air swings 5–7 °F per off-block while
      `AVG Prod Temp` moves 0.05 °F. A single `C_box` matched neither.
- [x] **Thermostat setpoints are measured and stand independently of P0** — cut-out 250.65 K /
      cut-in 253.95 K from 35+ transitions on two campaigns, agreeing to 0.25 °F. The
      initialization confound invalidates the *sweep results*, not this evidence.
- [ ] **P0: land and use the `T_prod_start_k` input** (see P0 — written, not yet rebuilt/applied).
- [ ] Re-run one controlled sweep at a time, with unique output files. (Concurrent background runs
      writing one results file produced garbage once already.)
- [ ] Validate cut-in/cut-out, **OFF period as the primary target** (5–6 min, p10–p90 on both
      campaigns — the only tight number; ON and duty are context, not fit targets), and restart
      stability against both campaigns.
- [ ] Door-load magnitude: supply a justified figure or keep the user-controlled **0** default with
      an honest "calibration unavailable" label. (`todo.md` §2.1 — needs the user.)

**Exit:** repeated long runs cycle without restart failure and fit the declared measured bands,
using settled cycles only — never transient startup numbers as calibration data.

### Phase B — pressure network and restriction diagnostics

- [x] **Suction line and liquid line + drier have real Darcy–Weisbach dP.** The "five displayed
      pressures are two" defect is partly closed.
- [ ] **Discharge-line pressure loss** — 89 in × 0.194 in ID of dense hot gas; copy the
      `SuctionLine` pattern. Lowest value of the three lines; best batched with flash gas.
- [ ] **Flash gas upstream of the TXV.** A 75 %-blocked drier already produces 33 psi of Δp but
      capacity barely moves (674.3 → 673.9 W) because the valve opens and absorbs it — correct
      until the valve saturates. Either drive it to saturation (`txv_saturated` is already an
      output) or model flash gas, which is the field mechanism.
- [ ] Implement drier/restriction fault inputs with measurable, documented symptoms. `twin/faults.py`
      is 7 lines and contains no faults.
- [ ] Test each fault's direction and each displayed pressure difference.

**Exit:** pressure-location displays are distinct where physical losses exist, and restriction
faults visibly affect capacity and diagnostic signals.

### Phase C — two-circuit maldistribution

- [x] **Stage (a) done and exact** — `evap1`/`evap2` in parallel through distributor tubes
      `dist1`/`dist2`; two halves reproduce one whole to −0.0 % (674.3 W vs 674.3 W), split 50.0/50.0.
      Direct parallel `Flow1Dim` branches are structurally singular; the distributor tubes are the
      missing component. `Mdotnom` is per-component and must be halved too.
- [x] **Stage (c) done** — the UI readouts are wired to independently computed branch outputs
      (`superheat_circuit_k_1/2`, `m_dot_circuit_kg_s_1/2` from `evap1`/`evap2`), not to one value
      shown twice. **Equal displayed values are correct** for the symmetric 50/50 configuration;
      that is not evidence of a fake split. Proof of maldistribution is stage (b) below.
- [ ] **Stage (b): move the split off 50/50.** Make the `dist1`/`dist2` bores `Evaluate=false`
      first — sweeping the bore currently changes nothing at all. **Target: the measured inlet
      split, NSF 2.66 K / DOE 2.38 K / 2.002 2.39 K.**
- [ ] Decide the physical source first — distributor bores vs circuit length/routing. (`todo.md`
      §2.3 — needs the user; it decides whether bores are the right knob.)
- [ ] Model unequal branch flow, air/UA share, outlet state, and suction-header mixing.
- [ ] Verify the TXV uses **mixed** outlet superheat and that one branch can diverge while mixed
      superheat stays near setpoint.

**Exit:** the measured circuit split and its diagnostic masking mechanism are reproduced, with
mass/energy conservation across splitter and mixer.

### Phase D — charge inventory and initialization (M3)

- [x] `charge_hstart_scale` scales the condenser hstart profile as a live charge control; less
      charge drives subcooling 13.87 → 6.88 K while superheat barely moves. `scratch/solve_charge.py`
      root-solves for a target. **This supersedes `HANDOFF.md` §4's claim that charge cannot be
      swept without a rebuild** — fix that line when regenerating the table.
- [x] Post-hoc inventory closes plausibly: coils 43.44 g + lines and drier 21.90 g = 65.33 g against
      110 g, shortfall in the right direction (shell, oil, dissolved refrigerant all still missing).
- [ ] Model inventory beyond the coils *inside the model*: lines, drier, compressor shell/oil
      assumptions, and any relevant vessel volume.
- [ ] Make initial charge a clean **reinitialization** input, not a live algebraic slider.
- [ ] Validate undercharge/overcharge directions and inventory accounting against 110 g.
      **Do not tune `hstart` toward 110 g** — that number is a plausibility check, not a target.
- [ ] Enable the UI charge experiment only after those checks pass.

**Exit:** charge is a physically meaningful experiment, not a coils-only number.

### Phase E — hot-gas defrost (M5)

- [ ] Build the actual solenoid/check-valve network. Both solenoid parameters are declaration-only
      today (§1) — **prove each valve has authority** before the UI enables it.
- [ ] Support cooling → defrost → recovery, pressure equalization and flow reversal without chatter
      or solver failure.
- [ ] Carry the measured **40 W defrost-only pan heater** — correctly absent from the steady state,
      but it lands *inside* the box during defrost and must be included there.
- [ ] Validate against recorded defrost data (the DOE campaign defrosts).

**Exit:** a complete defrost cycle runs repeatedly and produces bounded, explainable thermal behaviour.

### Phase F — frost (M6)

- [ ] Add frost mass, latent/sensible storage, airflow blockage and UA degradation.
- [ ] Couple defrost recovery to frost removal.
- [ ] **Note the reopened lead:** frost *latent* heat is refuted (the coil never crosses 0 °C), but
      frost **sensible** heat was reopened 2026-08-08 — against the real coil-mass gap (~13000 J/K)
      it needs ~6 kg of ice, large but no longer dismissible. It is the open candidate for the
      missing evaporator thermal mass that P0 will re-measure.
- [ ] Validate fault progression and recovery, not a single static blockage point.

**Exit:** frost and defrost form one coherent, observable training experiment.

### Phase G — the saturation defect (was missing from both lists as a tracked item)

Neither the audit's phases nor `todo.md` §1 carries this, yet `HANDOFF.md` §4–§5 calls it **the
headline defect** and the operator's actual complaint ("the model is like a tank").

The model responds 3–26× more strongly to *reducing* capacity than to *increasing* it —
compressor speed 3.2×, evaporator airflow 5.8×, condenser airflow 8.7×, TXV size 26×. That is a
saturation signature: at baseline the system already sits against a limit in the more-capacity
direction.

- [ ] **The named suspect:** ThermoCycle scales every refrigerant-side coefficient as
      `U = Unom·(M_dot/Mdotnom)^0.8`. With `mdot_nom` = 0.006 against an actual 0.0029 kg/s, every
      coil's refrigerant-side `U` runs at **56 % of nominal** — and `mdot_nom` sits at 0.006 only
      because 0.004 and 0.00306 will not integrate. **A numerical limit is standing in for a
      physical one.** Untested; the most promising remaining lead.
- [ ] Cheapest first: raise `Unom_l/tp/v` to compensate for the known scaling artifact (needs a
      rebuild, defensible *because* the factor is an artifact). Harder: attack the integration
      failure that pins `mdot_nom`, which fixes the cause.
- [ ] Related and separate: `Unom_v` = 200 W/m²K against `Unom_tp` = 1500 is a 7.5:1 ratio where
      R290 physically wants 20–40:1, so the dry zone may transfer several times too much heat.
      (`Unom_v` 200 → 80 was tested and left the superheat penalty unchanged at −3.2 %; it was kept
      on physics grounds only. That refutes it as *the* explanation, not as a defect.)
- [ ] Do **not** re-tune `UA_evap_nom_w_k` to chase this. Implied UA asymptotes near 214 W/K even at
      15× air-side conductance while measured effectiveness implies ~289 W/K — a **series
      resistance** binds, and fitting a soft parameter would hide it. That is the `k_v = 0.0588`
      mistake a third time.

**Exit:** the more-capacity direction responds within a factor ~2 of the less-capacity direction,
and the remaining evaporator errors (superheat, `T_evap`, air-off evaporator) move together or are
shown not to.

---

## 5. Application productization — run alongside phases once Phase A is stable

- [ ] Add cancellation and useful progress for long FMU work (~8 s per solve, currently uncancellable).
- [ ] Meet the ~2 s interaction target with a documented approach. Fast preview plus authoritative
      solve is acceptable **only if clearly labelled**.
- [ ] Tests for baseline/reset, visible deltas, causal narration, capability reasons, and every
      enabled control's authority.
- [ ] Make validation status **capability-specific**; no single misleading global boolean.
- [ ] Add measured-case import and validation reporting once its supported inputs are defined.
- [ ] Test the packaged application under a genuinely clean Windows account without OpenModelica.
- [ ] Keep the `ILLUSTRATIVE DEMO` badge and the R290 flammability text in **both** engine modes.
      The model has open errors and propane is flammable — this is deliberate, not cleanup debt.

**Exit:** an installed user can complete every enabled experiment, understand its limitations,
cancel long work, and never unknowingly see demo or inert physics as live physics.

## 6. Final release acceptance

- [ ] All phase exits met and recorded with commands and results.
- [ ] Unified release verification green **from a clean checkout**.
- [ ] Full suite green; scenario repeatability demonstrated **after** the final FMU build.
- [ ] One current status source; validated / calibrated / assumed / unavailable / future clearly
      separated.
- [ ] Clean-account packaged-app smoke test passes.

## 7. Needs the user — cannot proceed without input

| # | Item | What is needed |
|---|---|---|
| 7.1 | Door-opening magnitude | Schedule built and verified (pulses 0 → 1758 W, average exact); `Q_door_peak_btu_hr` defaults to 0 because the campaigns contain no door events. Needs the DOE class figure or an infiltration calc. Blocks the last Phase A item. |
| 7.2 | Suction can orientation | Stated horizontal (→ muffler/strainer, not an accumulator); dimensions varied across three messages. If **vertical with a standpipe**, the flooded-start fix reverts to building a real accumulator vessel. Orientation is the diagnostic, not size. |
| 7.3 | Maldistribution cause | Distributor bores, or circuit length/routing? Decides the knob for Phase C(b). |
| 7.4 | Compressor shaft rpm | **Standing caveat, not a request.** The data pins only `N · eps_v = 35.6 rev/s`; deriving shaft speed is circular. Closed in `HANDOFF.md` §9 — listed so it is not re-asked. |

## 8. Deferred only with the user's explicit approval

No feature in Sections 3–5 is silently deferred. Candidate later work: additional equipment
families, richer data overlays, optimization/parameter-fitting tools, and visual polish that does
not change diagnostic correctness.
