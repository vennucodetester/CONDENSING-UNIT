"""Refrigerant charge inventory: coils PLUS lines and drier.

WHY THIS EXISTS
---------------
`M_charge_kg` in the model is `evap.M_tot + cond.M_tot` -- coils only. That is why
`HANDOFF.md` section 6 records the comparison of `M_charge_kg` against the 110 g system
charge as **NOT COMPARABLE** rather than as a discrepancy. The lines, drier, shell and oil
were simply absent from the tally, so the two numbers were never measuring the same thing.

The as-built line geometry arrived 2026-08-06 (`docs/AS_BUILT_GEOMETRY.md` section 1), which
closes the two data blockers `HANDOFF.md` section 9 named. This script adds the line and
drier inventory so the comparison becomes possible.

METHOD, AND WHY IT NEEDS NO REBUILD
-----------------------------------
The model already exposes the thermodynamic state at every point a line sits between:

    liquid line + drier   p_txv_inlet_pa, T_liquid_k
    suction line          p_suction_pa,   T_suction_k
    discharge / hot gas   p_discharge_pa, T_discharge_k

So the line charge is a post-hoc CoolProp evaluation of the FMU's own outputs. No Modelica
component, no rebuild, no gate cycle. That matters: adding three lumped volumes to the model
would cost a build and a 3x gate to learn something a density lookup already tells us.

WHAT THIS IS AND IS NOT
-----------------------
This is an ACCOUNTING of where charge sits given the model's converged state. It is NOT a
new input, and it must not become one. `HANDOFF.md` is explicit that charge is an *outcome*
of the initial condition -- the condenser `hstart` profile is the only charge control, and
`ClosedLoopM1eCS.mo:178` records what happened last time a volume change flooded the coil.
If the total lands far from 110 g, that is a result to report, not a gap to close by tuning.

STILL MISSING from the tally, and named so the total is never mistaken for complete:
compressor shell volume and its oil (the docx estimates 0.4-0.7 L geometric, most of it
occupied by motor, spring and oil, with the operating refrigerant inventory much lower),
the accumulator if fitted, and refrigerant dissolved in the oil.

Run:  python scratch/charge_inventory.py
"""
from __future__ import annotations

import math
import sys
from pathlib import Path

from CoolProp.CoolProp import PropsSI as P

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

IN3_TO_M3 = 1.6387064e-5
SYSTEM_CHARGE_G = 110.0

# As-built geometry -- docs/AS_BUILT_GEOMETRY.md section 1.
# Lengths in inches, IDs in inches. The suction line's ID/OD were transposed in the source
# document; the user confirmed ID 0.256 / OD 0.319 on 2026-08-06.
LINES = [
    # label,               length_in, id_in, (pressure output, temperature output)
    ("suction line",            40.0, 0.256, ("p_suction_pa",   "T_suction_k")),
    ("discharge / hot-gas loop", 89.0, 0.194, ("p_discharge_pa", "T_discharge_k")),
    ("liquid line",             20.0, 0.194, ("p_txv_inlet_pa", "T_liquid_k")),
]

# Danfoss 023Z8250 (DML, 1.5 cu in). NET internal volume, not the ~50 mL shell volume.
# It sits in the liquid line, so it takes the liquid-line state.
DRIER_ML = 34.0
DRIER_STATE = ("p_txv_inlet_pa", "T_liquid_k")


def tube_volume_m3(length_in: float, id_in: float) -> float:
    return length_in * math.pi / 4.0 * id_in ** 2 * IN3_TO_M3


def density(n: dict, p_key: str, t_key: str) -> tuple[float, str]:
    """Density of propane at the model's state, with the phase it came out as.

    Reported with the phase because a liquid-line segment that turns out to be two-phase
    in the model is a finding about the model, not a rounding error in the inventory --
    the same volume swings by a factor of ~50 between vapour and liquid.
    """
    p, t = n[p_key], n[t_key]
    rho = P("D", "P", p, "T", t, "propane")
    t_sat = P("T", "P", p, "Q", 0, "propane")
    if rho > 300.0:
        phase = f"liquid, {t_sat - t:+.1f} K subcooled"
    elif rho < 60.0:
        phase = f"vapour, {t - t_sat:+.1f} K superheated"
    else:
        phase = "DENSE/NEAR-CRITICAL - check"
    return rho, phase


def inventory(n: dict) -> dict:
    rows, total_line_g = [], 0.0
    for label, L, ID, (pk, tk) in LINES:
        v = tube_volume_m3(L, ID)
        rho, phase = density(n, pk, tk)
        g = rho * v * 1000.0
        total_line_g += g
        rows.append((label, v * 1e6, rho, g, phase))

    v_drier = DRIER_ML * 1e-6
    rho_d, phase_d = density(n, *DRIER_STATE)
    g_drier = rho_d * v_drier * 1000.0
    total_line_g += g_drier
    rows.append(("filter drier 023Z8250", DRIER_ML, rho_d, g_drier, phase_d))

    coils_g = n["M_charge_kg"] * 1000.0
    return dict(rows=rows, coils_g=coils_g, lines_g=total_line_g,
                total_g=coils_g + total_line_g)


def report(inv: dict) -> None:
    print("CHARGE INVENTORY  (coils from the model, lines from as-built geometry)\n")
    print(f"  {'segment':26}{'volume':>10}{'density':>11}{'charge':>10}   phase")
    print(f"  {'':26}{'mL':>10}{'kg/m3':>11}{'g':>10}")
    for label, ml, rho, g, phase in inv["rows"]:
        print(f"  {label:26}{ml:10.1f}{rho:11.1f}{g:10.2f}   {phase}")
    print(f"\n  {'coils (evap + cond)':26}{'':10}{'':11}{inv['coils_g']:10.2f}"
          f"   <- model M_charge_kg")
    print(f"  {'lines + drier':26}{'':10}{'':11}{inv['lines_g']:10.2f}")
    print(f"  {'TOTAL ACCOUNTED':26}{'':10}{'':11}{inv['total_g']:10.2f}")
    print(f"\n  system charge {SYSTEM_CHARGE_G:.0f} g -> "
          f"{inv['total_g'] - SYSTEM_CHARGE_G:+.1f} g "
          f"({(inv['total_g'] / SYSTEM_CHARGE_G - 1) * 100:+.1f} %) unaccounted-for balance")
    print("\n  NOT in this tally: compressor shell volume and oil, accumulator if fitted,")
    print("  and refrigerant dissolved in the oil. A total BELOW 110 g is therefore the")
    print("  expected sign -- the shell is the largest missing volume. A total ABOVE 110 g")
    print("  would be the informative outcome, since nothing missing can make it smaller.")
    print("\n  This is accounting, not a target. Do not tune hstart to hit 110 g.")


if __name__ == "__main__":
    from compare_to_measured import run  # noqa: E402
    report(inventory(run()))
