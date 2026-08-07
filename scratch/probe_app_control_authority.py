"""Does every control the APP exposes actually move the model? Swept to the app's own limits.

WHY THIS EXISTS
---------------
User, 2026-08-06: "the entire model feels static instead of what I usually see in the lab.
It changes with the slightest change. But here the model is like a tank. Won't change even
with extreme values."

An earlier probe swept `superheat_target_k` and concluded the TXV loop was live. That was
answering the wrong question: `superheat_target_k` is NOT one of the app's sliders. The
operator drives `compressor_speed_frac`, the two airflows, the TXV screw and size, and the
two "installed size" controls. If those do not move the outputs, the model IS a tank from
where the operator sits, regardless of what an internal setpoint does.

So this sweeps the ACTUAL app controls, each to both ends of the range `app.py` allows, and
reports the change from baseline. `twin/engine_fmu.py:161-178` is the authority on what the
app sends; `app.py:789-793` is the authority on the ranges.

ALREADY ESTABLISHED BEFORE THIS RUN -- two sliders are wired to nothing
----------------------------------------------------------------------
`evaporator_capacity_frac` and `condenser_capacity_frac` ("Installed size" on the evaporator
and condenser cards) are sent by `twin/engine_fmu.py:165-166` but **do not exist in the
FMU**. Checked against the built artifact, not the source:

    read_model_description('fmu/RefrigerationTrainer.fmu') -> both MISSING

`simulate_fmu` is called with `validate=False`, so unknown start values are dropped in
silence. Those two sliders therefore do nothing at any position. That is a defect, not
physics, and it is part of what the user is seeing. It is not swept here because there is
nothing to sweep.

Run:  python scratch/probe_app_control_authority.py
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scratch"))

# Nominals from twin/engine_fmu.py; fraction limits from app.py:789-793.
EVAP_NOM, COND_NOM = 0.15, 0.1203

CASES = [
    ("BASELINE",                       {}),
    ("compressor speed  0.50 (min)",   dict(compressor_speed_frac=0.50)),
    ("compressor speed  1.20 (max)",   dict(compressor_speed_frac=1.20)),
    ("evap airflow      0.40 (min)",   dict(evap_airflow_m3_s=EVAP_NOM * 0.40)),
    ("evap airflow      1.20 (max)",   dict(evap_airflow_m3_s=EVAP_NOM * 1.20)),
    ("cond airflow      0.40 (min)",   dict(condenser_airflow_m3_s=COND_NOM * 0.40)),
    ("cond airflow      1.20 (max)",   dict(condenser_airflow_m3_s=COND_NOM * 1.20)),
    ("TXV screw         0.20 (min)",   dict(txv_opening_frac=0.20)),
    ("TXV screw         1.00 (max)",   dict(txv_opening_frac=1.00)),
    ("TXV size          0.70 (min)",   dict(txv_size_frac=0.70)),
    ("TXV size          1.30 (max)",   dict(txv_size_frac=1.30)),
    ("T_amb  -15 K",                   dict(T_amb_k=308.04 - 15.0)),
    ("T_amb  +15 K",                   dict(T_amb_k=308.04 + 15.0)),
    ("T_box  -10 K",                   dict(T_box_k=255.37 - 10.0)),
    ("T_box  +10 K",                   dict(T_box_k=255.37 + 10.0)),
]

COLS = [("SH_coil", "superheat_k", 1.0), ("subcool", "subcooling_k", 1.0),
        ("T_evap", "T_evap_sat_k", 1.0), ("T_cond", "T_cond_sat_k", 1.0),
        ("mdot", "m_dot_kg_s", 1000.0), ("Q_evap", "Q_evap_w", 1.0),
        ("W_comp", "W_comp_w", 1.0), ("COP", "cop", 1.0)]


def main() -> None:
    from compare_to_measured import run  # noqa: E402

    print(f"{'case':32}" + "".join(f"{c[0]:>9}" for c in COLS))
    base = None
    rows = []
    for label, ov in CASES:
        try:
            n = run(**ov)
        except Exception as exc:
            print(f"{label:32}  RUN FAILED: {type(exc).__name__}")
            continue
        v = [n[k] * s - (273.15 if k.endswith('_sat_k') else 0.0) for _, k, s in COLS]
        if base is None:
            base = v
            print(f"{label:32}" + "".join(f"{x:9.2f}" for x in v))
        else:
            rows.append((label, v))
            print(f"{label:32}" + "".join(f"{x:9.2f}" for x in v))

    print("\nCHANGE FROM BASELINE (this is the number that answers the question)")
    print(f"{'case':32}" + "".join(f"{c[0]:>9}" for c in COLS))
    for label, v in rows:
        print(f"{label:32}" + "".join(f"{x - b:+9.2f}" for x, b in zip(v, base)))

    print("\nA control that produces a row of near-zeros is INERT and that is a defect,")
    print("not physics. HANDOFF section 5: persistent insensitivity to a parameter that")
    print("physics says should matter means the quantity is bound by STRUCTURE.")


if __name__ == "__main__":
    main()
