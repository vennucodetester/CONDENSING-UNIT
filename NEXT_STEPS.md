# NEXT STEPS — get the gate to 6/6

**Current: 0/6.** The model builds and initialises, then goes singular at t≈0.0553 s.

**Self-contained hand-off. You should not need the conversation this came from.**
Last updated 2026-08-03.

Read `ENGINEERING_DIRECTIVES.md` first. It outranks this file.

---

## Units convention

**The user works in field units. The model works in SI. The UI converts.**

| Quantity | User-facing | Model internal |
|---|---|---|
| Temperature | **°F** | K |
| Pressure | **psi / psig** | Pa |
| Refrigerant charge | **grams** | kg |
| Capacity / heat | **BTU/hr** | W |
| Airflow | CFM | m³/s |

Never mix them at the boundary. Variable names carry their SI unit as a suffix
(`p_suction_pa`, `T_evap_sat_k`) — see SCOPE §6.4.

**Application targets, in the user's units:**

| | Discharge air temp | TXV |
|---|---|---|
| **LT (low temp)** — model this one | **−10 °F** | NX **A10** |
| MT (medium temp) — later | **+32 °F** | NX **A07** |

**Model the LT application.** It is the only one with complete data: copper coil sheet at
its design condition, confirmed TXV, and now a confirmed compressor. MT has no coil data.

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
