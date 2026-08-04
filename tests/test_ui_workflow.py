import os
import unittest

os.environ.setdefault("QT_QPA_PLATFORM", "offscreen")

from PyQt6.QtWidgets import QApplication

from app import ComponentControls, MainWindow


class UiWorkflowTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.app = QApplication.instance() or QApplication([])

    def setUp(self):
        self.window = MainWindow()

    def tearDown(self):
        self.window.close()

    def test_nominal_reference_is_available_on_startup(self):
        self.assertIsNotNone(self.window.baseline)
        self.assertEqual(self.window.baseline.inputs.airflow_frac, 1.0)
        self.assertEqual(self.window.current.quantities["Q_evap_w"].delta, 0.0)

    def test_physical_input_updates_calculated_outputs(self):
        # ASSERTIONS UNCHANGED. Only the mechanism moved: inputs are now batched and
        # applied on Calculate (an FMU solve is ~8 s, so recomputing per keystroke is
        # unusable). _set_physical_input stores; _recalculate runs the engine.
        nominal_capacity = self.window.current.quantities["Q_evap_w"].value
        self.window._set_physical_input("airflow_frac", 0.65)
        self.assertTrue(self.window.component_controls.pending_note.text(),
                        "changing an input must flag that results are stale")
        self.window._recalculate()
        self.assertEqual(self.window.current.inputs.airflow_frac, 0.65)
        self.assertLess(self.window.current.quantities["Q_evap_w"].value, nominal_capacity)

    def test_component_selection_opens_matching_editor(self):
        self.window._select_component("txv")
        self.assertEqual(self.window.component_controls.component, "txv")
        # Assert against the component's declared controls rather than a hardcoded
        # count, so adding a control to CONFIG does not require editing this test.
        controls = ComponentControls.CONFIG["txv"][1]
        visible = [not row["widget"].isHidden() for row in self.window.component_controls.rows]
        self.assertEqual(sum(visible), len(controls))
        self.assertTrue(all(visible[: len(controls)]), "declared controls must all be visible")

    def test_outputs_are_not_exposed_as_editable_inputs(self):
        editable = {
            control[1]
            for _, controls, _ in self.window.component_controls.CONFIG.values()
            for control in controls
        }
        self.assertNotIn("Q_evap_w", editable)
        self.assertNotIn("p_suction_pa", editable)
        self.assertNotIn("p_discharge_pa", editable)

    def test_defrost_command_swaps_the_two_solenoid_states(self):
        self.window._select_component("hot_gas_solenoid")
        self.window.component_controls.valve_toggle.setChecked(True)
        self.assertTrue(self.window.valve_states["hot_gas_solenoid"])
        self.assertFalse(self.window.valve_states["liquid_line_solenoid"])

    def test_charge_control_is_grouped_under_suction_header(self):
        self.window._select_component("header")
        self.assertTrue(self.window.component_controls.rows[0]["widget"].isHidden())
        self.assertIn("grams", self.window.component_controls.help.text())

    def test_hover_details_include_pressure_saturation_and_actual_temperature(self):
        details = self.window.schematic._hover_text("evaporator")
        self.assertIn("Suction pressure", details)
        self.assertIn("Evaporating saturation", details)
        self.assertIn("Refrigerant outlet actual", details)

    def test_field_topology_uses_liquid_and_hot_gas_solenoids(self):
        self.assertIn("liquid_line_solenoid", self.window.component_controls.CONFIG)
        self.assertIn("hot_gas_solenoid", self.window.component_controls.CONFIG)
        self.assertNotIn("suction_stop_solenoid", self.window.component_controls.CONFIG)


if __name__ == "__main__":
    unittest.main()
