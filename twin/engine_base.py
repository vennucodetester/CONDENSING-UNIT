from __future__ import annotations

from dataclasses import dataclass, field
from enum import Enum
from typing import Iterable


class SourceKind(str, Enum):
    FMU = "FMU"
    DEMO_MODEL = "DEMO_MODEL"
    ASSUMED = "ASSUMED"
    DERIVED = "DERIVED"
    MISSING = "MISSING"


@dataclass(frozen=True)
class Provenance:
    source: SourceKind
    note: str
    assumptions: tuple[str, ...] = ()


@dataclass(frozen=True)
class Quantity:
    name: str
    value: float
    unit: str
    provenance: Provenance
    baseline_value: float | None = None

    @property
    def delta(self) -> float | None:
        if self.baseline_value is None:
            return None
        return self.value - self.baseline_value


@dataclass(frozen=True)
class Capability:
    id: str
    label: str
    available: bool
    reason: str


@dataclass(frozen=True)
class EngineInput:
    airflow_frac: float = 1.0
    evaporator_capacity_frac: float = 1.0
    charge_kg: float | None = None
    compressor_speed_frac: float = 1.0
    condenser_airflow_frac: float = 1.0
    condenser_capacity_frac: float = 1.0
    txv_opening_frac: float = 0.50
    txv_size_frac: float = 1.0
    hot_gas_solenoid_open: bool = False
    liquid_line_solenoid_open: bool = True
    # Exposed 2026-08-03. These MUST equal the model's own declared defaults --
    # tests/test_calibration_provenance.py::test_app_defaults_match_the_models_own_defaults
    # enforces it. Do not edit one side alone.
    #
    # CORRECTED 2026-08-06. The original comment claimed these were the model's values.
    # That was true when written and went stale when the model was recalibrated, with
    # nothing tying the two together:
    #   superheat_target_k  7.0    -> 1.27    the MEASURED coil-outlet superheat
    #                                          (HANDOFF section 3, trap 2). A 5.5x error on
    #                                          the single most important TXV setting.
    #   t_amb_k             305.15 -> 308.04  measured `Air Into Cond Right`.
    # Until this was fixed, every number the app displayed came from an operating point
    # no validation covered, while scratch/compare_to_measured.py -- which overrides
    # neither -- reported the model as inside the measured band. The two were not looking
    # at the same model.
    v_s_cm3: float = 20.0                 # compressor swept volume, cm3/rev
    ua_evap_nom_w_k: float = 132.8        # evaporator air-side conductance, W/K
    ua_cond_nom_w_k: float = 575.0        # condenser air-side conductance, W/K
    superheat_target_k: float = 1.27      # TXV superheat setpoint, K -- MEASURED
    t_amb_k: float = 308.04               # ambient air at the condenser, K -- MEASURED
    t_box_k: float = 255.37               # return air at the evaporator, K
    # The modelled system is ONE complete, self-contained unit — its own compressor,
    # condenser and evaporator. Nothing is shared or externally imposed. See SCOPE 13.1.


@dataclass(frozen=True)
class EngineResult:
    engine_name: str
    validated: bool
    status: str
    inputs: EngineInput
    quantities: dict[str, Quantity]
    capabilities: tuple[Capability, ...]
    assumptions: tuple[str, ...]
    warnings: tuple[str, ...] = field(default_factory=tuple)

    def require_quantities(self, names: Iterable[str]) -> None:
        missing = [name for name in names if name not in self.quantities]
        if missing:
            joined = ", ".join(missing)
            raise KeyError(f"Engine result is missing required quantities: {joined}")


REQUIRED_OUTPUTS = (
    "p_suction_pa",
    "T_evap_sat_k",
    "p_discharge_pa",
    "p_evap_out_pa",
    "p_cond_in_pa",
    "p_txv_inlet_pa",
    "superheat_mixed_k",
    "subcooling_k",
    "m_dot_kg_s",
    "Q_evap_w",
    "Q_cond_w",
    "T_air_in_evap_k",
    "T_air_off_evap_k",
    "txv_opening_frac",
    "W_comp_w",
    "cop",
    "T_cond_sat_k",
    "T_suction_k",
    "T_discharge_k",
    "T_liquid_k",
    "superheat_circuit_k_1",
    "superheat_circuit_k_2",
    "m_dot_circuit_kg_s_1",
    "m_dot_circuit_kg_s_2",
    "txv_saturated",
    "T_air_off_cond_k",
    # The valve's ACTUAL modulated opening. `txv_opening_frac` is a fixed
    # parameter -- reading it back tells you only what you commanded, so it can
    # never move. This is the one that responds.
    "txv_opening_cmd",
    # Refrigerant inventory. COILS ONLY -- the model contains no liquid line,
    # filter-drier, receiver, compressor shell or oil, so the total here is
    # roughly 43 g against a ~110 g real system charge. The remainder lives in
    # volumes that are not modelled (M3). The total is also pinned by the startup
    # condition and barely moves; the evaporator/condenser SPLIT is the part that
    # responds to operation, and it is the part worth showing.
    "M_charge_kg",
    "M_charge_evap_kg",
    "M_charge_cond_kg",
)


def standard_capabilities(airflow_available: bool) -> tuple[Capability, ...]:
    return (
        Capability(
            "airflow",
            "Evaporator airflow",
            airflow_available,
            "Demo interaction available; FMU validation pending."
            if airflow_available
            else "FMU airflow model not available.",
        ),
        Capability("txv", "TXV beyond control range", False, "Deferred until M2 TXV model."),
        Capability("circuit", "Restrict one distributor circuit", False, "Deferred until M4 two-branch model."),
        Capability(
            "charge",
            "Refrigerant charge (g)",
            False,
            "Nominal charge is known (110 g R290). Still blocked on the M3 inventory model: "
            "tracking where each gram of refrigerant sits needs component volumes and a "
            "void-fraction correlation.",
        ),
        Capability("frost", "Frost evaporator coil", False, "Deferred until M6 frost model."),
        Capability(
            "defrost",
            "Hot-gas defrost simulation",
            False,
            "Field-traced path is displayed; transient physics awaits the Modelica valve network.",
        ),
    )
