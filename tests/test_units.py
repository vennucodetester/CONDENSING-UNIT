import unittest

from twin.units import display_value, g_to_kg, kg_to_g


class UnitConversionTest(unittest.TestCase):
    def test_engine_si_converts_to_field_units(self):
        self.assertAlmostEqual(display_value("p_suction_pa", 101_325.0 + 689_475.7293168), 100.0)
        self.assertAlmostEqual(display_value("T_suction_k", 273.15), 32.0)
        self.assertAlmostEqual(display_value("Q_evap_w", 1_000.0), 3_412.141633)
        self.assertAlmostEqual(display_value("superheat_mixed_k", 10.0), 18.0)

    def test_charge_is_entered_in_grams_but_stored_in_si(self):
        self.assertAlmostEqual(g_to_kg(450.0), 0.45)
        self.assertAlmostEqual(kg_to_g(0.45), 450.0)


if __name__ == "__main__":
    unittest.main()
