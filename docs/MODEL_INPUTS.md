# MODEL INPUTS — every number the model uses, and where it came from

**Purpose.** One place to see what the model is actually working on. Every number is
tagged with its source, so an assumption can never quietly prop up another assumption.

**This already happened once.** Condenser airflow was assumed at 0.55 m³/s — physically
impossible for a single fan — and condenser conductance was set to 250 W/K to make the
results look plausible. Two wrong numbers cancelling. Neither was visible until they
were written side by side. That is what this file is for.

**Tags**

| | |
|---|---|
| **MEASURED** | read off a real instrument or a manufacturer test report |
| **DERIVED** | calculated from measured values — the arithmetic is shown |
| **ASSUMED** | a guess. Plausible, not verified. **Every one of these is a job.** |
| **SPEC** | from a drawing or nameplate |

**Calibrate / Check split.** Calibrate on `RLN2MA-1` and `RLN3MA U1`. **Hold
`RLN3MA U2` back** — never fit to it. If the model predicts U2 without ever having seen
it, that is real evidence. Fit to everything and you have a curve, not a model.

---

## 1. Test data available

| File | Units | Steady? | Use |
|---|---|---|---|
| `RLN2MA-1.csv` | 1 | ✅ **best** — all sensors within 0.4 °F across the run | **calibrate** |
| `RLN3MA.csv` | 2 (U1, U2) | ✅ 0.79 °F drift | **U1 calibrate · U2 CHECK ONLY** |
| `RLN5MA.csv` | 3 | ❌ 3.52 °F drift | excluded |
| `RLN2MA.csv` | — | headers only, **no data rows** | unusable |

> ⚠️ `RLN5MA.csv` also has a **dead sensor**: `Air out at the center of condenser 3`
> drifts 40,063 °F. Disconnected or failed thermocouple — worth fixing on the stand.

---

## 2. Fans — MEASURED

Manufacturer test report `fan curve.jpeg`, WEIGUANG test centre, 2025-06-11.

| | |
|---|---|
| Model | **ECM5312DBALAZ AS200** (axial) — **SPEC** |
| Test conditions | 230 V, 50 Hz, ~1515–1550 rpm, air density 1.17 kg/m³ |
| Outlet area | 0.03464 m² |
| **Evaporator** | **2 fans** — user confirmed |
| **Condenser** | **1 fan** — user confirmed |
| Speed in service | 1550 rpm — user confirmed |

**Curve, per fan** — MEASURED

| Static pressure (Pa) | m³/h | m³/s |
|---|---|---|
| 0.8 (free air) | 635 | 0.1764 |
| 10.0 | 588 | 0.1633 |
| 20.8 | 516 | 0.1433 |
| 30.3 | 456 | 0.1267 |
| 40.6 | 240 | 0.0667 |
| 50.1 | 201 | 0.0558 |

> ⚠️ The report is marked **低速 (low speed)** while 1550 rpm is its fastest point.
> **Check whether a high-speed curve exists.** If the unit runs the fans faster than
> this table covers, every airflow number below is wrong.

---

## 3. Airflow — DERIVED, and the model is currently wrong

`airflow = fan curve at the coil's pressure drop × number of fans`

| | Model has | **Should be (~20 Pa)** | Error |
|---|---|---|---|
| Evaporator (2 fans) | 0.45 m³/s | **0.287 m³/s** | 1.6× too high |
| Condenser (1 fan) | 0.55 m³/s | **0.143 m³/s** | **3.8× too high** |

**The condenser figure is not merely wrong, it is impossible.** One fan at free
delivery — zero resistance, which never occurs — moves 0.176 m³/s. The model assumes
**3.1× more air than the fan can physically produce.**

**Sensitivity — the coil pressure drop is ASSUMED at ~20 Pa and is not measured:**

| coil ΔP | evaporator | condenser |
|---|---|---|
| 10 Pa | 0.327 | 0.163 |
| **20 Pa** | **0.287** | **0.143** |
| 30 Pa | 0.253 | 0.127 |

Use **evap 0.25–0.33**, **cond 0.13–0.16**. Anything in those ranges beats the current
values by a wide margin. A measured airflow, or a measured coil ΔP, closes this.

> Minor: the fan was tested at 1.17 kg/m³ (~26 °C). Condenser air runs 78–118 °F, so it
> is less dense and true flow is slightly lower still.

---

## 4. Evaporator coil

| Parameter | Value | Tag | How to fill it |
|---|---|---|---|
| Air-side conductance `UA_air_nom` | 180 W/K | **ASSUMED** | **recompute** — see §8. Current value was fitted against wrong airflow |
| Airflow | 0.45 m³/s | **ASSUMED — WRONG** | → **0.287** (§3) |
| Circuits | **2** | **SPEC** | confirmed by `Evap Coil intlet 1/2 Temp` |
| Cells in model | 5 | modelling choice | — |
| Heat transfer area `A` | 0.5 m² | **ASSUMED** | coil drawing |
| Internal volume `V` | 0.0005 m³ | **ASSUMED** | tube ID × length × circuits. **Needed for M3 charge** |
| **Fin material** | — | **UNKNOWN** | aluminium or copper — **biggest single unknown for air-side performance** |
| **Fins per inch** | — | **UNKNOWN** | coil spec |
| **Rows deep** | — | **UNKNOWN** | coil spec |
| **Face area** | — | **UNKNOWN** | coil spec |
| Tube material / OD / wall | — | **UNKNOWN** | coil spec (matters less than fins) |

---

## 5. Condenser coil

| Parameter | Value | Tag | How to fill it |
|---|---|---|---|
| Air-side conductance `UA_air_nom` | 250 W/K | **ASSUMED** | **recompute** — was compensating for 3.8× airflow error |
| Airflow | 0.55 m³/s | **ASSUMED — IMPOSSIBLE** | → **0.143** (§3) |
| Heat transfer area `A` | 0.8 m² | **ASSUMED** | coil drawing |
| Internal volume `V` | 0.0008 m³ | **ASSUMED** | **needed for M3 charge** |
| Fin material / FPI / rows / face area | — | **UNKNOWN** | coil spec |

---

## 6. Compressor

| Parameter | Value | Tag | How to fill it |
|---|---|---|---|
| Displacement `V_s` | 1.05e-5 m³/rev | **ASSUMED** | nameplate |
| Speed | 50 rev/s (3000 rpm) | **ASSUMED** | nameplate |
| Isentropic efficiency | 0.72 | **ASSUMED** | AHRI map |
| Volumetric efficiency | 0.85 | **ASSUMED** | AHRI map |
| Model / part number | — | **UNKNOWN** | nameplate |

> The catalogue entry literally reads `"JUST A SAMMPLE"`. An **AHRI 10- or
> 20-coefficient map** is the highest-leverage single input in the whole model — it
> replaces four assumptions at once.

---

## 7. TXV, distributor, lines

| Parameter | Value | Tag | How to fill it |
|---|---|---|---|
| TXV orifice `Afull` | 9.6e-8 m² | **ASSUMED** | derived from target flow, not from the part |
| TXV nominal capacity | — | **UNKNOWN** | nameplate (tons) |
| TXV superheat setting | 7.0 K target | **SPEC** | case targets say 6–9 °F |
| Distributor outlets | 2 | **SPEC** | matches 2 circuits |
| Distributor nozzle size | — | **UNKNOWN** | part number |
| Feeder tube ID / length | — | **UNKNOWN** | **affects maldistribution (M4)** |
| Suction / liquid / discharge line ID & length | — | **UNKNOWN** | **needed for M3 charge** |
| **Refrigerant charge** | **110 g R290** | **MEASURED** | user confirmed |

---

## 8. Recomputing the coil conductances

Once airflow is corrected, both coil numbers follow from data already logged:

```
Q_air  = airflow × air density × 1005 × (T_air_in − T_air_out)
UA     = Q_air / (mean air temperature − coil temperature)
```

Columns needed — all present in `RLN3MA.csv` and `RLN2MA-1.csv`:

| | Evaporator | Condenser |
|---|---|---|
| air in | `Air Into Evap Left/Right` | `Air Into Cond Left/Right` |
| air out | `Air Out of Evap Right` | `Air Out of Cond Right` |
| coil temp | `Evap Coil intlet 1/2 Temp` | from discharge pressure |

> Air-out is measured on the **right side only**, while air-in differs left to right
> (56.4 vs 60.9 °F on RLN3MA U1). There is real spatial spread being averaged over —
> treat the resulting UA as an effective average, not a precise figure.

---

## 9. Priority — what to go and find

1. **Fan speed** — is there a high-speed curve? Everything in §3 depends on it.
2. **Coil specs**: fin material, FPI, rows, face area, tube ID — for both coils.
3. **Compressor nameplate**, and an AHRI map if obtainable.
4. **Internal volumes**: both coils plus line sizes and lengths. Gates M3 (charge).
5. **Coil pressure drop**, or a measured airflow. Removes the §3 assumption.
6. TXV nameplate capacity; distributor nozzle and feeder tube sizes (gates M4).

Items 1–3 change results today. Items 4–6 unblock later milestones.

---

## Charge inventory — where the 110 g actually lives (2026-08-03)

**`M_charge_kg` is COILS ONLY and must NOT be compared against the 110 g system total.**
The model contains two coils and nothing else. Liquid line, filter drier, hot gas line,
suction line and compressor shell are all absent, so the model's charge is structurally
incomplete. Comparing the two was an error made earlier in this project; do not repeat it.

Density at the current operating point (cond 16.61 bar / 48.6 C, evap 1.54 bar / -32.2 C),
which is what decides whether a volume matters:

| location | rho kg/m3 | g per 100 cm3 | per-cm3 vs drier |
|---|---|---|---|
| liquid line + **FILTER DRIER** | 457.2 | 45.7 | **100 %** |
| condenser (mixed) | 167.8 | 16.8 | 37 % |
| hot gas / discharge line | 28.2 | 2.8 | 6.2 % |
| evaporator (mixed) | 4.3 | 0.4 | 0.9 % |
| suction line / compressor shell | 3.4 | 0.3 | 0.8 % |

**Consequences**
- The **filter drier** holds **14-23 g at 30-50 cm3 free volume = 12-21 % of the charge.**
  It is a first-class charge sink, not a fitting.
- The **hot gas line is nearly irrelevant by mass** - ~1.4 g for a generous 1 m of 3/8 in.
  Include it for completeness; do not spend effort measuring it.
- The **suction line is negligible as vapour**, but **R290 dissolved in compressor oil**
  can be tens of grams. That is a solubility model, not a volume, and nothing here
  captures it.
- Measured evaporator (V = 1051 cm3, from the coil sheet) holds only **4.5 g**. The
  evaporator is not where the charge is.
- Model condenser currently holds **134 g in an ASSUMED 800 cm3 round-tube volume** -
  more than the entire system charge, so that volume is wrong regardless.
  The real condenser is **MICROCHANNEL** (p/n 506-10410), typically 100-200 cm3.
  Note 95 g in 150 cm3 would need 633 kg/m3, **denser than liquid propane at 48 C
  (~450)** - impossible. So with microchannel the coils physically cannot hold most of
  the 110 g, and the balance must be in the liquid line, drier and oil.

**Measure in this order:** drier free volume -> liquid line length/ID -> condenser core
volume. Everything else is noise by comparison.

---

## Field-traced topology (app schematic, 2026-08-03) — three findings

### 1. §15 Q5 (defrost topology) is ANSWERED. M5 unblocked.
Q5 was blocked because the schematic was RLN5MA while the only defrost data was
IDD5SL12WE, a different unit. **A field trace of the actual unit supersedes both.**

    compressor discharge -> hot-gas solenoid -> check valve -> DISTRIBUTOR
    liquid-line solenoid CLOSES (pump-down)

Hot gas enters the evaporator **at the same point the TXV feeds**, not via a separate
header and not at the coil outlet. Two circuits confirmed, matching the coil sheet's
`40P-2C` filename.

### 2. MODEL GAP: condensate-pan hot-gas coil
Discharge passes through a coil in the condensate pan **before** the condenser,
desuperheating to evaporate defrost condensate. **The model has no such path - it sends
all rejection to the condenser.** At 1.95 g/s and 16.61 bar:

| desuperheat | duty | share of our 660 W condenser load |
|---|---|---|
| 95 -> 70 C | 109 W | 16.5 % |
| 95 -> 60 C | 154 W | 23.3 % |
| 95 -> 50 C | 200 W | 30.3 % |

Our condenser sits at **48.6 C against a 40 C rating**. Part of that gap is the
condenser being asked to do work the pan coil does in the real machine. Worth adding
before any further `UA_air_nom` tuning on the condenser - otherwise we fit UA to cover
for a missing component.

### 3. Additional liquid-holding volumes seen on the trace
Beyond the filter drier already logged: **liquid-line solenoid**, **distributor**, and
**per-circuit feeder tubes** all sit in the liquid/two-phase line at ~457 kg/m3.
Also **process tubes** off the compressor (service stubs, normally pinched - small).

### App display numbers are PLACEHOLDER, not the FMU
The schematic shows suction 54.49 psig = 4.77 bar -> evaporating **+0.18 C**, and mass
flow 230.29 lb/hr = **29.02 g/s**. Our LT model runs **-32.19 C** and **1.95 g/s** (15x).
The app is still on `demo_engine`. Do not read those figures as validation.
