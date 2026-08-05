"""Thermodynamic calculator for readings taken off the machine.

WHY THIS IS SEPARATE FROM THE MODEL
-----------------------------------
Nothing here simulates anything and nothing here is calibrated. Every number is
either an R290 property lookup or a subtraction. Give it a gauge pressure and a
thermometer reading and it returns what a technician would get from a P/T chart
and a pocket calculator -- only without the interpolation error.

That independence is the point. The Modelica model PREDICTS these quantities
from equipment geometry; this module MEASURES them from field readings. Keeping
them apart is what makes the comparison meaningful: if the two are wired
together, agreement proves nothing. See the calibration discussion in HANDOFF.md
-- feeding a measured output back into the model as an input has already cost
this project two false results.

All inputs are field units (psig, degF) because that is what the gauges read.
"""

from __future__ import annotations

from dataclasses import dataclass

REFRIGERANT = "R290"

PSI_PER_PA = 1.0 / 6894.757293168361
ATMOSPHERIC_PSI = 14.696


def psig_to_pa(psig: float) -> float:
    return (psig + ATMOSPHERIC_PSI) / PSI_PER_PA


def f_to_k(f: float) -> float:
    return (f + 459.67) * 5.0 / 9.0


def k_to_f(k: float) -> float:
    return k * 9.0 / 5.0 - 459.67


def delta_k_to_delta_f(k: float) -> float:
    return k * 9.0 / 5.0


@dataclass(frozen=True)
class Derived:
    """One computed quantity, with the reason it is or is not trustworthy."""

    label: str
    value: float | None
    unit: str
    note: str = ""

    def formatted(self) -> str:
        if self.value is None:
            return f"{self.label}: —  {self.note}".rstrip()
        text = f"{self.label}: {self.value:.2f} {self.unit}"
        return f"{text}  ({self.note})" if self.note else text


def _sat_temp_k(pressure_psig: float, quality: float) -> float:
    from CoolProp.CoolProp import PropsSI

    return PropsSI("T", "P", psig_to_pa(pressure_psig), "Q", quality, REFRIGERANT)


def saturation_temp_f(pressure_psig: float, *, quality: float = 1.0) -> float:
    """Saturation temperature for a gauge pressure. The P/T chart, exactly."""
    return k_to_f(_sat_temp_k(pressure_psig, quality))


def superheat_f(suction_psig: float, line_temp_f: float) -> tuple[float, str]:
    """Superheat at a point, from the pressure there and the line temperature.

    A NEGATIVE result is not an error and must not be clamped silently: it means
    the thermometer is reading colder than saturation, so the line is carrying
    liquid, or one of the two instruments is wrong. Both are worth seeing.
    """
    sat_f = saturation_temp_f(suction_psig, quality=1.0)
    value = line_temp_f - sat_f
    if value < -0.5:
        return value, "NEGATIVE — line is below saturation: wet suction, or an instrument is off"
    if value < 1.0:
        return value, "essentially saturated — coil is flooded to the outlet"
    return value, ""


def subcooling_f(liquid_psig: float, liquid_temp_f: float) -> tuple[float, str]:
    """Subcooling, from liquid-line pressure and liquid-line temperature."""
    sat_f = saturation_temp_f(liquid_psig, quality=0.0)
    value = sat_f - liquid_temp_f
    if value < -0.5:
        return value, "NEGATIVE — liquid line is above saturation: vapour present, or an instrument is off"
    if value < 1.0:
        return value, "essentially none — no solid column of liquid at the valve"
    return value, ""


def isentropic_discharge_f(
    suction_psig: float, suction_temp_f: float, discharge_psig: float
) -> float:
    """Discharge temperature for a PERFECT (isentropic) compressor.

    This is a hard physical floor. A real compressor is irreversible, so measured
    discharge must be HOTTER than this. A reading below it means the sensor is
    wrong -- which is exactly the case for the strap-on thermocouple on this unit
    (docs/MEASURED_REFERENCE.md).
    """
    from CoolProp.CoolProp import PropsSI

    p_suc = psig_to_pa(suction_psig)
    p_dis = psig_to_pa(discharge_psig)
    entropy = PropsSI("S", "P", p_suc, "T", f_to_k(suction_temp_f), REFRIGERANT)
    return k_to_f(PropsSI("T", "P", p_dis, "S", entropy, REFRIGERANT))


def evaluate(readings: dict[str, float | None]) -> list[Derived]:
    """Everything computable from whatever subset of readings was entered.

    Missing inputs are reported as missing rather than defaulted -- a quiet
    default here would be indistinguishable from a measurement.
    """
    r = {k: v for k, v in readings.items() if v is not None}
    out: list[Derived] = []

    p_suc = r.get("suction_psig")
    p_dis = r.get("discharge_psig")
    t_coil_out = r.get("coil_outlet_f")
    t_suction = r.get("compressor_inlet_f")
    t_discharge = r.get("discharge_temp_f")
    t_liquid = r.get("liquid_line_f")

    if p_suc is not None:
        out.append(Derived("Evaporating temperature", saturation_temp_f(p_suc), "°F"))
    else:
        out.append(Derived("Evaporating temperature", None, "°F", "needs suction pressure"))

    if p_dis is not None:
        out.append(Derived("Condensing temperature", saturation_temp_f(p_dis, quality=0.0), "°F"))
    else:
        out.append(Derived("Condensing temperature", None, "°F", "needs discharge pressure"))

    if p_suc is not None and t_coil_out is not None:
        value, note = superheat_f(p_suc, t_coil_out)
        out.append(Derived("Coil superheat", value, "°F", note))
    else:
        out.append(Derived("Coil superheat", None, "°F", "needs suction pressure + coil outlet temp"))

    if p_suc is not None and t_suction is not None:
        value, note = superheat_f(p_suc, t_suction)
        out.append(Derived("Superheat at compressor", value, "°F", note))
        if t_coil_out is not None:
            gain = t_suction - t_coil_out
            out.append(
                Derived(
                    "Suction line heat gain", gain, "°F",
                    "picked up between coil outlet and compressor" if gain > 0.5 else "",
                )
            )

    if p_dis is not None and t_liquid is not None:
        value, note = subcooling_f(p_dis, t_liquid)
        out.append(Derived("Subcooling", value, "°F", note))
    else:
        out.append(Derived("Subcooling", None, "°F", "needs discharge pressure + liquid line temp"))

    if p_suc is not None and p_dis is not None:
        ratio = psig_to_pa(p_dis) / psig_to_pa(p_suc)
        out.append(Derived("Pressure ratio (absolute)", ratio, ":1"))

    if p_suc is not None and p_dis is not None and t_suction is not None:
        ideal = isentropic_discharge_f(p_suc, t_suction, p_dis)
        out.append(Derived("Discharge temp if compressor were perfect", ideal, "°F",
                           "a real machine must read HOTTER than this"))
        if t_discharge is not None:
            if t_discharge < ideal:
                out.append(
                    Derived(
                        "Measured discharge temp", t_discharge, "°F",
                        f"IMPOSSIBLE — {ideal - t_discharge:.1f} °F below the isentropic "
                        "floor, so this sensor is wrong",
                    )
                )
            else:
                out.append(Derived("Discharge superheat over ideal", t_discharge - ideal, "°F"))

    return out
