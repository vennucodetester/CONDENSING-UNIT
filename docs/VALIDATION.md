# Validation Matrix

No experiment is enabled as validated until it has evidence outside this model.

**Nothing in this file is validated yet.** The current engines are demo correlations,
and several of their responses are known to be physically wrong — see "Known defects".

---

## Matrix

| Input / fault | Expected direction | Operating conditions | Evidence source | Permitted exceptions |
|---|---|---|---|---|
| Evaporator airflow reduced from nominal | Evaporating saturation temperature **↓**, suction pressure **↓**, refrigerant mass flow **↓**, capacity **↓**, air-off temperature **↓** (approaches coil temperature), **superheat ↓ at fixed valve opening** / **≈ constant with the TXV controlling — the observable signature is the valve position closing instead** | RLN5MA, air-cooled, steady state, nominal charge. **Valve mode must be stated** — fixed opening vs. TXV controlling. The superheat direction depends entirely on which. | **Pending.** The demo response is not evidence. Needs measured airflow/fan-speed change data, or component/reference evidence. | Behaviour changes once the TXV saturates; at very low airflow approaching dry-out; and during frosting. |

---

## Known defects in the current demo engines

Found by inspection and numerical checking on **2026-08-02**. Recorded so nobody
mistakes a demo response for a validated one, and so the real M1a model is checked
against them.

### D1 — Superheat moves the wrong way with airflow
`twin/demo_engine.py` applies `+5.0 * airflow_drop` to superheat. Reducing evaporator
airflow reduces heat into the refrigerant, so at a fixed valve opening the coil floods
and **superheat falls** — which is why low airflow is a liquid-floodback risk.
Originated in an incorrect SCOPE §16.3 row, now corrected there.

### D2 — Superheat contradicts the model's own energy balance
Across airflow 100% → 40%, the demo's own Δh (Q ÷ ṁ) falls 180.6 → 157.4 kJ/kg while
its superheat is claimed to rise 6.5 → 9.5 K. **Less enthalpy rise cannot produce more
superheat.** True regardless of which direction is physically correct.

### D3 — No coupling from the high side to the low side
Reducing condenser airflow to 40% raises discharge pressure 15.20 → 18.50 bar while
suction pressure, evaporating temperature, superheat and mass flow all change by
**exactly 0.0000**. Physically, higher head raises the pressure ratio, lowers
compressor volumetric efficiency, reduces mass flow, and **raises suction pressure**.
Violates SCOPE charter **E2** — a fault must produce a *full system* response.

### D4 — State points are not thermodynamically consistent
Enthalpy rise implied by the state points (~292 kJ/kg) disagrees with Q ÷ ṁ
(~181 kJ/kg) by roughly **62%**. No valid p-h diagram can be drawn from these numbers.

### D5 — States are not on the R290 saturation line
Stated `T_evap_sat_k` differs from true R290 saturation at the stated pressure by
**≈ −2.7 K**; condensing by **≈ −2.6 K**. Pressure and saturation temperature are
computed independently and never reconciled.

### D6 — Condenser air-side energy balance violated
`T_air_off_cond_k = 308.15 + Q_cond/4000` — **condenser airflow does not appear.** At
60% airflow with near-unchanged heat rejection, air ΔT should rise by roughly 65%
(12.7 → ~21 K). It instead falls slightly.
*(The evaporator air side is self-consistent and does not have this defect.)*

### D7 — Air temperatures are impossible for this equipment
Air enters the evaporator at 24 °C and leaves at 10.6 °C. RLN5MA is medium-temp and
must hold product ≤ 38 °F (3.3 °C), which 10.6 °C discharge air cannot achieve.
Entering air should be case return air (~2–8 °C), not ambient.

### D8 — No floodback penalty, and an artificial superheat floor
Opening the TXV to 100% raises capacity monotonically to 7.53 kW. Real systems lose
capacity and return liquid as superheat collapses. Superheat is also clamped at a floor
of exactly 1.0 K.

### D9 — The two engines disagree
In `SmokeContract.mo`, `superheat_mixed_k` does not depend on airflow at all, and
`T_air_off_evap_k = T_air_in − Q/2500` ignores airflow entirely. The same slider
therefore produces different physics depending on which engine is active.

### D11 — Mass flow does not affect discharge pressure
`discharge_bar = 15.2 - 0.55*airflow_drop + 3.2*speed_delta + 5.5*condenser_drop`.
**TXV opening and evaporator capacity do not appear.** Measured across full input
ranges:

| Input | Δ discharge | Δ mass flow |
|---|---|---|
| TXV opening 0.54 → 1.00 | **0.0 psi** | **+73.6%** |
| TXV size 1.0 → 1.3 | 0.0 psi | +25.9% |
| Evaporator size 1.0 → 1.3 | 0.0 psi | +9.6% |
| Evaporator airflow 1.0 → 0.4 | −4.8 psi (2% of reading) | −30.7% |
| Condenser airflow 1.0 → 0.4 | +47.9 psi | 0% |

Pushing 74% more refrigerant through the condenser must raise condensing temperature
and pressure — the coil has to reject the extra heat. The demo shows no change.

**Structural cause — the same as D3, in the opposite direction.** The demo is two
disconnected halves: the low side responds to evaporator and TXV inputs, the high side
to condenser inputs, and compressor speed is the only input touching both. **There is
no refrigerant loop.** D3 (high→low) and D11 (low→high) together mean nothing
propagates around the circuit. No coefficient tuning fixes this; it requires the real
coupled model.

### D10 — Missing capabilities (correctly disabled; listed for completeness)
No per-circuit restriction input exists — circuits are permanently split 51/49, so
maldistribution cannot be expressed. No TXV control law exists, so the "TXV cliff"
cannot occur; `txv_saturated` fires only when the slider reaches maximum. No charge,
frost, or defrost thermal model exists.

---

## Acceptance rule for the real M1a model

The ThermoCycle + AixLib R290 model **must be checked against every defect above**
before any experiment is marked validated. Specifically it must:

1. Close its own energy balance — Δh from states equals Q ÷ ṁ (D2, D4)
2. Place saturation states on the real R290 saturation line (D5)
3. Show high-side faults propagating to the low side (D3)
4. Close the air-side energy balance on **both** heat exchangers (D6)
5. Use realistic case return-air conditions (D7)
6. Reproduce capacity loss and superheat collapse when over-fed (D8)

**A direction check is not sufficient.** D2 shows a response can move the expected way
and still rest on impossible numbers. Every validation must test energy consistency as
well as direction.

---

# VALIDATION STATE 2026-08-06 — the app now runs validated FMU physics

This section is what `app.py::_build_defect_banner` refers to when it says the banner
comes off "only when `docs/VALIDATION.md` records the defects as fixed and the
expected-fail tests in `tests/test_scenarios.py` pass"
(`ENGINEERING_DIRECTIVES` 2.1).

## The three conditions, checked

| condition | state |
|---|---|
| `bash ./gate.sh --repeat 3` | **3/3 runs at 7/7**, in separate processes |
| expected-fail markers in `tests/test_scenarios.py` | **none remain** (the only `skip` is FMU-missing logic) |
| defect state recorded here | **this section** |

## The demo-engine defects D1-D4 no longer reach the screen

D1-D4 are defects of `twin/demo_engine.py`. The application now constructs `FmuEngine`
and only falls back to `DemoAirflowEngine` if the FMU cannot be loaded
(`app.py`, `engine_is_fmu`). So the banner is now **conditional on that flag** rather
than removed: with the FMU live it is hidden; on fallback to the demo engine it still
appears, because the defects it warns about are then genuinely on screen.

Deleting it outright would have been wrong — the fallback path still shows known-bad
physics.

## What is validated, and what is not

Validated against measurement (`docs/TRAP_RESOLUTION.md`, both datasets):

- Capacity, mass flow, `Q_cond` and COP all lie **inside** the measured bands.
- Subcooling -2.1 %, condenser air-off -0.3 %, `T_cond` +3.5 %.
- **Extrapolation:** at a held-out operating point 7 K hotter (`data 2.003.csv`,
  `T_amb_k` 315.87), with nothing retuned, `T_cond` +2.7 % and condenser air-off -0.1 %.

**Still wrong, and not hidden by removing the banner** — the `ILLUSTRATIVE DEMO` status
badge and the R290 safety text are deliberately KEPT:

- Evaporator air-side effectiveness ~0.40 against a measured 0.798.
- `T_evap` ~3.5 K colder than measured.
- Single-circuit model; the machine has a 4.2 F split between its two circuits.
- Charge inventory is coils-only.

## Test change recorded: `test_more_mass_flow_raises_discharge_pressure`

**This was a claim correction, NOT a gate edit**, made 2026-08-06 with the user's
explicit approval. `ENGINEERING_DIRECTIVES` 2.3 forbids editing a test to make it pass;
`HANDOFF.md` 7.7 states the other branch of the same rule — *if an assertion fails, the
physics or the claim is wrong, so fix one of those*. Here the claim was wrong:

- The test drove `txv_opening_frac` and required +5 % mass flow. At fixed displacement
  and speed the **compressor** sets mass flow; a thermostatic valve only adjusts its
  stroke to pass it. Measured authority via the valve: **+0.8 %**.
- The lever moved to `compressor_speed_frac=1.15` (**+9.9 %** mass flow, head +1.6 %).
  **Both assertions and both magnitudes are the originals.** Nothing was relaxed.
- The valve did not lose coverage: `test_the_txv_holds_superheat_near_its_setpoint` was
  added for its real authority. It **fails under the legacy law** (setpoint offset
  6.92 K) and passes under the thermostatic element (1.29 K) — verified, so it is a
  genuine discriminator rather than a test that passes either way.

Net effect on the gate: **6 scenario tests became 7**. It got harder, not easier.

## Defect fixed while checking this: the app ran an uncalibrated condenser airflow

`app.py` constructed `FmuEngine(nominal_condenser_airflow_m3_s=0.076)`, and
`twin/engine_fmu.py` multiplies that nominal by `condenser_airflow_frac`. So at the
default `frac = 1.0` the application solved at **0.076 m3/s** while the calibrated and
measured value is **0.1203 m3/s** (`HANDOFF.md` section 5). Every number the trainer
displayed was therefore off the calibration point — unlike the stale display constants
in `CONTROL_UNITS`, this one really did feed the FMU. Corrected to 0.1203.
