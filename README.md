# Refrigeration Trainer

Production-intent vertical slice for learning refrigeration behavior.

This approval prototype uses the refrigeration process diagram as the primary interface.
Clicking equipment exposes only physical inputs: evaporator airflow,
compressor speed, evaporator/condenser coil size, condenser airflow, and TXV opening/size. Pressures, temperatures,
capacity, superheat, subcooling, mass flow, and power remain calculated outputs.

Hovering equipment shows its current pressures, saturation temperatures, line or air
temperatures, flow, and capacity. The field-traced tubing view pairs the hot-gas
solenoid with the liquid-line solenoid; its check valve is passive and not user-controlled.

## Current Status

The production R290 FMU is not present yet, so the app starts with a clearly labelled
demo physical-input response engine. The demo engine exists only to validate the user experience and UI
contract. It is not calibrated and must not be used to set charge, pressure, operating
limits, or service decisions.

The Modelica/FMU boundary uses SI units only. The app displays temperature in °F,
pressure in psig, capacity in BTU/hr, refrigerant flow in lb/hr, and charge in grams.
Charge remains disabled until the actual nameplate charge is supplied and the M3
inventory model is validated.

## Run

```powershell
python app.py
```

or double-click `Launch Trainer.cmd`.

## Safety

R290 propane is flammable. This application is educational and diagnostic only. It does
not control equipment and must never be connected to do so. Assumed or uncalibrated
results must never be used to set charge, pressure, or operating limits on physical
equipment.
