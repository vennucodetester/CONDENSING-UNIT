"""Find the box equilibrium temperature FAST, without integrating the box ODE.

THE PROBLEM THIS SOLVES
-----------------------
`box_thermal_model = true` makes box temperature a state and the solver walks it to
equilibrium. That is correct, but the box time constant is C_box/(dQ/dT_box) ~ 52 min, so
it needs ~20000 s of simulated time -- 5.5 hours -- where the refrigerant loop alone
settles in ~340 s. Every slider move in the app would pay for the box's thermal mass even
though nobody wants to watch the pulldown.

THE OBSERVATION THAT MAKES IT CHEAP
-----------------------------------
For the EQUILIBRIUM answer, C_box is irrelevant. It sets only how fast you get there. The
equilibrium is the root of

    f(T_box) = Q_load + UA_box*(T_room - T_box) - Q_evap(T_box) = 0

and `Q_evap(T_box)` is exactly what the ORIGINAL fixed-T_box model computes in 1500 s. So
instead of one 20000 s dynamic run, take three 1500 s static ones and solve for the root.
Q_evap is close to linear in T_box (~27 W/K over the useful range), so a secant iteration
converges in 2-3 steps.

Result: ~3 x 8 s instead of ~100 s, and the answer is a genuine root rather than wherever
the integration happened to have reached.

WHEN YOU STILL NEED THE ODE: cycling. A thermostat has no steady state -- the answer IS the
transient. Use `box_thermal_model = true` there and accept the run time, but initialise
inside the thermostat band so you skip the pulldown.

Run:  python scratch/box_equilibrium.py [BTU_per_hr]
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

# These MUST match the model. tests/test_calibration_provenance.py guards the model side;
# this file is a solver, not a second source of truth for the physics.
UA_BOX_W_K = 7.40
T_ROOM_K = 299.71
BTU_HR_PER_W = 3.412142
K2F = lambda k: (k - 273.15) * 9.0 / 5.0 + 32.0


def imbalance(T_box_k: float, q_load_w: float, run) -> tuple[float, dict]:
    """load + leak - Q_evap at a FIXED box temperature. Zero at equilibrium."""
    n = run(T_box_k=T_box_k)
    leak = UA_BOX_W_K * (T_ROOM_K - T_box_k)
    return q_load_w + leak - n["Q_evap_w"], n


def solve(q_load_btu_hr: float = 945.1, tol_w: float = 2.0, max_iter: int = 6):
    from compare_to_measured import run  # noqa: E402

    q_load_w = q_load_btu_hr / BTU_HR_PER_W
    # Two brackets 6 K apart. Wide enough that the secant step is well conditioned,
    # narrow enough that both stay inside the range the model integrates happily.
    a, b = 255.37, 249.37
    fa, _ = imbalance(a, q_load_w, run)
    fb, nb = imbalance(b, q_load_w, run)
    print(f"  seed  T_box {K2F(a):7.2f} F -> imbalance {fa:+8.2f} W")
    print(f"  seed  T_box {K2F(b):7.2f} F -> imbalance {fb:+8.2f} W")

    n = nb
    for i in range(max_iter):
        if abs(fb) < tol_w:
            break
        if fb == fa:
            print("  secant stalled: identical residuals, giving up rather than dividing by zero")
            break
        c = b - fb * (b - a) / (fb - fa)
        # Clamp the step. An unclamped secant can throw T_box somewhere the refrigerant
        # loop will not integrate, and a failed solve costs more than an extra iteration.
        c = max(235.0, min(275.0, c))
        a, fa = b, fb
        b = c
        fb, n = imbalance(b, q_load_w, run)
        print(f"  iter{i+1} T_box {K2F(b):7.2f} F -> imbalance {fb:+8.2f} W")

    leak = UA_BOX_W_K * (T_ROOM_K - b)
    return dict(T_box_k=b, T_box_f=K2F(b), imbalance_w=fb, Q_evap_w=n["Q_evap_w"],
                leak_w=leak, load_w=q_load_w, superheat_k=n["superheat_k"],
                T_evap_c=n["T_evap_sat_k"] - 273.15, mdot_g_s=n["m_dot_kg_s"] * 1000,
                cop=n["cop"])


if __name__ == "__main__":
    load = float(sys.argv[1]) if len(sys.argv) > 1 else 945.1
    print(f"box equilibrium for {load:.0f} BTU/hr ({load / BTU_HR_PER_W:.1f} W) internal load")
    r = solve(load)
    print(f"\n  T_box      {r['T_box_f']:8.2f} F")
    print(f"  Q_evap     {r['Q_evap_w']:8.1f} W   = load {r['load_w']:.1f} + leak {r['leak_w']:.1f}"
          f"   (residual {r['imbalance_w']:+.2f} W)")
    print(f"  T_evap     {r['T_evap_c']:8.2f} C   superheat {r['superheat_k']:.2f} K")
    print(f"  mass flow  {r['mdot_g_s']:8.3f} g/s  COP {r['cop']:.2f}")
