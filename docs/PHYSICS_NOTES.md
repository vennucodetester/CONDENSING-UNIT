# Physics Notes

## Demo Physical-Input Engine

The current app contains a temporary demo engine to exercise the interface while the
production FMU is unavailable. It responds to evaporator airflow/size, condenser
airflow/size, compressor speed, and TXV opening/size using monotonic relationships.
Charge is deliberately disabled rather than approximated.

- lower airflow lowers evaporating saturation temperature and suction pressure
- lower airflow lowers compressor mass flow and cooling capacity
- air-off temperature moves closer to the coil temperature as airflow drops
- superheat rises mildly before TXV compensation

This is not a refrigeration cycle solver. It has no mass inventory, no compressor map,
no property package, no phase calculation, and no calibration. It is present only so
the app loop can be judged before spending time on the full Modelica implementation.

## Field-traced hot-gas path

The user traced the installed tubing. Compressor discharge tees to the high-pressure
switch and then splits between the condensate-pan hot-gas coil/main condenser path and
the hot-gas solenoid branch. The main path is condensate-pan coil → condenser →
filter-drier → liquid-line solenoid → TXV → distributor. The hot-gas branch is hot-gas
solenoid → check valve → distributor side inlet. The distributor feeds two evaporator
circuits, which return through the suction header directly to the compressor inlet.

Cooling opens the liquid-line solenoid and closes the hot-gas solenoid. Hot-gas mode
closes the liquid-line solenoid and opens the hot-gas solenoid. The check valve permits
flow toward the distributor and blocks reverse flow into the discharge branch. This
topology is field-reported; hot-gas thermodynamic behavior is still not modeled.

## R290 medium spike — 2026-08-02

The selected pure-Modelica medium is
`AixLib.Media.Refrigerants.R290.R290_IIR_P05_30_T263_343_Horner` from AixLib 2.1.1.
OpenModelica 1.26.3 checks the model, exports `R290PropertySmoke.fmu`, and FMPy runs
property evaluations without an external CoolProp DLL.

One compatibility-only source patch changes the fluid-constant record lookup; see
`modelica/AIXLIB_COMPATIBILITY.md`. No physical equations or coefficients changed.

The advertised pressure/temperature rectangle does not mean every Cartesian p/T
combination also satisfies the medium's declared enthalpy bounds. For example, 0.5 bar
and 343.15 K returns about 711.6 kJ/kg while the package declares an enthalpy maximum
of 576 kJ/kg. Even 5 bar and 275.15 K returns about 577.2 kJ/kg. M1b must therefore
validate the actual cycle trajectory and enforce p/T/h limits together.

---

## Air-side discretisation: the per-cell law must be BOUNDED (2026-08-05)

`CoilAirSide` originally used a central (mean-temperature) difference per cell:

    Q = UA_cell * (0.5*(T_air[i] + T_air[i+1]) - T_wall)

Solving for the outlet gives `T_air[i+1] = T_wall + (T_air[i]-T_wall)*(1-NTU/2)/(1+NTU/2)`.
That factor goes **negative for NTU_cell > 2**: the air overshoots past the wall
temperature and oscillates cell to cell. Measured on the built model:

| case | NTU_cell | air-side effectiveness |
|---|---|---|
| evaporator, nominal | 0.18 | 0.5901 |
| condenser, nominal | 1.15 | 0.9985 |
| condenser, UA x2 | 2.29 | per-cell factor **-0.067**, oscillatory |
| condenser, UA x100 | 114 | **1.8397** — 84 % past the wall |

Replaced with the exact solution of the cell ODE for a constant wall temperature:

    Q = C_air * (T_air[i] - T_wall) * (1 - exp(-UA_cell/C_air))

which is unconditionally bounded and monotone in UA. At the calibrated point the two
agree to 0.1 % (evaporator) and 0.2 % (condenser).

**Why this mattered beyond accuracy:** the UA-sweep diagnostic is what exposed the
co-current defect, and at high UA that diagnostic was itself producing impossible
numbers. A tool used to find structural errors must not have one. Bounds are now
asserted permanently in `tests/test_physics_invariants.py`.

See `docs/TRAP_RESOLUTION.md` for the measurement-side companion findings.

---

## The TXV, and why superheat had to be fixed before conductance (2026-08-06)

### The operator's lever was attached to the wrong place

The old law was `opening = clamp(txv_opening_frac + Kp*(SH - SH_target))` — the
operator's command was an **additive bias on the stroke**, summed with the feedback, so
closed-loop authority was `1 + Kp*dSH/dfrac`. Since `dSH/dfrac < 0`, raising the gain
cancelled the operator's own command. That deadlock is what pinned `Kp` at 0.04 and left
the coil at 8.19 K against a measured 1.27 K.

Writing the real bulb force balance does **not** escape it:

    opening ~ (P_bulb - P_evap - P_spring)/dP_band
            ~ (dPsat/dT)*(SH - SH_static)/dP_band

which is the same proportional law with the gain pinned by property data at ~0.25 /K for
propane near -24 C. **The gain was never the free variable.** On a real valve the
technician turns the **superheat adjustment screw** — the setpoint, not the stroke — which
makes authority `d(SH_set)/d(frac) = -txv_screw_span_k`, a constant independent of gain.

Gain sweep at the new parameterisation:

| `txv_gain_per_k` | 0.25 | 0.50 | 1.00 | 2.00 |
|---|---|---|---|---|
| settled superheat (K) | 2.56 | **1.93** | 1.60 | 1.44 |
| `T_evap` (C) | -27.78 | -27.69 | -27.65 | -27.60 |
| effectiveness | 0.392 | 0.397 | 0.400 | 0.401 |

0.50 was chosen: 1.0 and 2.0 fit superheat better but are 4-8x the property-derived
estimate and buy **nothing** on `T_evap` or effectiveness, so the extra fit would be
curve-fitting a parameter that demonstrably is not the constraint.

### The ordering result — superheat unlocked the air side

Under the legacy law, sweeping evaporator UA saturated at effectiveness 0.439. With the
thermostatic element on, the same sweep gives 0.397 -> 0.694 over a 15x range and moves
`T_evap` -27.69 -> -24.55 C. **A large superheated zone was masking the air side**, so UA
appeared inert when it was not. This is the third time in this project that apparent
insensitivity to a parameter turned out to be a structural mask rather than a small
sensitivity (co-current coil, unbounded discretisation, and now this).

### The cap that remains

Implied UA asymptotes near 214 W/K even at 15x air-side conductance, against ~289 W/K
implied by the measured effectiveness of 0.798. So a **series resistance** is binding.
The concrete suspect is the refrigerant side: ThermoCycle uses
`U = Unom*(M_dot/Mdotnom)^0.8`, and with `mdot_nom = 0.006` against an actual 0.0029 kg/s
every refrigerant-side coefficient runs at **56 % of nominal**. `mdot_nom` is 0.006
because 0.004 and 0.00306 will not integrate — a numerical limit standing in for a
physical one. Untested; this is where the next session should look.
