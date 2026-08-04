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
