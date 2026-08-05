"""The field calculator must stay independent of the model and of calibration.

These cases are anchored on the measured reference (docs/MEASURED_REFERENCE.md).
They are NOT a check that the Modelica model is right -- nothing here runs it.
They check that a gauge reading and a thermometer reading turn into the same
superheat a technician would get from a P/T chart.
"""

from __future__ import annotations

import pytest

from twin.field_calc import (
    evaluate,
    isentropic_discharge_f,
    saturation_temp_f,
    subcooling_f,
    superheat_f,
)

# Median steady-state readings from fileshare/data 2.002.csv.
LAB_RAW_SUCTION_PSIG = 19.56
LAB_CORRECTED_SUCTION_PSIG = 15.7
LAB_LIQUID_PSIG = 206.92
LAB_COIL_OUTLET_F = -9.22
LAB_DISCHARGE_TEMP_F = 155.3


def test_saturation_matches_corrected_evaporator_temperature():
    """15.7 psig is the coil-sensor-derived suction; it must give -24.17 C."""
    assert saturation_temp_f(LAB_CORRECTED_SUCTION_PSIG) == pytest.approx(-11.5, abs=0.3)


def test_transducer_reading_produces_impossible_superheat():
    """The suction transducer reads ~4 psi high, and this is how you can tell.

    Against the raw transducer value the TXV bulb location comes out BELOW
    saturation, which cannot happen in a coil that is boiling. The calculator
    must surface that rather than clamping it to zero.
    """
    value, note = superheat_f(LAB_RAW_SUCTION_PSIG, LAB_COIL_OUTLET_F)
    assert value < 0.0
    assert "NEGATIVE" in note


def test_corrected_suction_reproduces_measured_coil_superheat():
    """With the corrected pressure the coil superheat is the measured 1.27 K."""
    value, _ = superheat_f(LAB_CORRECTED_SUCTION_PSIG, LAB_COIL_OUTLET_F)
    assert value == pytest.approx(2.29, abs=0.4)  # 1.27 K


def test_subcooling_matches_measured():
    """8.98 K = 16.2 F, from liquid pressure and temperature into the TXV."""
    value, _ = subcooling_f(LAB_LIQUID_PSIG, 96.5)
    assert value == pytest.approx(16.2, abs=0.5)


def test_measured_discharge_temperature_is_below_the_isentropic_floor():
    """Real compression is irreversible, so discharge cannot be colder than ideal.

    The strap-on thermocouple on this unit reads below it, which is why compressor
    efficiency must never be calibrated against it.
    """
    ideal = isentropic_discharge_f(LAB_CORRECTED_SUCTION_PSIG, 29.7, LAB_LIQUID_PSIG)
    assert LAB_DISCHARGE_TEMP_F < ideal


def test_missing_inputs_are_reported_not_defaulted():
    """A blank field must read as unknown, never as a silently assumed value."""
    results = {d.label: d for d in evaluate({"suction_psig": LAB_CORRECTED_SUCTION_PSIG})}
    assert results["Evaporating temperature"].value is not None
    assert results["Subcooling"].value is None
    assert "needs" in results["Subcooling"].note


def test_nothing_entered_yields_no_invented_numbers():
    assert all(d.value is None for d in evaluate({}))
