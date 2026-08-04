from __future__ import annotations

from twin.engine_base import EngineResult
from twin.units import display_unit, display_value


def _fmt_delta(result: EngineResult, key: str, precision: int = 2) -> str:
    q = result.quantities[key]
    if q.delta is None:
        return "no baseline locked"
    value = display_value(key, q.delta, delta=True)
    sign = "+" if value > 0 else ""
    return f"{sign}{value:.{precision}f} {display_unit(key, q.unit)}"


def airflow_narration(result: EngineResult) -> str:
    suction = _fmt_delta(result, "p_suction_pa")
    evap = _fmt_delta(result, "T_evap_sat_k")
    capacity = _fmt_delta(result, "Q_evap_w", precision=0)
    mass = _fmt_delta(result, "m_dot_kg_s")
    inputs = result.inputs
    changes = []
    for label, value, nominal in (
        ("evaporator airflow", inputs.airflow_frac, 1.0),
        ("evaporator size", inputs.evaporator_capacity_frac, 1.0),
        ("compressor speed", inputs.compressor_speed_frac, 1.0),
        ("condenser airflow", inputs.condenser_airflow_frac, 1.0),
        ("condenser size", inputs.condenser_capacity_frac, 1.0),
        ("TXV opening", inputs.txv_opening_frac, 0.54),
        ("TXV size", inputs.txv_size_frac, 1.0),
    ):
        if abs(value - nominal) >= 0.005:
            changes.append(f"{label} {value * 100:.0f}%")
    change_text = ", ".join(changes) if changes else "all physical inputs at their nominal settings"

    return (
        f"Physical inputs: {change_text}.\n\n"
        f"Illustrative response versus nominal: evaporating temperature {evap}; suction pressure "
        f"{suction}; refrigerant mass flow {mass}; cooling capacity {capacity}.\n\n"
        "Pressures and capacity are calculated outputs; they are never adjusted directly. "
        "These demo relationships exist only to validate the interaction design and are not "
        "validated equipment predictions."
    )
