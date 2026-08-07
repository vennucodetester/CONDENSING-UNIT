"""Is coil superheat actually CONTROLLED, or is it pinned by something structural?

THE QUESTION (user, 2026-08-06)
-------------------------------
"Why is adding double the charge not changing the superheat? Superheat is the main number
that is checked and it can't remain constant when changing other variables, can it?"

There are two possible answers and they look identical from outside:

  A. CORRECT PHYSICS. A TXV is a superheat controller. Its whole job is to hold superheat
     while everything else moves -- charge, load, ambient. `HANDOFF.md` section 4 already
     records the related result that a faithful TXV has almost no authority over mass flow
     (+0.8 %): the compressor sets mass flow, the valve only adjusts stroke to pass it while
     holding superheat. Insensitivity of superheat to charge is what a working TXV DOES.

  B. A STRUCTURAL BOUND. `HANDOFF.md` section 5: "Persistent insensitivity to a parameter
     that physics says should matter is itself the diagnostic. It means the quantity is
     limited by STRUCTURE, not magnitude." That diagnostic has already found three separate
     defects in this project -- the co-current coil, the unbounded per-cell law, and the
     superheated zone masking the air side. The TXV deadlock that pinned coil superheat at
     8.19 K was exactly this: a lever that looked connected and was not.

So "superheat didn't move" is not by itself evidence of either. THE TEST THAT SEPARATES THEM
is whether superheat moves when its OWN SETPOINT moves.

  * If settled superheat tracks `superheat_target_k`, the control loop is live and answer A
    holds -- insensitivity to charge is the valve doing its job.
  * If settled superheat sits at ~1.93 K regardless of setpoint, the loop is open and answer
    B holds -- and that is a defect, not physics.

`txv_opening_frac` is swept alongside it. With `txv_setpoint_lever = true` the screw moves
the SETPOINT, so turning it must move superheat too. Two independent handles on the same
quantity; if neither moves it, the quantity is bound.

`subcooling_k` and `M_charge_kg` are reported on every run, because if superheat is being
held correctly then the charge has to be going SOMEWHERE -- and the condenser is where a TXV
system parks it. Subcooling moving while superheat holds is the signature of answer A.

Everything swept here is annotated `Evaluate=false`, so this costs no rebuild and no gate
cycle -- `HANDOFF.md` section 0.

Run:  python scratch/probe_superheat_authority.py
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

CASES = [
    ("baseline",                   {}),
    ("superheat_target_k = 4.0",   dict(superheat_target_k=4.0)),
    ("superheat_target_k = 8.0",   dict(superheat_target_k=8.0)),
    ("txv screw 0.50 -> 0.90",     dict(txv_opening_frac=0.90)),
    ("txv screw 0.50 -> 0.10",     dict(txv_opening_frac=0.10)),
]


def main() -> None:
    from compare_to_measured import run  # noqa: E402

    print(f"{'case':28}{'SH_coil':>9}{'SH_comp':>9}{'subcool':>9}"
          f"{'mdot g/s':>10}{'M_coils g':>11}{'T_evap C':>10}{'Q_evap W':>10}")
    base = None
    for label, ov in CASES:
        n = run(**ov)
        row = (n["superheat_k"], n["superheat_comp_k"], n["subcooling_k"],
               n["m_dot_kg_s"] * 1000, n["M_charge_kg"] * 1000,
               n["T_evap_sat_k"] - 273.15, n["Q_evap_w"])
        base = base or row
        print(f"{label:28}{row[0]:9.2f}{row[1]:9.2f}{row[2]:9.2f}"
              f"{row[3]:10.3f}{row[4]:11.2f}{row[5]:10.2f}{row[6]:10.1f}")

    print("\nHOW TO READ THIS")
    print("  superheat tracks its setpoint  -> loop is LIVE; charge insensitivity is a")
    print("                                    working TXV, not a defect")
    print("  superheat pinned near 1.93 K   -> loop is OPEN; that is a structural bound and")
    print("                                    a real defect, per HANDOFF section 5")
    print("  subcooling moves while SH holds-> charge is parking in the condenser, which is")
    print("                                    where a TXV system puts it")


if __name__ == "__main__":
    main()
