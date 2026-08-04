from __future__ import annotations

from twin.engine_base import (
    EngineInput,
    EngineResult,
    Provenance,
    Quantity,
    REQUIRED_OUTPUTS,
    SourceKind,
    standard_capabilities,
)
from twin.units import bar_to_pa, c_to_k, kw_to_w


class DemoAirflowEngine:
    """Temporary UI-response engine. Its public contract is SI, like the future FMU."""

    name = "Demo physical-input response engine"

    def run(self, engine_input: EngineInput) -> EngineResult:
        airflow = max(0.4, min(1.2, engine_input.airflow_frac))
        evaporator_capacity = max(0.7, min(1.3, engine_input.evaporator_capacity_frac))
        speed = max(0.5, min(1.2, engine_input.compressor_speed_frac))
        condenser_airflow = max(0.4, min(1.2, engine_input.condenser_airflow_frac))
        condenser_capacity = max(0.7, min(1.3, engine_input.condenser_capacity_frac))
        txv_opening = max(0.2, min(1.0, engine_input.txv_opening_frac))
        txv_size = max(0.7, min(1.3, engine_input.txv_size_frac))

        airflow_drop = 1.0 - airflow
        evaporator_capacity_delta = evaporator_capacity - 1.0
        speed_delta = speed - 1.0
        condenser_effectiveness = max(0.4, min(1.4, condenser_airflow * condenser_capacity))
        condenser_drop = 1.0 - condenser_effectiveness
        txv_delta = txv_opening * txv_size - 0.54

        assumptions = (
            "RLN5MA, one complete self-contained unit: its own compressor, condenser and evaporator.",
            "Nominal charge is 110 g R290; the charge slider still needs M3 inventory physics.",
            "Values are monotonic UI-demo responses, not calibrated cycle physics.",
        )
        prov = Provenance(SourceKind.DEMO_MODEL, "Temporary response while FMU physics is unavailable.", assumptions)
        assumed = Provenance(SourceKind.ASSUMED, "Fixed teaching default.", assumptions)

        # These readable intermediate equations are deliberately temporary. All exported
        # quantities are converted to the final SI FMU contract below.
        suction_bar = 4.85 - 1.25 * airflow_drop + 0.90 * evaporator_capacity_delta - 1.10 * speed_delta + 2.0 * txv_delta
        evap_c = -2.0 - 7.5 * airflow_drop + 4.0 * evaporator_capacity_delta - 4.5 * speed_delta + 8.0 * txv_delta
        discharge_bar = 15.2 - 0.55 * airflow_drop + 3.2 * speed_delta + 5.5 * condenser_drop
        liquid_bar = 14.6 - 0.45 * airflow_drop + 2.8 * speed_delta + 5.0 * condenser_drop
        superheat_k = max(1.0, 6.5 + 5.0 * airflow_drop - 17.0 * txv_delta)
        subcooling_k = max(0.0, 8.0 + 0.6 * airflow_drop + 1.5 * condenser_drop)
        mass_flow = max(0.004, 0.031 * airflow**0.40 * evaporator_capacity**0.35 * speed * (1.0 + 1.6 * txv_delta))
        capacity_kw = max(0.5, 5.6 * airflow**0.55 * evaporator_capacity**0.90 * speed**0.85 * (1.0 + 0.75 * txv_delta - 0.10 * condenser_drop))
        air_in_c = 24.0
        air_off_c = air_in_c - capacity_kw / max(0.35, airflow) * 2.4
        cond_c = 42.0 + 2.7 * (discharge_bar - 15.2)
        circuit_1_sh = max(1.0, 6.3 + 4.5 * airflow_drop - 16.0 * txv_delta)
        circuit_2_sh = max(1.0, 6.8 + 5.5 * airflow_drop - 18.0 * txv_delta)

        values = {
            "p_suction_pa": bar_to_pa(suction_bar),
            "T_evap_sat_k": c_to_k(evap_c),
            "p_discharge_pa": bar_to_pa(discharge_bar),
            "p_evap_out_pa": bar_to_pa(suction_bar),
            "p_cond_in_pa": bar_to_pa(discharge_bar),
            "p_txv_inlet_pa": bar_to_pa(liquid_bar),
            "superheat_mixed_k": superheat_k,
            "subcooling_k": subcooling_k,
            "m_dot_kg_s": mass_flow,
            "Q_evap_w": kw_to_w(capacity_kw),
            "T_air_in_evap_k": c_to_k(air_in_c),
            "T_air_off_evap_k": c_to_k(air_off_c),
            "txv_opening_frac": txv_opening,
            "W_comp_w": kw_to_w(1.32 * speed**1.55 * (1.0 + 0.16 * condenser_drop)),
            "T_cond_sat_k": c_to_k(cond_c),
            "T_suction_k": c_to_k(evap_c + superheat_k),
            "T_discharge_k": c_to_k(78.0 + 16.0 * speed_delta + 1.8 * (discharge_bar - 15.2)),
            "T_liquid_k": c_to_k(cond_c - subcooling_k),
            "superheat_circuit_k_1": circuit_1_sh,
            "superheat_circuit_k_2": circuit_2_sh,
            "m_dot_circuit_kg_s_1": mass_flow * 0.51,
            "m_dot_circuit_kg_s_2": mass_flow * 0.49,
            "txv_saturated": float(txv_opening >= 0.999),
            "T_air_off_cond_k": c_to_k(35.0 + (capacity_kw + 1.32) / 4.0),
        }
        values["Q_cond_w"] = values["Q_evap_w"] + values["W_comp_w"]
        values["cop"] = values["Q_evap_w"] / values["W_comp_w"]
        labels = {
            "p_suction_pa": ("Suction pressure", "Pa"),
            "T_evap_sat_k": ("Evaporating saturation temperature", "K"),
            "p_discharge_pa": ("Discharge pressure", "Pa"),
            "p_evap_out_pa": ("Evaporator outlet pressure", "Pa"),
            "p_cond_in_pa": ("Condenser inlet pressure", "Pa"),
            "p_txv_inlet_pa": ("TXV inlet pressure", "Pa"),
            "superheat_mixed_k": ("Mixed superheat", "K"),
            "subcooling_k": ("Subcooling", "K"),
            "m_dot_kg_s": ("Mass flow", "kg/s"),
            "Q_evap_w": ("Cooling capacity", "W"),
            "Q_cond_w": ("Condenser heat rejection", "W"),
            "T_air_in_evap_k": ("Air entering evaporator", "K"),
            "T_air_off_evap_k": ("Air leaving evaporator", "K"),
            "txv_opening_frac": ("TXV opening", "frac"),
            "W_comp_w": ("Compressor electrical power", "W"),
            "cop": ("Coefficient of performance", "1"),
            "T_cond_sat_k": ("Condensing saturation temperature", "K"),
            "T_suction_k": ("Suction line temperature", "K"),
            "T_discharge_k": ("Discharge line temperature", "K"),
            "T_liquid_k": ("Liquid line temperature", "K"),
            "superheat_circuit_k_1": ("Circuit 1 superheat", "K"),
            "superheat_circuit_k_2": ("Circuit 2 superheat", "K"),
            "m_dot_circuit_kg_s_1": ("Circuit 1 mass flow", "kg/s"),
            "m_dot_circuit_kg_s_2": ("Circuit 2 mass flow", "kg/s"),
            "txv_saturated": ("TXV at limit", "bool"),
            "T_air_off_cond_k": ("Air leaving condenser", "K"),
        }
        quantities = {
            key: Quantity(labels[key][0], value, labels[key][1], assumed if key == "T_air_in_evap_k" else prov)
            for key, value in values.items()
        }
        result = EngineResult(
            engine_name=self.name,
            validated=False,
            status="FMU missing: running labelled physical-input demo responses.",
            inputs=engine_input,
            quantities=quantities,
            capabilities=standard_capabilities(airflow_available=True),
            assumptions=assumptions,
            warnings=("Do not use demo values for equipment decisions.",),
        )
        result.require_quantities(REQUIRED_OUTPUTS)
        return result
