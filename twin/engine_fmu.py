from __future__ import annotations

from pathlib import Path

from twin.engine_base import (
    Capability,
    EngineInput,
    EngineResult,
    Provenance,
    Quantity,
    REQUIRED_OUTPUTS,
    SourceKind,
)


class FmuUnavailable(RuntimeError):
    pass


FMU_INPUTS = {
    "evap_airflow_m3_s",
    "compressor_speed_frac",
    "condenser_airflow_m3_s",
    "V_s_cm3",
    "UA_evap_nom_w_k",
    "UA_cond_nom_w_k",
    "superheat_target_k",
    "T_amb_k",
    "T_box_k",
    "txv_opening_frac",
    "txv_size_frac",
    "hot_gas_solenoid_open",
    "liquid_line_solenoid_open",
}


class FmuEngine:
    """Validated **FMI 2.0 Model Exchange** adapter; all values crossing it are SI.

    Model Exchange, not Co-Simulation: OpenModelica's CS export fails on the
    evaporator model (silently — see docs/PHASE0_RESULT.md, M1d defect 1). FMPy
    supplies the solver for ME.
    """

    def __init__(
        self,
        fmu_path: Path,
        *,
        nominal_evap_airflow_m3_s: float,
        nominal_condenser_airflow_m3_s: float,
    ) -> None:
        self.fmu_path = fmu_path
        self.nominal_evap_airflow_m3_s = nominal_evap_airflow_m3_s
        self.nominal_condenser_airflow_m3_s = nominal_condenser_airflow_m3_s
        self._validate_interface()

    # Per-coil charge is a component variable inside the model, not a top-level
    # output, so the app's friendly key is mapped onto the real FMU name here
    # rather than renaming things in the Modelica source (which would force an
    # FMU rebuild for a display-only change). `evap`/`cond` are the two
    # Flow1Dim exchangers in ClosedLoopM1eCS.
    OUTPUT_ALIASES = {
        "M_charge_evap_kg": "evap.M_tot",
        "M_charge_cond_kg": "cond.M_tot",
    }

    @classmethod
    def _fmu_name(cls, key: str) -> str:
        return cls.OUTPUT_ALIASES.get(key, key)

    def _validate_interface(self) -> None:
        if not self.fmu_path.exists():
            raise FmuUnavailable(f"FMU not found: {self.fmu_path}")
        try:
            from fmpy import read_model_description
        except ImportError as exc:
            raise FmuUnavailable("FMPy is not installed in this Python environment.") from exc

        # validate=False is REQUIRED, not laziness: OpenModelica emits Integer
        # variables with variability="continuous", which FMI 2.0 forbids, so FMPy's
        # validator rejects an otherwise-working FMU (docs/PHASE0_RESULT.md, M1d
        # defect 2). Because that safety net is off, the explicit interface check
        # below is the ONLY guard against a mismatched FMU. Do not remove it.
        description = read_model_description(str(self.fmu_path), validate=False)
        # Model Exchange, not Co-Simulation: OMC's CS export fails on this model
        # (M1d defect 1). FMPy supplies the solver for ME.
        if description.fmiVersion != "2.0":
            raise FmuUnavailable(
                f"Expected FMI 2.0, got {description.fmiVersion}."
            )
        if description.modelExchange is None:
            raise FmuUnavailable(
                "FMU does not declare Model Exchange. This adapter supplies the solver "
                "via FMPy and requires an ME FMU (see M1d defect 1)."
            )

        # --- Name check is NOT sufficient on its own -------------------------
        # With FMPy's own validation disabled, name matching would accept an FMU
        # whose variables had the wrong causality, type or units. Check the shape
        # of each variable too, not just that the name exists.
        by_name = {v.name: v for v in description.modelVariables}

        missing_inputs = sorted(FMU_INPUTS - set(by_name))
        missing_outputs = sorted(
            {self._fmu_name(k) for k in REQUIRED_OUTPUTS} - set(by_name)
        )

        shape_problems: list[str] = []

        for name in sorted(FMU_INPUTS & set(by_name)):
            var = by_name[name]
            if var.causality not in ("input", "parameter"):
                shape_problems.append(
                    f"{name}: causality is '{var.causality}', expected input/parameter"
                )
            expected_type = "Boolean" if name.endswith("_open") else "Real"
            if var.type != expected_type:
                shape_problems.append(f"{name}: type is '{var.type}', expected {expected_type}")

        # Iterate the app's KEYS, not the FMU names: the expected type and unit are
        # properties of the key, while the variable being inspected is the aliased
        # FMU name. Checking _si_unit against the FMU name asks for the unit of
        # e.g. "cond.M_tot", which has no mapping.
        for key in sorted(k for k in REQUIRED_OUTPUTS if self._fmu_name(k) in by_name):
            name = self._fmu_name(key)
            var = by_name[name]
            if var.causality not in ("output", "local", "calculatedParameter", "input", "parameter"):
                shape_problems.append(
                    f"{name}: causality is '{var.causality}', expected output/input"
                )
            expected_type = "Boolean" if key == "txv_saturated" else "Real"
            if var.type != expected_type:
                shape_problems.append(f"{name}: type is '{var.type}', expected {expected_type}")
            if var.variability == "constant":
                shape_problems.append(f"{name}: variability is 'constant' — value cannot respond")
            declared_unit = getattr(var, "unit", None) or getattr(var, "declaredType", None)
            expected_unit = _si_unit(key)
            if (
                declared_unit
                and expected_unit not in ("1", "bool")
                and str(declared_unit) != expected_unit
            ):
                shape_problems.append(
                    f"{name}: unit is '{declared_unit}', expected '{expected_unit}' "
                    "(engine boundary is SI — see SCOPE 6.4)"
                )

        if missing_inputs or missing_outputs or shape_problems:
            parts = []
            if shape_problems:
                parts.append("interface shape: " + "; ".join(shape_problems))
            if missing_inputs:
                parts.append("missing inputs: " + ", ".join(missing_inputs))
            if missing_outputs:
                parts.append("missing outputs: " + ", ".join(missing_outputs))
            raise FmuUnavailable("FMU interface mismatch — " + "; ".join(parts))

    def run(self, engine_input: EngineInput) -> EngineResult:
        from fmpy import simulate_fmu

        start_values = {
            "evap_airflow_m3_s": self.nominal_evap_airflow_m3_s * engine_input.airflow_frac,
            "compressor_speed_frac": engine_input.compressor_speed_frac,
            "condenser_airflow_m3_s": self.nominal_condenser_airflow_m3_s * engine_input.condenser_airflow_frac,
            "evaporator_capacity_frac": engine_input.evaporator_capacity_frac,
            "condenser_capacity_frac": engine_input.condenser_capacity_frac,
            "txv_opening_frac": engine_input.txv_opening_frac,
            "txv_size_frac": engine_input.txv_size_frac,
            "hot_gas_solenoid_open": engine_input.hot_gas_solenoid_open,
            "liquid_line_solenoid_open": engine_input.liquid_line_solenoid_open,
            "V_s_cm3": engine_input.v_s_cm3,
            "UA_evap_nom_w_k": engine_input.ua_evap_nom_w_k,
            "UA_cond_nom_w_k": engine_input.ua_cond_nom_w_k,
            "superheat_target_k": engine_input.superheat_target_k,
            "T_amb_k": engine_input.t_amb_k,
            "T_box_k": engine_input.t_box_k,
        }
        try:
            samples = simulate_fmu(
                str(self.fmu_path),
                start_values=start_values,
                output=[self._fmu_name(k) for k in REQUIRED_OUTPUTS],
                # 1.0 s was mid-transient and returned nonsense (Q_evap came back
                # NEGATIVE). This loop needs ~340 s to settle at nominal and up to
                # ~1100 s on a reduced-airflow perturbation; tests/test_scenarios.py
                # uses 1500 s and measures settling explicitly. Anything shorter is
                # not an operating point.
                stop_time=1500.0,
                validate=False,  # see _validate_interface
            )
        except Exception as exc:  # FMPy exposes multiple backend exception types
            raise FmuUnavailable(f"FMU simulation failed: {exc}") from exc

        last = samples[-1]
        provenance = Provenance(SourceKind.FMU, f"Calculated by {self.fmu_path.name}.")
        quantities = {
            key: Quantity(key, float(last[self._fmu_name(key)]), _si_unit(key), provenance)
            for key in REQUIRED_OUTPUTS
        }
        result = EngineResult(
            engine_name=self.fmu_path.stem,
            validated=False,
            status="FMU connected; engineering validation is still pending.",
            inputs=engine_input,
            quantities=quantities,
            capabilities=(
                Capability("airflow", "Evaporator airflow", True, "Driven through the loaded FMU."),
                Capability("txv", "TXV", True, "Driven through the loaded FMU."),
                Capability("charge", "Refrigerant charge (g)", False, "M3 inventory model and nameplate charge required."),
                Capability("defrost", "Hot-gas mode", True, "Valve commands are wired; thermal validation depends on FMU maturity."),
            ),
            assumptions=("Nominal airflows are supplied by the selected case configuration.",),
            warnings=("FMU output is not validated equipment data yet.",),
        )
        result.require_quantities(REQUIRED_OUTPUTS)
        return result


def _si_unit(key: str) -> str:
    if key.startswith("p_"):
        return "Pa"
    if key.startswith("T_") or key.startswith("superheat_") or key == "subcooling_k":
        return "K"
    if key.startswith("m_dot"):
        return "kg/s"
    if key.startswith("Q_") or key == "W_comp_w":
        return "W"
    if key in {"cop", "txv_opening_frac", "txv_opening_cmd"}:
        return "1"
    if key == "txv_saturated":
        return "bool"
    if key.endswith("_kg"):
        return "kg"
    raise KeyError(f"No SI unit mapping for {key}")
