"""Find the lowest txv_opening_frac the solver can actually reach.

app.py:792 offers txv_opening_frac down to 0.20. That value aborts
(CompressorEM.mo:247, discharge enthalpy out of range). The UI must not offer a
position the solver cannot reach, so this finds the real boundary and the app's
lower bound is set above it with margin.
"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scratch"))
from compare_to_measured import run

ok, bad = None, None
for f in [0.50, 0.45, 0.40, 0.35, 0.30, 0.25, 0.20]:
    try:
        n = run(txv_opening_frac=f)
        ok = f
        print(f"  frac {f:.2f}  OK   SH {n['superheat_k']:.2f} K  mdot {n['m_dot_kg_s']*1000:.2f} g/s")
    except Exception as exc:
        bad = f
        print(f"  frac {f:.2f}  FAIL {type(exc).__name__}")
print(f"\nlowest reachable {ok}, highest failing {bad}")
