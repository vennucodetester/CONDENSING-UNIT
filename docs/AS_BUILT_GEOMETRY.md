# AS-BUILT GEOMETRY AND TOPOLOGY — from the 2026-08-06 drawing package

Source: `Missing info word.docx` (five drawings plus commentary), supplied by the user
2026-08-06, with dimensional corrections confirmed by the user the same day. This file
records **what the hardware is**. It does not change any model parameter on its own — each
consumer is named below.

The docx also contained an LLM's commentary on the drawings. That commentary is **not**
treated as a source here; only the drawings and the user's confirmations are. Where the
commentary disagreed with the repo, §5 says which won and why.

---

## 1. Refrigerant lines and drier — NEW DATA, closes a HANDOFF §9 blocker

`HANDOFF.md` §9 listed the filter drier part number and the liquid-line length and tube
size as the remaining data blockers for charge inventory (M3). Both are now supplied.

| segment | length | ID | OD | internal volume |
|---|---|---|---|---|
| suction line, compressor inlet | ~40 in, 7 bends of various angles | **0.256 in** | **0.319 in** | 2.059 in³ = **33.7 mL** |
| discharge / hot-gas loop, compressor → condenser | 89 in | **0.194 in** | not given | 2.631 in³ = **43.1 mL** |
| liquid line, through the solenoid → coil | 20 in | **0.194 in** | 0.250 in | 0.591 in³ = **9.7 mL** |
| filter drier, Danfoss **023Z8250** (DML, 1.5 cu in, 0.25 in ODF, 58 bar) | — | — | — | net **34 mL** (shell ~50 mL) |
| | | | **total** | **120.5 mL** |

### Correction applied to the source document

The docx wrote the suction line as "0.319 internal ID and 0.256 OD", which is impossible —
ID cannot exceed OD. **The user confirmed 2026-08-06 that ID = 0.256 in and OD = 0.319 in**,
i.e. the two were transposed. The corrected pair is also the self-consistent one: a 0.0315 in
wall on nominal 5/16 in OD ACR tube. The liquid line's 0.194 / 0.250 pair is standard 1/4 in
ACR (0.028 in wall), and the user confirmed the hot-gas loop shares the 0.194 in ID.

The discharge-line **OD is still missing** — needed for the external-convection term in §3,
not for volume.

### Why this matters more for charge than for volume

120.5 mL against the model's coils-only 1509 cm³ (183 condenser + 1326 evaporator) is only
**+8 % of internal volume** — but volume is the wrong yardstick. The liquid line and the
drier run **liquid-full** at roughly 0.50 kg/L:

> 9.7 + 34 = **43.7 mL of liquid ≈ 22 g**, against a **110 g** system charge — **~20 %**.

`HANDOFF.md` §6 currently records the `M_charge_kg` vs 110 g comparison as **NOT
COMPARABLE** because `M_charge_kg` is coils only. With these numbers that comparison becomes
possible for the first time. **Consumer: task #6 (M3).**

Charge stays an *outcome* of the initial condition. Do not turn the line inventory into a
fitted input.

### RESULT — the 110 g comparison is now possible, and it closes plausibly

`python scratch/charge_inventory.py` evaluates propane density at the **model's own**
converged state for each segment (`p_txv_inlet_pa`/`T_liquid_k`, `p_suction_pa`/`T_suction_k`,
`p_discharge_pa`/`T_discharge_k`), so it needs no rebuild and no gate cycle:

| segment | volume | density | charge | phase at the model's state |
|---|---|---|---|---|
| suction line | 33.7 mL | 3.8 kg/m³ | 0.13 g | vapour, +23.5 K superheated |
| discharge / hot-gas loop | 43.1 mL | 26.2 kg/m³ | 1.13 g | vapour, +52.9 K superheated |
| liquid line | 9.7 mL | 472.4 kg/m³ | 4.58 g | liquid, 8.8 K subcooled |
| filter drier 023Z8250 | 34.0 mL | 472.4 kg/m³ | **16.06 g** | liquid, 8.8 K subcooled |
| **coils** (`M_charge_kg`) | — | — | **43.44 g** | |
| **lines + drier** | | | **21.90 g** | |
| **total accounted** | | | **65.33 g** | vs a **110 g** system charge |

**44.7 g (40.6 %) remains unaccounted**, and the sign is the one that has to hold: everything
still missing — compressor shell volume, the oil, refrigerant dissolved in the oil, and an
accumulator if fitted — can only make the total *larger*. A total **above** 110 g would have
been the alarming outcome, because nothing omitted could bring it back down. The docx
estimates the shell at 0.4–0.7 L geometric, and R290 is markedly soluble in compressor oil,
so 45 g in the shell and oil is an ordinary figure rather than a strained one.

The single largest surprise is that the **filter drier alone holds 16 g — 15 % of the system
charge** — because it is 34 mL running liquid-full. That is more than a third of what both
coils hold combined.

`HANDOFF.md` §6 records the `M_charge_kg` vs 110 g comparison as **NOT COMPARABLE**. That
entry is now superseded: the comparison is possible, it was made, and it closes. What it
does *not* do is validate the charge distribution — it validates that the inventory is not
absurd. Do **not** tune the condenser `hstart` profile to drive the total toward 110 g.

---

## 2. Evaporator — the drawing CONFIRMS the model; no change

Drawing-derived, per the docx working:

- 40 straight passes × 20.57 in, 0.375 in OD, 0.016 in wall → ID 0.343 in → 1.246 L
- 38 return bends, 0.375 in OD, 0.022 in wall, 0.500 in centreline → 0.042 L
- **total 1.288 L**, stated practical range **1.29 – 1.35 L** (excludes distributor, outlet
  manifold and connection tubes)

`ClosedLoopM1eCS.mo:246` already uses **V = 0.001326 m³**, which is 2.9 % above the bare
tube-and-return figure and **inside the drawing's own practical range**. The comment at
line 240 records the same correction being made earlier (`0.001051 → 0.001326`, after an
incorrect 0.030 in wall assumption).

**No parameter change.** The docx's claim that "the previous 1.05 L model value appears
about 18 % lower" is aimed at a number the repo already superseded. The drawing is added as
an independent second source for `V_evap`. **Consumer: task #9.**

---

## 3. Suction line — geometry now known, and it contradicts the fitted UA

`SuctionLine.mo:49` carries `UA_suction_w_k = 2.5`, sourced in `HANDOFF.md` §4 as "105 W
over a 44 K mean driving dT" — **fitted to the observed gain, never derived**.

The geometry now permits the derivation:

> external area = π × 0.319 in × 40 in = 40.1 in² = **0.0259 m²**
> UA 2.5 W/K over that area ⇒ an overall coefficient of **97 W/m²K**

97 W/m²K is not reachable for a bare 5/16 in tube in ~35 C room air. Natural convection
alone gives roughly 5–15 W/m²K (UA ≈ 0.13–0.39 W/K); even brisk fan-forced flow over a tube
this small does not close a 6–20× gap.

**This is a finding, not a tuning problem.** The 105 W of suction-gas superheating cannot
all be entering through 40 in of bare tube. The obvious alternative path is the compressor
itself — the drawing (§4) specifies **compressor cooling: FAN**, and a hermetic shell dumps
motor and shell heat into the suction gas before compression. Note the model currently
reproduces the compressor inlet to **0.65 K** with UA = 2.5, so the lumped parameter is
doing real work under a wrong label.

Do **not** lower `UA_suction_w_k` toward the bare-tube value until the alternative mechanism
is actually modelled — a worse match is not an improvement. The deliverable is provenance:
relabel what that 2.5 represents. **Consumer: task #8.**

---

## 4. Electrical topology — from the wiring diagram

Controller: **Carel iJFPSA 3241903**, with an RS-485 BMS link, digital inputs DI1/DI2, and
relay outputs NO1–NO4. Sensors into the controller: **Coil Out**, **Discharge Air**,
**Discharge Comp**. A **pressure switch** is wired in series with the compressor contactor.

| item | count | note |
|---|---|---|
| condenser fan | **1** | |
| evaporator fan | **2** | check against the 0.15 m³/s (318 CFM) total evaporator airflow |
| compressor | 1 | **fed directly from the 115 V line through a controller relay** |
| solenoid valve | 2 | hot-gas defrost, and liquid line |
| pan heater | 1 | electric, resistive, **40 W** (user, 2026-08-06). Not modelled — see below |

### The finding that matters: there is no inverter and no VFD

The compressor is line-fed. Shaft speed is therefore **line-locked** near 3450 rpm nominal
(2-pole, 60 Hz, minus slip) and cannot vary with load.

This does **not** close `HANDOFF.md` §9's rpm question — the data still pins only the product
`N · eps_v = 35.6 rev/s`, and deriving "shaft speed" from the data remains circular. What it
does do is remove variable speed as an explanation for any capacity discrepancy, which is
what made the compressor-displacement conflict in §5 decidable.

### The pan heater is 40 W, DEFROST-ONLY, and correctly absent from a steady-state model

**User, 2026-08-06:** the 40 W heater sits **below the evaporator** and **only turns on
during defrost**, energised together with the hot-gas solenoid that clears coil icing.

That settles it immediately: the model runs the **steady state**, and in the steady state the
heater is **off**. It is not a load to include, size, or argue about. It *would* matter to a
defrost or cycling model, where it lands **inside** the box — note that for later.

The reasoning below it was written before that answer arrived, and is **kept only as a
correction**. It reached the right conclusion by the wrong route.

`HANDOFF.md` §7 item 3 records the condensate-pan **hot-gas coil** as measured-negligible
(26.3 W). The **electric pan heater** is a separate, *larger* device, so it could not inherit
that verdict. The user supplied **40 W** on 2026-08-06; the wattage alone does not decide it,
because 40 W is 5.6 % of the model's 712 W `Q_evap`.

What decides it is where the pan sits thermally. From steady windows:

| | NSF 05-27 | DOE 05-28 |
|---|---|---|
| `Drain Pan Surface Temp` | **103.0 F** | **104.2 F** |
| `Hot Gas Defrost Solenoid Outlet` | 109.4 F | 110.3 F |
| `Cassette Enclosure Top` | 87.9 F | 89.5 F |
| room `Ambient Dry Bulb Ta` | 79.8 F | 79.6 F |
| box air, `Air Into Evap Left` | −0.4 F | +0.9 F |

This was read as "the pan is in the warm machine compartment, so the heater rejects
outward". **That inference was wrong.** `Drain Pan Surface Temp` is on the
**condensate-evaporation pan warmed by the hot-gas coil** — a *different* pan from the one
under the evaporator that carries the 40 W element. The 103 F reading is the hot-gas coil,
which is exactly why it tracks the solenoid outlet.

**The lesson worth keeping:** a channel name that plausibly matches the device you are asking
about is not evidence that it measures that device. There are two pans on this machine and
one probe. The heater's own state was never in the data at all — it is off during every
steady window by definition, because it only runs in defrost.

One thing from the old argument does still stand, as a bound rather than a reason: 40 W is
**14 % of the width** of the 610–891 W measured `Q_evap` band, so even a defrost-averaged
smear of it would sit inside the instruments' own disagreement.

**Decision: not modelled**, because it is off in the steady state. Carry it if a defrost or
cycling model is ever built.

---

## 5. Condenser volume — UNRESOLVED, recorded as a range

| source | value |
|---|---|
| `ClosedLoopM1eCS.mo:171` | **183 cm³** (73 cm³ of ports at 37 % port-area fraction + ~110 cm³ of header, per the comment at line 166) |
| docx estimate from the same drawing | 260 – 360 cm³, centre 300 cm³ (headers 140–160 cm³ + flat tubes 120–200 cm³) |

Hussmann P/N **3113227**, vendor **Sanhua X001-HU01-1**, aluminium microchannel, design
pressure 13.5 MPa / 4.5 MPa. Core width 12.87 in, core height 11.52 in, connections
**0.252 in ID** (Details A and B).

### The docx's 300 cm³ estimate rests on two misread dimensions — discard it

Read off the drawing directly:

- The **(Ø.83) 2X** the docx took for "header OD ≈ 0.83 in" is in the **top view, which is the
  mounting-bracket detail** — labelled BOTH SIDES, dimensioned 2.89 / 6.30, with **(Ø.83) 2X**
  and **(Ø.14) 2X**. Those are **bracket hole diameters**, not the header. The entire
  0.14–0.16 L header figure descends from that number.
- The **8.88 in** the docx took for "header height" is, in the side view, the **vertical
  centre-to-centre spacing of the two connection stubs** (A at top, B at bottom) — with
  **(3.23)** the stub projection from the coil face and **(.59)** the bottom stub's offset
  from the slab edge. The headers themselves run the full **11.52 in** core height and carry
  no diameter callout anywhere on the sheet.

So the docx estimate uses a bracket hole for the diameter and a connection spacing for the
length. It is not an independent measurement of the header and must not be averaged with the
model's value.

The model's 183 cm³ is by contrast self-consistent: 110 cm³ of header over two headers of
11.52 in implies a header ID of ~0.61 in, which is an ordinary microchannel manifold size.

**Model value stands at 183 cm³ pending the item below.** `ClosedLoopM1eCS.mo:178` already
records that a previous volume change flooded the condenser (48.5 g in 183 cm³ = 265 kg/m³
mean, ~55 % liquid), so charge distribution and subcooling both move with this — it is not a
number to adjust on an estimate. **Consumer: task #7.**

### CLOSED 2026-08-06 — the uncropped drawing is not obtainable

The lower-left specification block of the condenser drawing is **cut off at the left edge of
the image** pasted into the docx. The surviving fragments read:

```
 - ALUMINUM
 …ESSURE- 13.5MPA
 …ESSURE-  4.5MPA
 …T- 0.319
```

The last line's label is lost. Had it been an internal-volume callout, 0.319 L would have
settled this outright. The user confirmed on 2026-08-06 that the full sheet is **not
obtainable** and instructed that the best available value be used.

**So: 183 cm³ stands, as a stated uncertainty rather than a confirmed figure.** Do not guess
at the `…T- 0.319` label, and do not revive the 0.30 L estimate — it was arrived at by
misreading a bracket hole and a stub spacing, so it is not evidence regardless of how close
its number may look to that fragment.

If `V` does change, do **not** retune the condenser `hstart` profile to preserve the −1.1 %
subcooling match — that would hide the effect.

---

## 6. Compressor — conflict recorded, PARKED by the user

The drawing in the package is a Hussmann-approved **Tecumseh TCX413U-DSIB**: R290,
115–127 V 1PH 60 Hz, LBP/MBP, −35 to −5 C, high start torque, **1/3 HP**, compressor cooling
FAN, **displacement 6.93 CC**, Hussmann P/N 3247898.

The model uses `V_s_cm3 = 20.0`, sourced to an **ALX440U-DS3B01** nameplate. These are
different compressors.

**User decision 2026-08-06: keep the ALX, ignore the drawing for now** ("maybe I got the
wrong compressor"). `V_s_cm3` stays 20.0.

The evidence is recorded here so it is not re-derived. At `p_evap` = 2.099e5 Pa with 22.88 K
compressor-inlet superheat, ρ_suction = 4.292 kg/m³, so at `eps_v` = 0.7116:

| displacement | 3500 rpm | 2900 rpm |
|---|---|---|
| 20.0 cc | 3.56 g/s | 2.95 g/s |
| 10.5 cc | 1.87 g/s | 1.55 g/s |
| 6.93 cc | 1.24 g/s | 1.02 g/s |

The measured band is **2.11 – 3.08 g/s**, air-side anchored and closing on both existing
datasets (`docs/TRAP_RESOLUTION.md`). 6.93 cc would require 6000–8800 rpm, which §4 rules
out. 20.0 cc straddles the band.

Reopen only on a nameplate photo reading TCX413U — in which case it is the **measured
capacity band**, not the displacement, that has to be re-derived, and that puts the whole
calibration in question.
