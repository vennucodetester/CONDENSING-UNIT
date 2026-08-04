import unittest

from twin.demo_engine import DemoAirflowEngine
from twin.engine_base import EngineInput


class CapabilityTest(unittest.TestCase):
    def test_unavailable_capabilities_have_reasons(self):
        result = DemoAirflowEngine().run(EngineInput(airflow_frac=1.0))
        unavailable = [cap for cap in result.capabilities if not cap.available]
        self.assertGreaterEqual(len(unavailable), 5)
        for capability in unavailable:
            self.assertTrue(capability.reason)


if __name__ == "__main__":
    unittest.main()
