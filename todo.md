# TODO — R290 refrigeration trainer

**State as of 2026-08-08.** Gate `bash ./gate.sh --repeat 3` → **3/3 runs at 7/7**.
Provenance tests **7/7**. Everything committed and pushed.

§1.2 (flooded start) and §1.3(c) and §1.7 are **done**. §1.1 is blocked on an initialisation
confound described below. §1.4–1.6 are untouched.

---

## 0. STANDING RULES — apply to every item

**Tokens are the binding constraint.** Full copy in `CLAUDE.md`; the ones that bite:

1. End every FMU / `fmpy` command with `2>/dev/null`, pipe through `tail`/`grep`.
2. Never let `./gate.sh` print in full — `--repeat 3`, grep `"built ok|repeat:|FAILED"`.
3. Prefer `sed -i` or a `python -` heredoc for `.mo` edits. `Edit`/`Write` echo whole files.
4. Do not re-read a file already read. Do not re-verify a green gate.
5. Print **derived** numbers, not raw data.
6. **Sweep `Evaluate=false` parameters through `start_values` — no rebuild, no gate.**
   Biggest lever in the project.
7. **Batch `.mo` edits into ONE rebuild.** Each build+gate is ~12 min.
8. Run gates with `run_in_background` and wait on the output file; foreground times out at 600 s.

**Non-negotiables.** Never edit a test to pass. Never fit a soft parameter to close a gap
without first ruling out a structural bound. State predictions before running and score them.
A change that fails the gate is **reverted, not patched**.

**Delegation.** `data-grunt` (haiku) and `script-grunt` (sonnet) are live. Do not delegate
until the acceptance check is mechanical and **written down first**. Never delegate anything
that decides what a number *means*.

---

## 1. READY TO GO — no blockers, highest value first

### 1.1 Calibrate the two-capacitance box  ← **start here**
No rebuild. **Targets corrected 2026-08-08 — the old four were mutually inconsistent.**

Re-extracted, defrost excluded:

| | duty | mean cycle | ON mean (med, p10–p90) | **OFF mean** |
|---|---|---|---|---|
| NSF | 74.1 % | 23.6 min | 17.5 (16, 14–20) | **5.6 (6, 5–6)** |
| DOE | 84.7 % | 39.3 min | 33.3 (16, 14–24) | **5.8 (6, 5–6)** |

**Use the OFF period as the primary target.** It is the only tight number — p10–p90 of 5–6 min
on both campaigns. ON is badly skewed (DOE mean 33.3 vs median 16) and duty differs between
campaigns, so both are context, not fit targets.

**The OFF period is set by the COIL, not the box** — measured, not assumed. Sweeping `C_air`
2.0e5 → 4.5e5 moved the period 18.8 → 44 min but the OFF period only 1.51 → 2.04 min. The
thermostat senses `T_air_off_evap_k`, the coil-outlet air, which rebounds at a rate set by the
evaporator's own mass. **So raise evaporator thermal mass, not `C_air`.** Model OFF is ~1.5 min
against 5.6 — a factor 3.7, needing roughly 16 kg equivalent against the current 4.3 kg.

**UNBLOCKED 2026-08-08.** `T_prod_start_k` is now its own `Evaluate=false` parameter — the old
`start = T_box_k` was bound at compile time and could not be set (verified). Starting the product
inside the thermostat band instead of below it fixed the confound:

| `UA_prod` | `C_air` | duty % | period min | OFF min |
|---|---|---|---|---|
| 2000 | 1.8e3 | 93.1 | 13.81 | 0.64 |
| 2000 | 5.0e4 | **80.0** | 11.13 | 0.76 |

**Duty now lands inside the measured 74–85 % band** — it read 6–13 % at every setting before.
That number is trustworthy now; the two time constants are not. Period 11.1 vs 23.6/39.3
measured, OFF 0.76 vs 5.6.

**HARD TARGET, from a settled properly-initialised run (2026-08-08).** At the as-built 4.3 kg
coil mass the settled cycle gives duty 96.9–97.4 % and **OFF 0.50–0.58 min against a measured
5.6–5.8**. So:

| | value |
|---|---|
| coil storage now | 2 580 J/K (4.3 kg × 600) |
| storage the OFF period demands | **26 738 J/K — 10.4×** |
| extra required | **24 158 J/K** |

**More metal is not the route.** 16 kg of wall mass already fails to integrate (CVode −8), and
that was only 3.7×; this asks for 10×. The storage has to arrive as a **phase-change term**:

- aluminium fin → 26.8 kg extra — implausible on this coil
- ice, *sensible* only → 11.5 kg of frost — large, and the coil stays below 0 °C so this is all
  that's available from frost as currently understood
- ice, *if any melts* → **0.24 kg** — two orders of magnitude less

That last line is the one to chase. It says the gap closes trivially **if even a little phase
change occurs at the coil surface** during the off cycle. The bulk coil staying below 0 °C does
not settle what happens in the surface film, and boiling of migrated refrigerant in the coil is
a phase-change term that is only partly represented. **This is the next real question**, and it
is a physics question, not a fitting one.

Coil-mass sweep, for the record — it does *not* reach the target either:

| `M_evap_wall_kg` | duty % | period min | OFF min |
|---|---|---|---|
| 4.3 (geometry) | 12.7 | 18.80 | 1.51 |
| 16.0 | — | — | **fails to integrate, CVode −8** |
| 40.0 | 6.5 | 121.79 | unmeasurable |

Order: (1) **give `T_prod` a realistic start value** — run `box_equilibrium.py` first and start
there; (2) re-check the OFF period at the geometry value 4.3 kg, which may look very different
once the product is not fighting the thermostat; (3) only then ask whether more coil mass is
needed — 16 kg does not integrate, so it would have to arrive another way, and frost *sensible*
heat is the open candidate; (4) target the OFF period only.

**Nothing was changed from defaults.** `M_evap_wall_kg` stays at the geometry value 4.3,
`C_air` at 1.8e3, `UA_prod` tightly coupled. No fitted value has been adopted and the gate is
green.

**Process note:** one sweep at a time, or unique output files. Concurrent background runs
writing the same results file produced garbage once already.

### 1.2 ~~Flooded-start branch in `CompressorEM`~~ — **DONE 2026-08-08**
The hardware question is answered: the suction can is **horizontal**, so it is a muffler or
strainer, **not an accumulator** (accumulators must be vertical — gravity separation, standpipe,
oil bleed). Nothing in the real machine catches that liquid, so the real compressor survives
flooded starts the model cannot represent. **The gap is in `CompressorEM`, not a missing vessel.**

Measured transient, 0.25 s resolution:
```
h_su   629 → 199 kJ/kg      rho_su  4.6 → 22 kg/m3    (liquid at the inlet)
mdot   spikes to 10.5 g/s, 3.6x normal
p_su   251 → 200 kPa in four seconds
assert at t = 281.79
```
A real compressor ingesting liquid does not pass it as vapour at 3.6× flow — it slugs, the
liquid flashes in the cylinder, and it rides through on degraded volumetric efficiency.
Minimum honest fix: stop the displacement relation demanding vapour-like flow when the inlet
is two-phase — limit `M_dot` by inlet vapour fraction rather than by `rho_su` alone.

**DONE.** Pumping density capped at saturated vapour (`rho_pump = min(rho_su, dewDensity)`),
which is conservative — it is an equation for `M_dot`, so less mass is pumped and the loop
responds. Plus the discharge guard `h_valid_max` raised 400 K → 500 K: that limit is a
*sanity bound*, not a physics constraint, and PR 10.3 recovery is a transiently real state.
`h_valid_min` untouched. **Result: a 6000 s cycling run now completes** — 12 switches, duty
91.8 %, period 16.7 min, up from 0.8. Gate 3/3 at 7/7.

### 1.3 Dual-circuit stages (b) and (c)
Stage (a) is done and exact: Q_evap 674.3 W vs 674.3 single-circuit (−0.0 %), split 50.0/50.0.

- **(b)** Move the split off 50/50. The physical handle is **unequal distributor bores**
  (`dist1`/`dist2`). They must be made `Evaluate=false` first or they cannot be swept —
  verified: sweeping the bore currently changes nothing at all.
  **Target:** reproduce the measured inlet split — NSF 2.66 K, DOE 2.38 K, 2.002 2.39 K.
- **(c)** Restore the per-circuit UI readouts. `app.py` currently labels them
  *"not per-circuit"* — that labelling is **now wrong** and must be reverted.

### 1.4 ~~Regenerate the HANDOFF §1 comparison table~~ — **DONE 2026-08-08**
The calibrated point moved four times, all correct physics that was missing:
`Unom_v` −0.7 %, suction dP −4.6 %, liquid dP −0.1 %, dual-circuit −0.0 %.
Regenerated. **4/10 inside the band, unchanged in count** — the moves were missing physics,
not a regression. Q_evap 674.3 W (IN), mdot 2.74 g/s (IN), Q_cond −1213.8 W (IN), COP 1.52 (IN).
Condenser air-off slipped just outside at −0.4 %; evaporator air-off worsened +13.0 → +17.6 %.
The three open errors are the same three as before, and §5 still names the lead.

### 1.5 Discharge-line pressure drop — **ATTEMPTED, BREAKS THE MODEL**
A third `SuctionLine` between `comp.OutFlow` and `cond.InFlow` took the gate to **0/3**.
Reverted. Attribution is clean: it was batched with `T_prod_start_k`, the pair failed, and
`T_prod_start_k` alone then gated 3/3 — so the discharge line is unambiguously the cause.
Likely the stiffest node in the model cannot take a component carrying its own mass and energy
state, and/or `h_start` 6.5e5 is wrong for the actual discharge. **Lowest value of the three
lines — do not burn many cycles.** Full options in the task record.

### 1.6 Flash gas upstream of the TXV
A restricted drier now produces realistic Δp (75 % blocked → 33 psi) but **capacity barely
moves** (674.3 → 673.9 W) because the TXV opens and absorbs it — correct until the valve
saturates. To make a restricted drier a *visible* fault, either drive it hard enough to
saturate the valve (`txv_saturated` is already an output) or model flash gas, which is the
actual field mechanism. This is what unlocks fault injection; `twin/faults.py` is 7 lines
and contains no faults.

### 1.7 Extend the provenance test to component modifiers
`Unom_l` / `Unom_tp` / `Unom_v` live inside the coil instantiation, not as top-level
parameters, so the provenance test cannot see them and **did not catch** the
`Unom_v` 200 → 80 change. Three calibrated coefficients are currently unguarded.

---

## 2. NEEDS YOU — cannot proceed without input

| # | Item | What is needed |
|---|---|---|
| 2.1 | **Door-opening magnitude** | The schedule is built and verified (pulses 0→1758 W, average exact). `Q_door_peak_btu_hr` defaults to **0** — no magnitude invented, because the campaigns contain no door events. Needs the DOE class figure or an infiltration calc. |
| 2.2 | **Suction can — confirm** | Stated horizontal, 3–4 in; dimensions varied across three messages. If it turns out **vertical with a standpipe**, §1.2 reverts to building a real accumulator vessel. Orientation is the diagnostic, not size. |
| 2.3 | **Maldistribution cause** | For §1.3(b): is the 2.4–2.7 K split a distributor issue or a circuit-length/routing difference? Decides whether unequal bores are the right knob or the circuits need different geometry. |
| 2.4 | **Compressor rpm** | Standing caveat, not a request — the data pins only `N · eps_v = 35.6 rev/s`, and deriving shaft speed from it is circular. Closed in HANDOFF §9; listed only so it is not forgotten. |

---

## 3. DO NOT RETRY — tested and refuted, with the evidence

Kept so none of these is re-derived. Each cost a build cycle or more.

| Claim | Verdict |
|---|---|
| Frost supplies the off-cycle energy | **LATENT: REFUTED** — coil never crosses 0 °C. **SENSIBLE: REOPENED 2026-08-08** — the 9–20 kg figure came from a 428 kJ requirement that was itself wrong. Against the real coil-mass gap (~13000 J/K) sensible ice needs ~6 kg. Still large, but no longer dismissible |
| The off-cycle gap is a coil storage problem | **DISSOLVED** — there was no gap. Air split read as coil duty; product is pinned while air relaxes |
| Thermostat reads the wrong sensor | **REFUTED** — coil-outlet vs discharge-air offset is **+0.5 °F** |
| Off-cycle airflow collapses | **REFUTED** — `Case Watts` is **+6.4 W higher** with the compressor off; fans keep running |
| Accumulator as an enthalpy clamp on the suction line | **BROKE THE GATE 0/3**, reverted. Not conservative inside a component carrying mass/energy balances |
| Suction-side mass damps the flooded restart | **REFUTED** — 50 g and 200 g failed *identically* to baseline. Not inertia |
| `Unom_v` too high explains the small superheat penalty | **REFUTED** — 200 → 80 left it at −3.2 % vs −3.1 %. Kept on physics grounds only |
| N=5 too coarse to resolve the dry zone | **REFUTED** — N=10 made the penalty *smaller* |
| A restricted drier can be modelled as extra equivalent length | **WRONG** — a blockage reduces **area**; dP ~ 1/D⁵ |
| Two parallel `Flow1Dim` branches can connect directly | **STRUCTURALLY SINGULAR** — 1631 eqs vs 1624 vars. Distributor tubes are the missing component |
| Splitting a coil needs only geometry halved | **WRONG** — `Mdotnom` is per-component and must be halved too. Cost 9.1 % of capacity |

---

## 4. COMMANDS

```bash
bash ./gate.sh --repeat 3                  # the ONLY supported way to produce a gate result
python scratch/compare_to_measured.py      # model vs measured
python scratch/box_equilibrium.py 945.1    # box equilibrium in ~32 s, no ODE
python scratch/solve_charge.py 43.44       # hstart scale for a target charge
python scratch/probe_app_control_authority.py   # standing check: is any control inert?
python scratch/steady_windows_new.py       # steady on-cycle windows, all 3 campaigns
```

**Never run `pytest` directly after editing a `.mo`** — a staleness guard hard-fails, because
a stale FMU produced five false "6/6 PASSED" reports in this project.
