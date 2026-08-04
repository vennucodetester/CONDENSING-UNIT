import unittest
from pathlib import Path

from twin.engine_fmu import FmuEngine, FmuUnavailable


ROOT = Path(__file__).resolve().parents[1]
LEGACY_CS_FMU = ROOT / "modelica" / "RefrigerationTrainerSmoke.fmu"


class FmuSmokeTest(unittest.TestCase):
    def test_adapter_rejects_the_legacy_co_simulation_fmu(self):
        """The adapter now requires Model Exchange, and must say so clearly.

        `RefrigerationTrainerSmoke.fmu` is the M0 artifact, exported as Co-Simulation
        before M1d established that OpenModelica's CS export fails on the real
        evaporator model. The adapter moved to Model Exchange, so this legacy FMU is no
        longer loadable — that is correct behaviour, not a regression.

        What this test guards is that the rejection is an explicit, readable diagnostic
        rather than a silent failure or a confusing crash deeper inside FMPy. Silent
        failure is exactly what M1d's criterion 4 exists to prevent.
        """
        if not LEGACY_CS_FMU.exists():
            self.skipTest("legacy M0 Co-Simulation FMU not present")

        with self.assertRaises(FmuUnavailable) as ctx:
            FmuEngine(
                LEGACY_CS_FMU,
                nominal_evap_airflow_m3_s=0.45,
                nominal_condenser_airflow_m3_s=0.55,
            )
        self.assertIn("Model Exchange", str(ctx.exception))

    def test_adapter_reports_a_missing_fmu_clearly(self):
        with self.assertRaises(FmuUnavailable) as ctx:
            FmuEngine(
                ROOT / "fmu" / "does_not_exist.fmu",
                nominal_evap_airflow_m3_s=0.45,
                nominal_condenser_airflow_m3_s=0.55,
            )
        self.assertIn("not found", str(ctx.exception))


if __name__ == "__main__":
    unittest.main()
