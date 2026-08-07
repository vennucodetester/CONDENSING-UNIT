"""Find the hstart scale that yields a target refrigerant charge.

Charge is an OUTCOME of the initial condition, not an input: M_charge_kg is fixed at t=0
and is a conservation invariant thereafter. So "add 10 g" is not a differential you can
apply -- you solve for the initial condition that produces the charge you want.

`charge_hstart_scale` (added 2026-08-06) scales the condenser hstart profile and is
Evaluate=false, so this costs no rebuild. M_charge is monotone in it and close to linear
over the useful range, so a secant iteration converges in 2-3 runs -- the same structure as
scratch/box_equilibrium.py.

SIGN, because it is counter-intuitive: LOWER scale = lower starting enthalpy = more liquid
in the condenser = MORE charge.
    scale 0.90 -> 56.90 g    scale 1.00 -> 43.44 g    scale 1.10 -> 37.69 g

WHAT THE OUTPUTS MEAN, and this is the reason to have it: charge moves SUBCOOLING strongly
(13.87 -> 6.88 K across that range) and superheat barely at all (1.81 -> 1.96 K), because
the TXV holds superheat. That is exactly how under- and overcharge are diagnosed in the
field, and the model now reproduces it.

Run:  python scratch/solve_charge.py [target_grams]
"""
from __future__ import annotations
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scratch"))


def solve(target_g: float, tol_g: float = 0.5, max_iter: int = 6):
    from compare_to_measured import run
    a, b = 1.00, 1.08
    fa = run(charge_hstart_scale=a)["M_charge_kg"] * 1000 - target_g
    n = run(charge_hstart_scale=b); fb = n["M_charge_kg"] * 1000 - target_g
    print(f"  seed  scale {a:.4f} -> {fa + target_g:7.2f} g")
    print(f"  seed  scale {b:.4f} -> {fb + target_g:7.2f} g")
    for i in range(max_iter):
        if abs(fb) < tol_g or fb == fa:
            break
        # Clamped: an unclamped secant lands where the loop will not integrate, and a
        # failed solve costs more than an extra iteration.
        c = max(0.80, min(1.30, b - fb * (b - a) / (fb - fa)))
        a, fa, b = b, fb, c
        n = run(charge_hstart_scale=b); fb = n["M_charge_kg"] * 1000 - target_g
        print(f"  iter{i+1} scale {b:.4f} -> {fb + target_g:7.2f} g")
    return b, n


if __name__ == "__main__":
    target = float(sys.argv[1]) if len(sys.argv) > 1 else 43.44
    print(f"solving for {target:.2f} g of coil charge")
    scale, n = solve(target)
    print(f"\n  charge_hstart_scale {scale:.4f}")
    print(f"  M_charge {n['M_charge_kg']*1000:7.2f} g  (evap {n['M_evap_kg']*1000:.2f}, "
          f"cond {n['M_cond_kg']*1000:.2f})")
    print(f"  subcooling {n['subcooling_k']:6.2f} K   superheat {n['superheat_k']:5.2f} K")
    print(f"  Q_evap {n['Q_evap_w']:7.1f} W   T_cond {n['T_cond_sat_k']-273.15:6.2f} C")
