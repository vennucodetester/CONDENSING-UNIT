"""Does widening the TXV proportional band make the model responsive again?

THE HYPOTHESIS, from reading the control law (ClosedLoopM1eCS.mo:528-534)
------------------------------------------------------------------------
    SH_set = max(0.5, superheat_target_k + txv_screw_span_k * (0.5 - txv_opening_frac))
    tau*der(stroke) + stroke = clamp(txv_stroke_ref + txv_gain_per_k*(SH - SH_set), 0.05, 1.0)

With `txv_stroke_ref` = 0.50, the full stroke 0.05..1.00 is spanned by a superheat error of
`0.95/gain` either side of zero:

    gain 0.25 -> 3.80 K band      gain 0.50 -> 1.90 K band   (CURRENT)
    gain 1.00 -> 0.95 K band      gain 2.00 -> 0.47 K band

A real TXV's static plus opening superheat typically totals 4-8 K over full stroke. At 0.50
the model's valve is 2-4x stiffer than the hardware, and a high-gain proportional controller
pins its controlled variable BY CONSTRUCTION. That is a candidate mechanism for "the model
is like a tank".

WHAT THIS SCRIPT TESTS, and the trap it is designed to avoid
------------------------------------------------------------
Lowering the gain will make superheat move more. That is guaranteed by the algebra and is
NOT the interesting result -- reporting it as a success would be circular.

The question is whether it costs anything real. So each gain is run at THREE screw positions,
and what matters is the SPREAD across the screw at each gain, set against how far settled
superheat then sits from the measured 1.27 K. The provenance entry in
`tests/test_calibration_provenance.py` records that 0.50 was chosen over the property-derived
0.25 precisely to close that 1.27 K target, so this is a stated trade-off, not a free win.

`txv_gain_per_k` is `Evaluate=false`: no rebuild, no gate cycle.

DO NOT change the parameter on the strength of this script. HANDOFF section 5 and the
`txv_setpoint_lever` note at ClosedLoopM1eCS.mo:505-525 both make the point that valve
behaviour is a trainer-requirement decision as much as a physics one. This produces the
evidence for that decision; the user makes it.

Run:  python scratch/probe_txv_band.py
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

GAINS = [0.25, 0.50, 1.00]
SCREWS = [0.20, 0.50, 0.628]   # 0.628 is where SH_set hits its 0.5 K floor
MEASURED_SH = 1.27


def main() -> None:
    from compare_to_measured import run  # noqa: E402

    print(f"band = 0.95/gain either side of zero error\n")
    print(f"{'gain':>6}{'band K':>9}" + "".join(f"{'screw ' + f'{s:.3f}':>14}" for s in SCREWS)
          + f"{'SPREAD':>9}{'err@0.50':>10}")
    for g in GAINS:
        shs = []
        for s in SCREWS:
            try:
                n = run(txv_gain_per_k=g, txv_opening_frac=s)
                shs.append(n["superheat_k"])
            except Exception as exc:
                print(f"  gain {g} screw {s}: FAILED {type(exc).__name__}")
                shs.append(float("nan"))
        spread = max(shs) - min(shs)
        err = shs[1] - MEASURED_SH
        # band = full stroke (1.00 - 0.05) divided by the gain. An earlier version
        # doubled this and printed 7.60 K for gain 0.25; the correct figure is 3.80 K.
        print(f"{g:6.2f}{0.95 / g:9.2f}"
              + "".join(f"{v:14.2f}" for v in shs)
              + f"{spread:9.2f}{err:+10.2f}")

    print("\n  SPREAD   how much superheat the operator can actually command with the screw")
    print("  err@0.50 settled superheat minus the measured 1.27 K at the nominal screw")
    print("\n  A larger spread bought at the cost of a larger err is the TRADE. Decide it")
    print("  deliberately and record the evidence in tests/test_calibration_provenance.py --")
    print("  the existing entry documents the 0.25 -> 0.50 change and this would falsify it.")


if __name__ == "__main__":
    main()
