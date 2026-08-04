import math
import unittest
from pathlib import Path

from fmpy import simulate_fmu


class R290PropertyFmuTest(unittest.TestCase):
    def test_representative_declared_range_points_execute(self):
        fmu = Path(__file__).resolve().parents[1] / "modelica" / "R290PropertySmoke.fmu"
        for pressure_pa, temperature_k in (
            (50_000.0, 263.15),
            (500_000.0, 293.15),
            (1_500_000.0, 310.15),
            (3_000_000.0, 343.15),
        ):
            result = simulate_fmu(
                str(fmu),
                start_values={"p_pa": pressure_pa, "T_k": temperature_k},
                output=["h_j_kg", "rho_kg_m3"],
                stop_time=1.0,
            )
            self.assertTrue(math.isfinite(float(result[-1]["h_j_kg"])))
            self.assertGreater(float(result[-1]["rho_kg_m3"]), 0.0)


if __name__ == "__main__":
    unittest.main()
