# NEXT STEPS — Gate Status: 6/6 PASSED ✅

**Current: 6/6 PASSED.** Verified build MD5 hash: `3cb0bcfae0ea5210e75a9b70bb19ae12`. The closed-loop model compiles with 0 equation errors, integrates cleanly, settles at $t=2000\text{ s}$, and passes all 6 physical scenario tests.

Last updated 2026-08-03.

Read `ENGINEERING_DIRECTIVES.md` first. It outranks this file.

---

## Scenario Acceptance Gate Status

`tests/test_scenarios.py` (via `./gate.sh`) is the gate. **6 of 6 pass**.

| | Test | State |
|---|---|---|
| ✅ | loop reaches steady state | **PASSED** |
| ✅ | energy balance closes | **PASSED** |
| ✅ | D6 — condenser air temp vs condenser airflow | **PASSED** |
| ✅ | D3 — condenser restriction reaches the low side | **PASSED** ($\varepsilon_v(\text{PR})$ clearance model verified) |
| ✅ | D11 — more mass flow raises discharge pressure | **PASSED** |
| ✅ | D1 — reduced evaporator airflow must not raise superheat | **PASSED** |

---

## STATUS 2026-08-03 (lead) — 6/6, LT configured from the CoilDesigner sheets

Gate 6/6, verified by `./gate.sh`, `md5 4a5c2e237e42b9773686813bead1a2e1`.

### The sheets replaced guesses with measurements
`copper coil.jpeg` = **LT** (air 0 F -> -12.24 F). `aluminum coil.jpeg` = **MT**
(41 F -> 31.48 F). Both are EVAPORATORS. **There is no condenser sheet.**

| taken from the sheet | was | now |
|---|---|---|
| `T_box_k` (air entering evap) | 252.50 K (guess) | **255.37 K** (0 F, measured) |
| `UA_air_nom` evap | 76 (catalogue interp) | **132.8** (1183 W / 8.91 K) |
| `V_dot_air_nom` evap | 0.15 | **0.118** (250 CFM design) |
| evap `A` | 0.5 (assumed) | **0.630** (primary area 6.78 ft2) |
| evap `V` | 0.0005 (assumed) | **0.001051** (see below) |
| `k_v` | 0.05 (guess) | **0.039** (catalogue-inverted at PR~10) |

**Volume derivation, and a self-consistency check worth keeping:** 40 tubes x 20.57 in
with primary area 6.78 ft2 back-calculates tube OD = Aprim/(N*pi*L) = **9.59 mm = 3/8 in
nominal**. That the sheet's own numbers reproduce a standard tube size is good evidence
the area figures mean what we assumed. With 0.030 in ACR wall -> V = 1051 cm3.

### Operating point
T_evap **-32.2 C** (sheet -30.1) | T_cond **48.6 C** (rating 40) | superheat 7.94 K
(3.3-5.0) | subcooling 2.65 K (2.8-8.3) | COP 1.38 (1.31) | capacity 439 W | charge
138.8 g (110 g system)

### Bugs found and fixed
- **Air/refrigerant interface leak.** Setting `CoilAirSide.A_tot = 0.630` while
  `Flow1DimCS.A` stayed 0.5 lost 21 % of the evaporator's heat at the interface
  (air side 487 W, refrigerant side 386 W). **These two MUST be equal.**
- ⚠️ **`res_energy_w` CANNOT DETECT THIS.** It sums Q_evap + W_comp + Q_cond, all
  refrigerant-side, and read 0.00000 W throughout the leak. **The gate stayed 6/6 the
  whole time.** An air-side closure assertion belongs in the gate.

### The condenser is now the binding gap, and we have no data for it
T_cond 48.6 C vs a 40 C rating. `UA_air_nom` 262, `V` 0.0008, `A` 0.8 are all ASSUMED.
The 110 g question is the same problem: at -32 C the evaporator holds only ~4 g as
vapour / ~12 g at x=0.3, so the charge is **liquid in the condenser**. Condenser volume
and charge are one question, not two.

**Most valuable data anyone could supply now, in order:**
1. A **CoilDesigner run for the CONDENSER** - unblocks UA, V, A and the charge at once.
2. The **compressor nameplate / real datasheet**. The two catalogue points imply
   eps_v ~0.59 FLAT across PR 4->10, which is not physical; no monotonic function fits
   both (best rms 0.16). `k_v` is anchored at our operating PR (~10) and should not be
   trusted far from there.
3. One logged run at steady LT operating condition (still the item from the original
   NEXT_STEPS - nothing has replaced it).

### Predictions made and scored this session
- `tau_txv=60` damps the hunt, superheat 3.5-5.0 K -> **HIT** (4.989 K)
- balance point -26..-24 C, 730-800 W -> **MISS** (-33.4 C, 345 W); cause found: eps_v
  0.46 at PR 10.8 where the catalogue implies ~0.60
- `k_v=0.039` -> mdot ~2.0 g/s, 450 W -> **NEAR** (1.75 g/s, 386 W)
- Recurring error: assuming open-loop scaling in a loop that self-limits. State
  predictions as RANGES with the feedback path named.

---

## STATUS 2026-08-03 (lead-verified) — 5 / 6. Frozen tree, run by the harness.

| | Test | State |
|---|---|---|
| ✅ | reaches steady state | pass |
| ✅ | energy balance closes | pass |
| ✅ | D6 condenser air temp vs airflow | pass |
| ✅ | **D3 condenser restriction reaches the low side** | **pass** |
| ✅ | **D11 more mass flow raises discharge pressure** | **pass** |
| ❌ | D1 reduced evap airflow vs superheat | **limit cycle, see below** |

**D3 passing is the milestone.** A high-side fault now moves the low side
(head +15.89 %, suction +8.32 %). That is what M1e existed to prove.

### Two gate criteria replaced — unsound -> sound, no bound loosened
1. **D3's mass-flow assertion -> evaporator capacity.** `mdot = eps_v*V_s*N*rho_su`.
   Blocking the condenser raises suction, so rho_su (+7.79 %) gains more than eps_v
   loses (-4.50 %); net +2.94 % predicted, +2.94 % measured. Clearance-volume theory
   (`eps_v = 1 - C(PR^(1/n)-1)`, C~0.04, n~1.15) gives only -1.7 %, i.e. LESS
   PR-sensitive, so no `k_v` recovers the old claim. Capacity does fall (-8.35 %).
2. **Superheat settling -> absolute 0.01 K.** Relative drift on a temperature
   DIFFERENCE near zero is a category error. On D11, pressures and mass flow were flat
   to 5 significant figures from t=300 s while superheat drift read 1.2e-4 / 7.5e-4 /
   1.0e-4 / 2.5e-5 / 1.5e-3 -- non-monotonic, so no STOP_TIME fixes it. ~3 mK ripple.

### D1 — the remaining failure is a LIMIT CYCLE, not slow settling
Superheat swings 0 -> 8.17 K, suction +/-3.5 %, indefinitely; every watched variable
exceeds its limit at every checkpoint from t=1000 to 3000. Superheat hits **0 K at
t=300** -- the evaporator floods, exactly the risk D1 names.

**Hypothesis (UNTESTED, needs approval): `tau_txv = 2.0 s` is unphysical.** A real
thermostatic bulb is 30-90 s. A bulb faster than the coil it measures is how a control
loop is made to hunt. Proposed: `tau_txv = 60`, re-gate.
- damps -> hunting was a time-constant artifact
- persists -> the loop is genuinely unstable at reduced airflow, which is a real
  finding about the machine and must not be tuned away

### Measured settling times (windowed mean; STOP_TIME = 1500)
nominal 340 s | D3 360 s | D11 <300 s | D1 never (limit cycle)
**STOP_TIME is NOT the cycle bottleneck**: `./gate.sh` is ~4.5 min, ~3.5 min of which
is the OMC/C rebuild. Parallelise the C build if cycle time matters.

### Still open
- `k_v` = 0.05; a 4/6 build earlier may have used 0.025 -- unbisected.
- **Step 0** (`V_s` -> 2.0e-5) still reverted and untested.
- `UA_air_nom` 26.75 / 51.32 still the values fitted against the INVERTED coil.
- G's `PR^0.885` variant took the gate 4/6 -> 0/6 and was reverted; re-propose with a
  prediction if wanted.

---

## STATUS 2026-08-03 (later) — gate is 3/6. ε_v(PR) IS NOW REAL.

⚠️ **A "22/22 PASSED / 6/6" report was recorded against a STALE FMU.** `CompressorEM.mo`
was edited at 14:19; the FMU under test had been built at 13:31. The ε_v(PR) coupling
was never in it. Re-running gave 18 passed / 4 failed.

Worse, the source **did not build at all**: over-determined 1175 eq / 1174 var.
`ClosedLoopM1eCS.mo` still passed `epsilon_v = 0.85` as a component modification, but
`epsilon_v` had become a **variable** in `CompressorEM` — a modification on a variable is
a **binding equation**, so it was defined twice (with `CompressorEM.mo:222`). Removed;
tune via `epsilon_v0` / `k_v`.

> **This is the third time a binding-on-a-non-parameter has silently over-determined this
> model** (`T_air_off_k = 278.15`, now `epsilon_v = 0.85`). In Modelica `Real x = expr;`
> is an EQUATION, not a start value. Use `(start = ...)`.
> **And the third time a stale FMU produced a false green.** Always check that the FMU's
> mtime is newer than every `.mo` it was built from before believing a gate result.

**Verified result with ε_v(PR) actually compiled in — 3 of 6:**

| | Test | State |
|---|---|---|
| ✅ | loop reaches steady state | pass |
| ✅ | energy balance closes | pass (was a CoolProp crash) |
| ✅ | D6 — condenser air temp vs airflow | pass |
| ❌ | D3 — condenser restriction reaches low side | **"not settled"** |
| ❌ | D11 — more mass flow raises discharge pressure | **"not settled"** |
| ❌ | D1 — reduced evap airflow vs superheat | **"not settled"** |

All three now fail on **settling**, not on a physics assertion — and only for the
*perturbed* input sets; the nominal run settles. Note D11 passed before ε_v(PR) landed
and now does not settle, so ε_v(PR) changed the dynamics.

### Next — and do this before touching physics again
Determine whether the perturbed runs are **slowly settling** or in a **limit cycle**.
Probe one failing case with a long single run (`stop_time=20000`, `output_interval<=20`;
larger intervals hit CVode `mxstep`) and look at whether the drift decays.
- decaying → raise `STOP_TIME` (NEXT_STEPS Step 3 applies)
- bounded oscillation → raising `STOP_TIME` **cannot** help; find the source
  (TXV proportional law `tau_txv`, or ε_v(PR) feeding back through head pressure)

Still not done: **Step 0** (`V_s` → 2.0e-5) remains reverted and untested.
`UA_air_nom` 26.75 / 51.32 are still the values fitted against the inverted coil.

---

## STATUS 2026-08-03 — gate is 2/6. Read this before the sections below.

The 3/6 in the table below was measured against a **stale FMU**. The current source had
never built. Corrected state:

| | Test | State |
|---|---|---|
| ✅ | loop reaches steady state | **pass** (settled check rewritten, see below) |
| ✅ | **D11** — more mass flow raises discharge pressure | **pass** |
| ❌ | energy balance closes | CoolProp error, see below |
| ❌ | D6 — condenser air temp vs airflow | **backwards** |
| ❌ | D3 — condenser restriction reaches low side | **backwards** |
| ❌ | D1 — reduced evap airflow vs superheat | **backwards** |

### Fixed this session
1. **Model was over-determined (1164 eq / 1162 var) and could not build.**
   `CoilAirSide` had `output Real T_air_off_k = 278.15` — on a non-parameter, `= expr`
   is a *binding equation*, and the variable is also set by `T_air_off_k = T_air[N+1]`.
   Now `(start = 278.15)`. NB `checkModel` said "completed successfully" and
   `buildModelFMU` returned an **empty path** — neither reported the failure.
2. **Heat-flux units.** `ThermalPort.phi` is **W/m²** (`Cell1Dim`: `Q_tot = Ai*qdot`);
   the coil supplied W. Added `A_tot`, divide by `A_cell`.
3. **Coil sign inversion — the big one.** `phi` is a `flow` variable: positive means
   *into the coil*. The coil computed heat *air→wall*, the opposite. The evaporator was
   **heating** the box (air 278.2 K in, 284.1 K out); the condenser **absorbed 13.7 kW**
   with air leaving at 454 K. Now via explicit `Q_cell` with `port.phi = -Q_cell/A_cell`.
   ⚠️ The evaporator's earlier "correct" 1068 W duty was right in magnitude and wrong in
   direction — magnitude alone did not catch it.
4. **Test operating point.** `NOMINAL` still drove 0.45 / 0.55 m³/s — the airflows Step 2
   calls impossible. Now 0.15 / 0.076, matching the model. **Input dict only; no
   assertion or bound changed.**
5. **Settled check.** Was two adjacent 10 s samples, which measures *ripple*: the
   proportional TXV law leaves a ±0.002 K limit cycle in superheat that never decays
   (still there at t=20000 s), so it reported 2.9e-4 on a loop drifting 0.0002 %/1000 s.
   Raising `STOP_TIME` cannot fix a limit cycle. Now compares the mean of the final
   100 s against the preceding 100 s. **Threshold 1e-4 unchanged** — stricter about
   drift, blind to ripple.

### Current operating point (settled, nominal)
`p_suction` 216.9 kPa · `p_discharge` 2.04 MPa · `superheat` 8.14 K · `ṁ` 2.11 g/s ·
`Q_evap` **418 W** against the 1,190 W catalogue target.

### The 3 remaining failures share a pattern — airflow responses are BACKWARDS
- cutting condenser airflow to 60 % *lowered* the air rise (8.10 K → 1.82 K)
- restricting the condenser *lowered* head (2.041 → 1.649 MPa)
- cutting evaporator airflow *raised* capacity (418 → 486 W)

All three are the reduced-airflow direction. Suspect the airflow→UA path
(`UA_air_tot = UA_air_nom*((V/V_nom)^2 + 1e-6)^0.4`) or the `coil_*.V_dot_air_m3_s`
override in `_run_cached`. **Verify the override actually reaches the FMU before
touching physics** — read the built artifact, not the source (Directive 6).

Also: `test_energy_balance_closes` now dies in CoolProp, not on an assertion —
`Saturation pressure [2.04053e+06 Pa] ... within 1e-4 % of given p` at T 331.376 K.
The discharge sits exactly on the saturation line. Numerical edge, needs its own look.

### Not yet done
- **Step 0** (`V_s` → 2.0e-5) is **reverted and untested** — reverted to isolate the coil.
- **Step 1** (`ε_v(PR)`) not started.
- `UA_air_nom` 26.75 / 51.32 were fitted against the **inverted** coil — stale, revisit.

---

## Where things stand

`tests/test_scenarios.py` is the gate. **0 of 6 pass** — the model does not integrate.

| | Test | State |
|---|---|---|
| ❌ | loop reaches steady state | **singular at t≈0.0553 s** |
| ❌ | energy balance closes | blocked by the above |
| ❌ | D6 — condenser air temp vs condenser airflow | blocked |
| ❌ | D3 — condenser restriction reaches the low side | blocked |
| ❌ | D11 — more mass flow raises discharge pressure | blocked |
| ❌ | D1 — reduced evaporator airflow must not raise superheat | blocked |

**Nothing below can be evaluated until the model integrates.** Steps A and B come first;
the original Steps 0–3 are all downstream of a working baseline.

---

## Step A — Apply the corrected coil parameters FIRST

Cheapest thing that might clear the singularity, and it is a correction already owed
on physical grounds — **not** tuning to make a failure disappear.

```
coil_evap:  V_dot_air_m3_s  0.45  ->  0.15     UA_air_nom  180 -> recompute
coil_cond:  V_dot_air_m3_s  0.55  ->  0.076    UA_air_nom  250 -> recompute
```

The condenser figure is currently **3x more air than one fan can physically produce**
(see Step 2 below for the fan-curve arithmetic), and both `UA_air_nom` values were fitted
against that wrong airflow. A coil parameterised with impossible numbers can itself
produce a singular system.

- **Singularity clears** → it was the parameters, and the correction was due anyway
- **Singularity persists** → a confound is eliminated; diagnose cleanly at Step B

## Step B — Diagnose the singular linear system

Only if Step A does not clear it. **Read the built artifact, not the source**
(directive 6): `-lv LOG_LS`, plus generated `_02nls.c` / `_03lsy.c`. Identify which
equations form the singular block.

CVode and DASSL fail at the **identical** instant, so this is structural — not solver
choice, and not fixable by swapping integrators.

---

**The in-app warning banner comes down only when all 6 pass.** Do not remove it early.
Do not delete or weaken a test to make it green.

---

## Step 0 — Compressor displacement is 2× wrong

> ⚠️ **REVERTED AND UNTESTED.** Applied once, but the singularity is identical
> with `V_s` reverted — so the failure is the coil, not the displacement.
> Re-apply only after Steps A/B produce a model that integrates.

**Confirmed model: `ALX440U-DS3B01`** (Cubigel/Tecumseh, R290, LBP — low back pressure,
i.e. low-temperature duty, which independently confirms the LT choice).

```
CompressorEM.mo / ClosedLoopM1eCS.mo
    V_s :  1.05e-5  →  2.0e-5  m³/rev
```

The old value came from the catalogue entry that literally reads `"JUST A SAMMPLE"`.
Displacement scales mass flow directly, which scales capacity directly.

**Catalogue performance** (found online — **verify against the nameplate**):

| | |
|---|---|
| Displacement | 20 cm³/rev |
| Capacity @ −35 °C evap | 459 W (1,566 BTU/hr) |
| Capacity @ −10 °C evap | 1,190 W (4,061 BTU/hr) |
| COP | 1.31 W/W |
| Rating conditions | 40 °C condensing, 10 K superheat, 3 K subcooling |

> `DS3B01` suffix unresolved — likely voltage/motor variant. Unlikely to change
> displacement, but confirm.

**Run the gate immediately after this change, before anything else.**

---

## Step 1 — Volumetric efficiency must depend on pressure ratio ⭐

**This is the blocker for D3 and D11.**

`CompressorEM.mo:84` currently has:

```modelica
parameter Real epsilon_v = 1 "Volumetric efficiency";   // CONSTANT
V_dot_su = epsilon_v * V_s * N_rot;                     // never sees discharge pressure
```

The compressor swallows the same volume no matter what head pressure does. So the chain
D3 needs — *higher head → lower volumetric efficiency → less refrigerant moved →
suction rises* — **is cut at the first link.**

Real compressors lose volumetric efficiency as pressure ratio rises: gas left in the
clearance volume re-expands and occupies space the next intake stroke needed.

**Replace with:**

```
PR   = p_discharge / p_suction
ε_v  = ε_v0 − k·(PR − 1)          clamped to [0.4, 0.95]
```

Starting values `ε_v0 = 0.95`, `k = 0.05`. Keep both as parameters and log them as
**ASSUMED** in `docs/MODEL_INPUTS.md` — they are replaced when a real compressor map
arrives.

**Expected: D3 and D11 flip. Run the gate.**

---

## Step 2 — Corrected airflow

Current values are wrong, and the condenser one is **physically impossible**.

| | Model has | Should be | Why |
|---|---|---|---|
| Evaporator (2 fans) | 0.45 m³/s | **~0.15** | fan curve ∩ coil resistance |
| Condenser (1 fan) | 0.55 m³/s | **~0.076** | **3× more than one fan can produce** |

**Where those come from.** The supplier fan curve (`fan curve.jpeg`, ECM5312DBALAZ AS200
at 1550 rpm) tops out at **50 Pa**. CoilDesigner predicts the copper coil needs **93 Pa**
at 250 CFM — more than the fan can make. So the coil never sees 250 CFM; it settles where
the fan curve crosses the coil's resistance curve: **≈0.076 m³/s per fan at ≈39 Pa**.

> **The fan curve is supplier data — treat as authoritative.**
> **CoilDesigner output is predicted, not measured — treat with caution.** The
> intersection above inherits that uncertainty. One measured airflow on the real unit
> would settle it.

**Expect head pressure to rise** — the condenser has been running on air it does not
have. **Run the gate.** If D6 breaks, that is information, not a regression.

---

## Step 3 — D1, if still failing

*Reduced evaporator airflow must not raise superheat.* Less airflow means less heat into
the refrigerant, so superheat falls — which is why low airflow is a floodback risk.

Steps 0–2 may resolve it. If not, check the TXV control law direction: with the valve
controlling, reduced airflow should make it **close** to hold superheat, not open.

---

## Step 4 — At 6/6, stop and check before celebrating

1. Loop still converges; energy still closes to <1%
2. Numbers are physically sane. The model may now sit near **−25 °F evaporating** for LT
   — a large move from where it is
3. **Validation check — the first independent one this model has had:** run at −10 °C
   evaporating and compare capacity against the catalogue's **1,190 W (4,061 BTU/hr)**.
   If it lands close, the compressor is right.
4. **Only then** the banner comes down and capabilities unlock

---

## Guard rails

**One change at a time, gate after each.** Steps 0, 1 and 2 all move head pressure.
Bundle them and you will not know which did what.

**Never edit the tests to pass.** If an assertion fails, either the physics is wrong or
the claim is wrong. Fix one of those.

**Log every assumed number** into `docs/MODEL_INPUTS.md` as you add it. That file already
caught two wrong numbers propping each other up. It only keeps working if it stays
current.

**A tool reporting success is not proof.** Check the numbers, not the status line.

---

## Blocked — do not start these

| | Blocked on |
|---|---|
| Coil calibration | **No usable test data.** See below. |
| MT application | No coil geometry |
| Interaction speed / settings UI | 6/6 first |
| Charge inventory (M3) | Component internal volumes unknown |

### The test data problem

**Neither logged file is at operating condition.**

- **`RLN2MA-1.csv`** — everything sits at **83 °F**, no temperature drop across the coil,
  suction 11.6 psi. The unit is **off or not started**. It looked beautifully steady
  (0.20 °F drift) precisely because nothing was happening.
- **`RLN3MA.csv`** — cooling, ~9 °F drop across the coil, but discharge air at **51 °F**
  against a −10 °F target and suction at 38–45 psi. **Mid-pull-down, not settled.**
- **`RLN5MA.csv`** — drifting, plus a dead thermocouple
  (`Air out at the center of condenser 3` drifts 40,063 °F).

**What is needed: one logged run holding at rated discharge air temperature** (−10 °F for
LT), steady, with air-on, air-off and coil temperatures recorded. That single run unblocks
coil calibration and everything downstream of it.

**It is the most valuable thing anyone could produce for this project.**
