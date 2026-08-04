import unittest

from twin.demo_engine import DemoAirflowEngine
from twin.engine_base import EngineInput, REQUIRED_OUTPUTS


class EngineContractTest(unittest.TestCase):
    def test_demo_engine_provides_required_outputs(self):
        result = DemoAirflowEngine().run(EngineInput(airflow_frac=0.8))
        self.assertFalse(result.validated)
        self.assertEqual(set(REQUIRED_OUTPUTS), set(result.quantities))


if __name__ == "__main__":
    unittest.main()
