"""Score the model against the 2026-05-27 (NSF) and 2026-05-28 (DOE) campaigns.

READ THIS BEFORE QUOTING THE OUTPUT
-----------------------------------
These two runs are a **repeat** of the 2.002 operating point, not an independent one.
Steady-window medians put all three within 0.4 K on evaporating temperature, 1.2 K on
condensing and 0.3 F on room ambient. Agreement here is therefore evidence that the
MEASUREMENT repeats, not that the physics extrapolates. `data 2.003.csv`, 7 K hotter,
remains the project's only extrapolation point.

The targets below are steady-window medians from `scratch/steady_windows_new.py`. They are
BANDS wherever a duplicated probe pair exists, for the reason `HANDOFF.md` section 3 gives:
every such pair on this machine disagrees materially, and collapsing one to a point target
previously made a 46 % instrument disagreement look like model error.

T_evap is taken from the evaporator COIL-INLET probes, never from the suction transducer --
trap 1, reconfirmed on these very datasets at +3.4 to +3.8 K.

PREDICTIONS, RECORDED BEFORE THE RUN (HANDOFF section 8 item 6)
---------------------------------------------------------------
  1. T_cond overshoots NSF by 2.5-3.0 K. The model reads 46.65 C against 2.002's 44.73 C
     (+1.9 K); NSF condenses 0.9 K cooler still, so the gap should widen slightly.
  2. T_evap stays about 3.3 K low against the coil-derived -24.34 C. Nothing was changed
     that would move it; section 5 of HANDOFF says the binding constraint is refrigerant-side
     and untouched.
  3. Condenser air-off lands within ~2 F of the 108.7-109.5 F pair, i.e. at or just outside
     the top of the band.
  4. Coil superheat stays near 1.9 K against a measured 1.27 K -- unchanged, since the TXV
     setpoint and gain were not touched.
  5. Mass flow, Q_evap, Q_cond and COP move by less than 5 % from the 2.002 comparison,
     because the operating point barely moved.

Run:  python scratch/compare_to_new_runs.py
"""
from __future__ import annotations

import sys
from pathlib import Path

from CoolProp.CoolProp import PropsSI as P

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

F2C = lambda f: (f - 32.0) * 5.0 / 9.0
F2K = lambda f: F2C(f) + 273.15
K2F = lambda k: (k - 273.15) * 9.0 / 5.0 + 32.0
PSIA = lambda psig: (psig + 14.696) * 6894.757

# Steady-window medians -- scratch/steady_windows_new.py, 2026-08-06.
CAMPAIGNS = {
    "NSF 2026-05-27": dict(
        n=275, p_suc=20.106, p_liq=202.315,
        cond_in=(88.101, 93.814), cond_out=(109.529, 108.730),
        evap_in=(-0.430, -2.399), evap_out=(-8.936, -8.816),
        coil_in=(-7.023, -11.813), unit_w=675.0, room_f=79.777),
    "DOE 2026-05-28": dict(
        n=676, p_suc=20.088, p_liq=204.814,
        cond_in=(89.482, 94.583), cond_out=(110.387, 109.547),
        evap_in=(0.897, -1.116), evap_out=(-7.790, -7.438),
        coil_in=(-6.729, -11.014), unit_w=682.3, room_f=79.562),
}


def targets(c: dict) -> dict:
    """Bands from the probe pairs; T_cond from the transducer, T_evap from the coil."""
    return {
        "T_cond_c": (P("T", "P", PSIA(c["p_liq"]), "Q", 1, "propane") - 273.15,) * 2,
        # Coil-inlet probes bracket the true saturation temperature. The transducer is
        # excluded on purpose: trap 1.
        "T_evap_c": tuple(sorted(F2C(t) for t in c["coil_in"])),
        "air_out_cond_f": tuple(sorted(c["cond_out"])),
        "air_out_evap_f": tuple(sorted(c["evap_out"])),
    }


def score(model: dict, c: dict, label: str) -> int:
    tgt = targets(c)
    print(f"\n{label}   (n={c['n']} steady samples, room {c['room_f']:.1f} F, "
          f"cond inlet {c['cond_in'][0]:.1f}/{c['cond_in'][1]:.1f} F)")
    print(f"  {'quantity':18}{'model':>10}{'measured':>22}{'error':>11}")
    inside = banded = 0
    for k, (lo, hi) in tgt.items():
        g = model[k]
        # T_cond comes from a single transducer, so its "band" is a point. Counting a
        # point target in an inside/outside tally is how a 0.1 K miss gets reported as a
        # failure -- flag it as unbanded instead of scoring it.
        degenerate = hi - lo < 1e-9
        if not degenerate:
            banded += 1
        mark = "  (point target)" if degenerate else ""
        if lo <= g <= hi:
            inside += not degenerate
            print(f"  {k:18}{g:10.2f}{f'{lo:9.2f} ..{hi:9.2f}':>22}{'':>11}   IN{mark}")
        else:
            near = lo if g < lo else hi
            print(f"  {k:18}{g:10.2f}{f'{lo:9.2f} ..{hi:9.2f}':>22}"
                  f"{(g - near):+10.2f} {mark}")
    print(f"  {inside}/{banded} inside the measured band "
          f"({len(tgt) - banded} point target(s) not scored)")
    return inside


if __name__ == "__main__":
    from compare_to_measured import run  # noqa: E402

    for label, c in CAMPAIGNS.items():
        # Only the condenser inlet air is retuned, to the campaign's own Right probe --
        # the probe the model's T_amb_k is already sourced to. Nothing else is touched.
        n = run(T_amb_k=F2K(c["cond_in"][1]))
        model = dict(
            T_cond_c=n["T_cond_sat_k"] - 273.15,
            T_evap_c=n["T_evap_sat_k"] - 273.15,
            air_out_cond_f=K2F(n["T_air_off_cond_k"]),
            air_out_evap_f=K2F(n["T_air_off_evap_k"]),
        )
        score(model, c, label)
        print(f"    superheat {n['superheat_k']:.2f} K (measured coil 1.27 K)   "
              f"mdot {n['m_dot_kg_s']*1000:.2f} g/s   Q_evap {n['Q_evap_w']:.0f} W   "
              f"COP {n['cop']:.2f}   W_comp {n['W_comp_w']:.0f} W "
              f"(measured Unit Watts {c['unit_w']:.0f}, incl. fans)")
