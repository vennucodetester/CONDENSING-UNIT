# TRAP RESOLUTION — T1–T4 of `TASKS.md`, closed 2026-08-05

Reproduce: `python scratch/trap_resolution.py` and `python scratch/trap_resolution.py "data 2.003"`

Both datasets analysed: `data 2.002.csv` (1,435 samples in 48 steady windows) and the
**held-out** `data 2.003.csv` (107 samples in 1 window), never used for calibration.

---

## THE STRUCTURAL ERROR IN THE OLD REFERENCE — read this first

`scratch/measured_reference.py` computes

```
Q_cond = V_cond * rho * cp * dT_air        (condenser air side, assumed airflow)
mdot   = Q_cond / (h_cond_in - h_liq)      (mdot DERIVED from Q_cond)
Q_evap = mdot * (h_suc - h_liq)            (Q_evap DERIVED from mdot)
```

So **`Q_evap` and `Q_cond` were never independent measurements.** Substituting, the
fourth trap's "17 % gap" reduces to

```
W_electrical  vs  mdot * (h_cond_in - h_suction)
```

i.e. it was never a three-way contradiction between capacity, rejection and power. It
was a two-way disagreement between the wattmeter and **one strap-on thermocouple**,
`Cond Inlet Temp` — the same sensor type that HANDOFF §3 already refuses to trust for
`Disch Temp Out of Comp`.

The one capacity number independent of every pressure transducer is the **evaporator
air side** with the fan-curve airflow (0.15 m3/s, itself derived from fan curve x coil
dP). Everything below is anchored there.

---

## T1 — THIRD TRAP WITHDRAWN. The 0.71 K condenser approach is not impossible.

The trap's premise: *"Air cannot leave a condenser at essentially the condensing
temperature; that needs infinite UA."* **The premise is wrong**, because it assumes the
whole coil sits at `T_cond`. It does not.

The refrigerant **enters superheated**, and the coil is counter-flow, so the air
**exits at the same end the hot gas enters**. The air-off sensor sees desuperheating
gas, not saturated refrigerant.

Sizing that zone from the electrical work (not the untrustworthy discharge TC):

| dataset | true discharge T | desuperheat share of Q_cond | T_cond | air off |
|---|---|---|---|---|
| 2.002 | 108–144 C | **31–42 %** (434–467 W) | 44.73 C | 43.94 C |
| 2.003 | 126–163 C | **37–47 %** (470–496 W) | 52.01 C | 51.31 C |

A third to a half of the condenser duty is rejected from gas at 108–163 C. Air leaving
at 44 C alongside it needs no unusual UA at all.

**Three further confirmations:**

1. **No sensor contradicts the transducer.** Unlike the suction case, where coil metal
   read colder than the refrigerant, every condenser sensor is consistent:
   `Cond Outlet Temp` = 40.62 C is **below** Tsat = 44.73 C, giving a positive 4.11 K of
   subcooling. There is no impossibility to explain.
2. **The model already does it.** After the counterflow fix the model reaches a 2.8 K
   approach (T_cond 46.13 C, air off 110.0 F = 43.3 C) with finite UA, while matching
   `T_cond` to +2.9 % and air-off to -1.3 % **simultaneously**. A finite-area coil
   demonstrably reproduces what the trap declared unachievable.
3. **It reproduces on held-out data** at 0.69 K. A structural feature of the geometry,
   not noise in one window.

**Verdict: `T_cond` = 44.82 C IS a valid calibration target. The discharge transducer is
cleared.** The old advice to work back from "a normal 5-8 K approach" would have pushed
`T_cond` to 49-52 C and been wrong by 5 K.

### A subcooling claim I got wrong, and the correction

The liquid line is real and measurable:

| | 2.002 | 2.003 |
|---|---|---|
| condenser outlet TC | 40.62 C | 48.18 C |
| liquid into TXV TC | 35.84 C | 42.63 C |
| **liquid-line heat LOSS** | **4.79 K** | **5.55 K** |
| subcooling at the condenser outlet | 4.11 K | 3.83 K |
| subcooling at the TXV | **8.98 K** | 9.38 K |

My first conclusion was that, because the model has no liquid line, its condenser-outlet
subcooling had to be compared against 4.11 K rather than 8.98 K — making the model
+110 % out rather than -4 %. **That was wrong, and two experiments disproved it:**

1. Re-tuning the condenser charge profile (outlet start enthalpy 2.90e5 → 3.03e5,
   -2.1 g) moved subcooling only 8.70 → 8.33 K. Charge is not the control it was assumed
   to be.
2. Refining the mesh to N=10 moved subcooling the **wrong way**, 8.33 → 9.64 K, because
   a finer grid resolves the thin subcooled zone instead of averaging it away.

The insensitivity was the clue. Checking where the model's liquid actually lands:

```
model condenser outlet   = 45.86 - 9.64 = 36.22 C
measured TXV inlet       =               35.84 C     <- 0.4 K apart
measured condenser outlet=               40.62 C
air entering condenser   =               35.31 C
```

The real machine's liquid reaches 35.84 C, essentially the entering-air temperature —
it just gets there in two stages, 4.11 K inside the coil and 4.79 K more in the line.
**Both stages reject into the same ~35 C air**, and the model's condenser outlet *is* its
TXV inlet. So the model legitimately lumps the two, and its subcooling should be compared
against the TXV-inlet value after all.

**Verdict: the original 8.98 K target was right, though for a reason that had not been
stated.** Model 8.70 K = **-2.1 %**. Recorded because the reasoning matters more than the
number: "the model omits a component, so subtract that component's effect from the
target" is *only* valid when the omitted component has a different boundary condition
from the one that absorbed its duty. Here it does not.

---

## T2 / T4 — FOURTH TRAP DISSOLVED. The balance closes; the gap was single-probe selection.

Every duplicated probe pair disagrees materially, and the old reference silently used the
**Left** sensor of each pair. Carrying both as an interval:

| quantity | 2.002 | 2.003 |
|---|---|---|
| evaporator air dT, L / R | 4.93 / 3.37 K | 4.15 / 2.92 K |
| **Q_evap (air side)** | **610 – 891 W** | **529 – 750 W** |
| W_gas (Unit Watts - 50 W fan, 85 % motor) | 537 W | 561 W |
| Q_cond required to close | 1147 – 1428 W | 1089 – 1311 W |
| condenser air dT, L / R inlet probe | 8.63 / 12.18 K | 8.59 / 12.16 K |
| **condenser airflow that closes the balance** | **0.078 – 0.137 m3/s** | **0.074 – 0.126 m3/s** |

**The calibrated 0.1203 m3/s lies inside the closing interval on both runs.** There is no
17 % gap to explain — there is a ±23 % probe disagreement that was collapsed to a point
estimate.

Corroborating: specific work from the electrics is **174 J/g** (2.002), against the
compressor model's 167.8 kJ/kg — **-3.6 %**, and comfortably above the 96.9 kJ/kg
isentropic floor. The strap-on `Cond Inlet Temp` route instead gives 85.7 kJ/kg → 264 W,
**less than half** the metered work and below the isentropic floor: physically impossible,
which convicts that thermocouple exactly as the discharge one was convicted.

### The consequence for calibration

**The model's Q_evap = 693 W is INSIDE the measured interval on both datasets.**

Capacity is converged to within measurement resolution. The reported "-10.8 %" was an
artifact of comparing against the Left-probe endpoint of a 610–891 W band. **Spending
gate cycles driving capacity further is not justified by this data**, and the sign of the
residual error is not merely unknown — it is unknowable from these instruments.

---

## T3 — held-out validation on `data 2.003.csv`

Every pathology reproduces, which makes each one instrument bias rather than
window-selection artifact:

| check | 2.002 | 2.003 | reproduces? |
|---|---|---|---|
| suction transducer vs coil TC | -20.95 vs -23.59 C (**3.36 K high**) | -20.36 vs -24.20 C (**3.84 K high**) | **yes** |
| condenser "approach" | 0.79 K | 0.69 K | **yes** |
| liquid-line heat loss | 4.79 K | 5.55 K | **yes** |
| energy balance closes at 0.1203 m3/s | yes | yes | **yes** |
| `Cond Inlet Temp` work below isentropic floor | 85.7 kJ/kg | 89.6 kJ/kg | **yes** |

Note 2.003 is a hotter operating point (ambient 42.7 vs 35.3 C, T_cond 52.0 vs 44.7 C),
so it is also a genuine second operating condition — useful later as a two-point check
that the model tracks ambient, not just one calibration point.

**Caveat:** only 1 steady window (107 samples) survives the duration/box-temperature
filter in 2.003, versus 48 in 2.002. Adequate for confirming a bias direction; not a
statistically strong second calibration point.

---

## T4 — measurement bands (2.002, p10 / median / p90 over 1,435 samples)

| channel | p10 | median | p90 | spread |
|---|---|---|---|---|
| Suction Pressure (psig) | 19.40 | 19.57 | 19.70 | 0.30 |
| Liquid Pressure (psig) | 200.61 | 206.49 | 214.22 | 13.60 |
| Cond Outlet Temp (F) | 101.98 | 105.12 | 107.10 | 5.12 |
| Temp Into TXV (F) | 93.35 | 96.51 | 99.09 | 5.74 |
| **Cond Inlet Temp (F)** | 122.21 | 154.15 | 157.90 | **35.69** |
| Suction Temp into Comp (F) | 24.12 | 31.00 | 32.76 | 8.64 |
| Air Into Evap Left (F) | -0.70 | 0.72 | 2.92 | 3.62 |
| Air Out Evap Left (F) | -9.17 | -8.15 | -5.21 | 3.95 |
| Air Into Cond Right (F) | 93.80 | 95.56 | 96.72 | 2.92 |
| Air Out Cond Left (F) | 109.04 | 111.10 | 114.01 | 4.97 |
| Unit Watts | 670.90 | 681.90 | 706.20 | 35.30 |

`Cond Inlet Temp` swings 36 F **inside nominally steady windows** — a third independent
reason to discard it.

---

## Revised comparison targets

| quantity | old target | **corrected target** | why |
|---|---|---|---|
| T_evap | -24.17 C | -24.17 C (unchanged) | coil TCs; transducer confirmed ~4 psi high on both runs |
| T_cond | 44.82 C, "doubtful" | **44.82 C, VALID** | third trap withdrawn — T1 |
| coil superheat | 1.27 K | 1.27 K (unchanged) | |
| subcooling | 8.98 K | 8.98 K (unchanged) | at the TXV inlet. Briefly changed to 4.11 K and changed back — see above |
| **Q_evap** | 776 W | **610 – 891 W (band)** | L/R probe disagreement; point estimate was never justified |
| Q_cond | 1124 W | 1147 – 1428 W | must equal Q_evap + W_gas |
| mass flow | 3.055 g/s | 2.1 – 3.1 g/s | follows the Q_evap band |

Consequences for `TASKS.md`: **T9 (drive capacity harder) is cancelled** — the model is
already inside the band, on both datasets, and the band is wider than the error.

## Where the remaining error actually is

With capacity, mass flow, COP, `Q_cond`, subcooling and condenser air-off all settled,
the residual is no longer spread across ten quantities. It is **one defect with three
symptoms**:

| symptom | model | target |
|---|---|---|
| coil superheat | 8.19 K | 1.27 K |
| T_evap | -28.58 C | -24.17 .. -23.59 C |
| air off evaporator | -6.88 F | -8.33 .. -8.15 F |
| **evaporator air-side effectiveness** | **0.377** | **0.798** |

These are not independent. The model's evaporator carries a large superheated zone,
where the refrigerant-side coefficient is `Unom_v` = 300 against `Unom_tp` = 2000 in the
two-phase region *and* the refrigerant is warming toward the air. That simultaneously
caps air-side effectiveness (so the air leaves too warm) and forces the coil to run
colder to move the same heat (so `T_evap` reads low). The real coil runs nearly flooded
at 1.27 K, so almost all of it is two-phase at the high coefficient.

**It is not air-side conductance.** Sweeping `UA_evap_nom_w_k` 132.8 → 300 (2.26x) after
the counterflow fix moves effectiveness only 0.377 → 0.439 and then saturates — the same
insensitivity signature that exposed the co-current defect. The binding constraint is how
much of the coil is flooded, which is the TXV's job. See the thermostatic-element block
at the end of `ClosedLoopM1eCS.mo`.

---

## HELD-OUT EXTRAPOLATION TEST — the model tracks ambient (2026-08-05)

`data 2.003.csv` is not just a second sample, it is a **different operating point**:
ambient 42.72 C against 35.31 C, condensing 52.01 C against 44.73 C. Nothing was
retuned; only `T_amb_k` was set to the measured 315.87 K.

```
python -c "import sys; sys.path.insert(0,'scratch');
from compare_to_measured import run, model_row, report;
report(model_row(run(T_amb_k=315.87)), 'data 2.003')"
```

| quantity | model | measured band | verdict |
|---|---|---|---|
| T_cond | 53.43 C | 52.01 C | **+2.7 %** |
| air off condenser | 123.48 F | 123.55 - 124.37 F | **-0.1 %** |
| Q_evap | 614 W | 529 - 750 W | **IN** |
| Q_cond | -1176 W | -1311 .. -1089 W | **IN** |
| mass flow | 2.66 g/s | 1.92 - 2.73 g/s | **IN** |
| COP | 1.33 | 0.94 - 1.34 | **IN** |
| T_evap | -27.30 C | -24.83 .. -24.17 C | -10.0 % |
| coil superheat | 6.52 K | 1.27 K | +414 % |

Capacity correctly **falls** 691 -> 614 W and COP 1.55 -> 1.33 at the hotter ambient,
and the condenser air-off is reproduced to a tenth of a percent 7 K away from the
calibration point. This is extrapolation, not fitting: the condenser side is doing real
physics rather than carrying a tuned offset.

The same two errors survive at both points — superheat and `T_evap` — which is further
evidence they are one structural defect and not a calibration offset.

**Scoring caveat:** scoring 2.003 at the 2.002 ambient instead gives 3/10 with `T_cond`
-11 % and air-off -11 %. That is a boundary-condition mismatch, not a model error. Always
set `T_amb_k` to the dataset's own measured value before reading a held-out score.
