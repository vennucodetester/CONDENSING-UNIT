"""Conversions between the SI engine contract and field-facing display units."""

PA_PER_PSI = 6_894.757293168
STANDARD_ATMOSPHERE_PA = 101_325.0
BTU_PER_HOUR_PER_WATT = 3.412141633
LB_PER_HOUR_PER_KG_PER_SECOND = 7_936.641438


def bar_to_pa(value: float) -> float:
    return value * 100_000.0


def c_to_k(value: float) -> float:
    return value + 273.15


def kw_to_w(value: float) -> float:
    return value * 1_000.0


def pa_to_psig(value: float) -> float:
    """Convert absolute pressure at the engine boundary to gauge pressure for display."""
    return (value - STANDARD_ATMOSPHERE_PA) / PA_PER_PSI


def k_to_f(value: float) -> float:
    return (value - 273.15) * 9.0 / 5.0 + 32.0


def delta_k_to_delta_f(value: float) -> float:
    return value * 9.0 / 5.0


def w_to_btu_per_hour(value: float) -> float:
    return value * BTU_PER_HOUR_PER_WATT


def kg_s_to_lb_hour(value: float) -> float:
    return value * LB_PER_HOUR_PER_KG_PER_SECOND


def kg_to_g(value: float) -> float:
    return value * 1_000.0


def g_to_kg(value: float) -> float:
    return value / 1_000.0


def display_value(key: str, value: float, *, delta: bool = False) -> float:
    """Convert one canonical engine value for the UI without changing the engine."""
    if key.startswith("p_") and key.endswith("_pa"):
        return pa_to_psig(value)
    if key.startswith("T_") and key.endswith("_k"):
        return delta_k_to_delta_f(value) if delta else k_to_f(value)
    if key in {"superheat_mixed_k", "superheat_circuit_k_1", "superheat_circuit_k_2", "subcooling_k"}:
        return delta_k_to_delta_f(value)
    if key in {"Q_evap_w", "Q_cond_w"}:
        return w_to_btu_per_hour(value)
    if key.startswith("m_dot") and key.endswith("_kg_s"):
        return kg_s_to_lb_hour(value)
    if key == "txv_opening_frac":
        return value * 100.0
    return value


def display_unit(key: str, si_unit: str) -> str:
    if key.startswith("p_") and key.endswith("_pa"):
        return "psig"
    if key.startswith("T_") and key.endswith("_k"):
        return "°F"
    if key in {"superheat_mixed_k", "superheat_circuit_k_1", "superheat_circuit_k_2", "subcooling_k"}:
        return "°F ΔT"
    if key in {"Q_evap_w", "Q_cond_w"}:
        return "BTU/hr"
    if key.startswith("m_dot") and key.endswith("_kg_s"):
        return "lb/hr"
    if key == "charge_kg":
        return "g"
    if key == "txv_opening_frac":
        return "%"
    return si_unit
