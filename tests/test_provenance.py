import unittest

from twin.demo_engine import DemoAirflowEngine
from twin.engine_base import EngineInput


class ProvenanceTest(unittest.TestCase):
    def test_every_output_has_provenance_and_assumptions(self):
        result = DemoAirflowEngine().run(EngineInput(airflow_frac=0.7))
        for quantity in result.quantities.values():
            self.assertTrue(quantity.provenance.source)
            self.assertTrue(quantity.provenance.note)
            self.assertTrue(quantity.provenance.assumptions)


if __name__ == "__main__":
    unittest.main()
