# MEASURED REFERENCE — the calibration target

Derived from field logs only. **No catalogue interpolation, no CoilDesigner design
intent, no assumed airflow on the thermodynamic path.**
Regenerate: `python scratch/measured_reference.py`

Source: `fileshare/data 2.002.csv`, 1435 samples inside the 49 steady windows
(>= 9 min, evaporator air-in within +/-2 F of 0 F) identified in
`fileshare/Steady_State_Operating_Data.xlsx`.

## The operating point

| quantity | measured | how |
|---|---|---|
| suction | 19.56 psig (sd 0.12) | transducer |
| liquid | 206.92 psig (sd 5.64) | transducer |
| **T_evap** | **-20.96 C** | CoolProp from suction pressure |
| **T_cond** | **44.82 C** | CoolProp from liquid pressure |
| **superheat** | **19.68 K** | at the COMPRESSOR (includes suction-line gain) |
| **subcooling** | **8.99 K** | from liquid pressure + Temp Into TXV |
| liquid into TXV | 96.5 F | |
| refrigerating effect | 287.4 kJ/kg | h_suc - h_liq |
| **mass flow** | **3.055 g/s** | condenser air side / (h_ci - h_liq) |
| **Q_evap** | **878 W** | mdot x refrigerating effect |
| Q_cond | 1124 W | condenser air side |
| **COP** | **~1.38** | Q_evap / (Unit Watts 685 - ~50 W fan) |
| **eps_v** | **0.6283 at PR 6.47** | mdot / (V_s x N x rho_su) |
| air across evaporator | 1.0 -> -7.6 F | |
| air across condenser | 89.3 -> 111.4 F | |

## Independent confirmation of the airflows

Mass flow was taken from the CONDENSER air side (delta 22 F, less sensor-sensitive
than the evaporator's 8.5 F). Feeding that mass flow back through the refrigerant
enthalpies implies an **evaporator airflow of 0.1523 m3/s = 323 CFM**.

The model uses **0.15 m3/s = 318 CFM**, derived independently from the fan curve
crossed with the coil pressure drop. **Agreement to 1.5 %.** The airflow question
raised in NEXT_STEPS Step 2 is settled - both values are right.

## DO NOT TRUST: the discharge temperature

`Disch Temp Out of Comp` reads **155.3 F**, giving a compressor work of 89.1 kJ/kg -
**less than the isentropic 96.9 kJ/kg, which is impossible.** It is a strap-on
thermocouple reading the tube wall, roughly 50-70 F below the gas. Real discharge at
eta_s 0.55-0.75 would be 188-227 F.

**Consequence: never calibrate compressor efficiency against discharge temperature.**
Use `Unit Watts` and the enthalpy difference across the evaporator instead.

## WITHDRAWN HYPOTHESIS: the condensate-pan hot-gas coil is significant

Estimated earlier at 16-30 % of condenser load, from an assumed 95 -> 50 C
desuperheat. **Measured: discharge 155.3 F -> condenser inlet 148.3 F = 8.6 kJ/kg =
26.3 W = 2.3 % of Q_cond.** Negligible. It does NOT need modelling, and the earlier
recommendation to add it before touching condenser UA is withdrawn.

## Model vs measured at the start of this calibration

| | model | measured | gap |
|---|---|---|---|
| T_evap | -32.2 C | -20.96 C | 11.2 K too cold |
| T_cond | ~48 C | 44.82 C | ~3 K too hot |
| capacity | ~520 W | 878 W | 41 % low |
| mass flow | 2.17 g/s | 3.055 g/s | 29 % low |
| subcooling | ~2.7 K | 8.99 K | |
| eps_v | 0.737 (k_v=0.039) | 0.6283 | formula too generous |


---

# CORRECTION 2026-08-04 — the suction transducer reads high. Targets revised.

**The evaporator numbers above are WRONG and must not be used.** They were derived from
the suction pressure transducer, which is contradicted by every sensor on the coil:

| sensor | reading |
|---|---|
| Evap Coil inlet Temp 2 (refrigerant, two-phase) | **-10.01 F** |
| Defrost Termination Sensor (on the coil) | -9.90 F |
| TXV Bulb (coil outlet) | -9.22 F |
| air off the coil | -7.7 F |
| **T_evap implied by the suction transducer** | **-5.73 F** |

The coil metal cannot be colder than the refrigerant inside it. The transducer reads
about **4 psi high**; true suction is ~15.7 psig, not 19.56.

## Revised targets — USE THESE

| quantity | target | note |
|---|---|---|
| **T_evap** | **-24.17 C** | from coil sensors, ~1.5 F below the strap-on metal reading |
| **T_cond** | **44.82 C** | liquid transducer, uncontradicted |
| **coil-outlet superheat** | **1.27 K** | TXV bulb - T_evap. The coil runs nearly FLOODED |
| compressor-inlet superheat | 22.88 K | includes suction-line gain - do NOT compare to the model |
| **subcooling** | **8.98 K** | |
| **mass flow** | **3.055 g/s** | condenser air side; unaffected by the suction fault |
| **Q_evap (coil only)** | **776 W** | mdot x (h_bulb - h_liq) |
| Q_cond | 1124 W | |
| PR | 7.28 | |
| eps_v | 0.7116 | -> k_v = 0.0380 |

## Two model omissions this exposed

1. **Suction-line heat gain: 34.2 kJ/kg = 105 W.** The refrigerant leaves the coil at
   1.27 K superheat and arrives at the compressor with 22.88 K. The model has no suction
   line, so its `superheat_k` must be compared against the **1.27 K coil value**, not the
   22.88 K compressor value. Comparing against 22.88 K was an error made earlier today.
2. **Circuit maldistribution.** Coil inlet circuit 1 reads -5.84 F, circuit 2 -10.01 F -
   a 4.2 F split across the distributor. Real, and outside the single-circuit model (M4).

## WITHDRAWN: k_v = 0.0588

Derived from the faulty transducer. The coil-derived value is **k_v = 0.0380**, which is
where the catalogue-derived figure already sat. Reverted.
