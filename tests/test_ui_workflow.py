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
        # ASYNC SINCE 2026-08-06: _recalculate starts a worker thread (issue 9 of
        # TASKS.md) instead of freezing the UI for ~8 s, so the test waits for it.
        # No assertion changed -- only the wait was added.
        self.window._recalculate()
        self.window.wait_for_solve()
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


    def test_solve_runs_off_the_ui_thread_and_delivers_its_result(self):
        """Issue 9 of TASKS.md: the ~8 s solve must not block the event loop.

        Asserts the real property -- that the work happens on a DIFFERENT thread and the
        result still lands. A test that only checked the result would pass with the old
        blocking implementation and prove nothing.
        """
        from PyQt6.QtCore import QThread

        ui_thread = QThread.currentThread()
        seen = {}
        original = self.window.engine.run

        def spy(inputs):
            seen["thread"] = QThread.currentThread()
            return original(inputs)

        self.window.engine.run = spy
        try:
            self.window._set_physical_input("airflow_frac", 0.72)
            self.assertTrue(self.window._start_solve(), "solve should have started")
            self.assertTrue(self.window.wait_for_solve(), "solve did not finish")
        finally:
            self.window.engine.run = original

        self.assertIn("thread", seen, "the engine never ran")
        self.assertIsNot(seen["thread"], ui_thread,
                         "the solve ran on the UI thread - it would freeze the window")
        self.assertEqual(self.window.current.inputs.airflow_frac, 0.72,
                         "the worker's result never reached the UI")

    def test_a_second_calculate_cannot_start_while_one_is_running(self):
        """Re-entrancy guard. Two solves racing over the same state would be a worse
        bug than the freeze the worker thread replaced."""
        self.window._set_physical_input("airflow_frac", 0.68)
        self.assertTrue(self.window._start_solve(), "first solve should start")
        self.assertFalse(self.window._start_solve(),
                         "a second solve must be refused while one is in flight")
        self.assertFalse(self.window.component_controls.calculate_button.isEnabled(),
                         "Calculate must be disabled while solving")
        self.assertTrue(self.window.wait_for_solve())
        self.assertTrue(self.window.component_controls.calculate_button.isEnabled(),
                        "Calculate must come back after the solve finishes")

if __name__ == "__main__":
    unittest.main()
