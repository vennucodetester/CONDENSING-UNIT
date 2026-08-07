"""Steady on-cycle windows for the 2026-05-27/28 NSF and DOE runs.

WHY THIS EXISTS
---------------
The two new workbooks were handed over as "the stable state" data. They are not. Both are
24-hour DOE/NSF *cycling* tests: `Unit Watts` swings from ~1 W to ~960 W and only ~85 % of
samples sit above 100 W, and the DOE run raises the defrost flag during part of the record.
Averaging a whole run -- or its last N samples -- mixes on-cycle, off-cycle and defrost, and
produces a target that describes no operating point at all.

There ARE steady stretches inside the on-cycles. This script finds them.

METHOD -- deliberately the SAME criteria that produced the existing reference
----------------------------------------------------------------------------
`scratch/build_steady_state_excel.py` built `fileshare/Steady_State_Operating_Data.xlsx`,
whose windows `scratch/measured_reference.steady_windows()` reads. Its criteria are
reproduced here verbatim so the new datasets are selected on the same basis as 2.002 and
2.003. Changing them would make the new operating point incomparable with the old one,
which is the entire point of running it.

    running      Unit Watts > 200  AND  (discharge - suction) > 20 F
    block        contiguous running samples, >= 15 minutes
    trim         keep the middle 60 % of each block (drops start-up and shut-down)
    steady       sd(suction) < 2.5 psi  AND  sd(liquid) < 5.0 psi

ONE addition, and it is an exclusion, not a relaxation:

    not in defrost      `Defrost case 1` == 0 for every sample in the block

`build_steady_state_excel.py` had no defrost filter because the runs it was written for
barely defrosted. The DOE run does. A defrost cycle satisfies "compressor running with a
big discharge-suction split" while the evaporator is being actively heated, so without this
the selector would happily call a defrost steady.

Thresholds are NOT tuned to yield a comfortable number of windows. If few survive, that is
the finding.

Run:  python scratch/steady_windows_new.py
"""
from __future__ import annotations

import statistics as st
import sys
from pathlib import Path

import pandas as pd

ROOT = Path(__file__).resolve().parents[1]
FILESHARE = ROOT / "fileshare"

DATASETS = {
    "NSF  2026-05-27": FILESHARE / "RLN2MA Report 6 (Type 2)-NSF.csv",
    "DOE  2026-05-28": FILESHARE / "RLN2MA Report 7 (Type 2)-DOE 1.csv",
    "2.002 (reference)": FILESHARE / "data 2.002.csv",
}

# --- selection criteria: see the module docstring. Do not tune these. ---
WATTS_MIN = 200.0
DT_COMP_MIN_F = 20.0
BLOCK_MIN_SAMPLES = 15
TRIM_LO, TRIM_HI = 0.20, 0.80
SD_SUCTION_MAX = 2.5
SD_LIQUID_MAX = 5.0

# Channels reported for each dataset. Both members of every duplicated probe pair are
# carried, because HANDOFF section 3 is emphatic that these pairs disagree materially and
# that collapsing them to one sensor is what made a 46 % instrument disagreement look like
# model error. Targets are BANDS.
REPORT = [
    ("Ambient Dry Bulb Ta", "F"),
    ("Air Into Cond Left", "F"), ("Air Into Cond Right", "F"),
    ("Ait Out of Cond Left ", "F"), ("Air Out of Cond Right ", "F"),
    ("Air Into Evap Left", "F"), ("Air Into Evap Right", "F"),
    ("Ait Out of Evap Left ", "F"), ("Air Out of Evap Right ", "F"),
    ("Suction Pressure ", "psig"), ("Liquid Pressure ", "psig"),
    ("Suction Temp into Comp ", "F"), ("Temp Into TXV", "F"),
    ("Cond Outlet Temp ", "F"), ("TXV Bulb Temp", "F"),
    ("Evap Coil intlet Temp 1", "F"), ("Evap Coil intlet Temp 2", "F"),
    ("Unit Watts ", "W"), ("Case Watts", "W"),
]


def _col(df: pd.DataFrame, want: str) -> str:
    """Resolve a channel name tolerantly, but report what it matched.

    The logger's headers carry trailing spaces and typos ("Ait Out of Cond Left ",
    "Evap Coil intlet Temp 1"). Exact matching is tried first so a rename cannot pass
    silently; the stripped fallback exists only because the two source formats differ in
    trailing whitespace.
    """
    if want in df.columns:
        return want
    stripped = {c.strip(): c for c in df.columns}
    if want.strip() in stripped:
        return stripped[want.strip()]
    raise KeyError(want)


def blocks(path: Path):
    """Return (steady_frames, diagnostics) for one dataset."""
    df = pd.read_csv(path, low_memory=False)

    watts = _col(df, "Unit Watts ")
    disch = _col(df, "Disch Temp Out of Comp ")
    suct = _col(df, "Suction Temp into Comp ")
    p_suc = _col(df, "Suction Pressure ")
    p_liq = _col(df, "Liquid Pressure ")
    defrost = _col(df, "Defrost case 1")

    for c in (watts, disch, suct, p_suc, p_liq, defrost):
        df[c] = pd.to_numeric(df[c], errors="coerce")

    running = (df[watts] > WATTS_MIN) & ((df[disch] - df[suct]) > DT_COMP_MIN_F)
    df["_run"] = running
    df["_blk"] = (running != running.shift()).cumsum()

    diag = {
        "n_samples": len(df),
        "n_running": int(running.sum()),
        "n_defrost": int((df[defrost] > 0).sum()),
        "n_blocks": 0, "n_long_enough": 0, "n_defrost_rejected": 0, "n_steady": 0,
    }

    steady = []
    for _, blk in df[df["_run"]].groupby("_blk"):
        diag["n_blocks"] += 1
        if len(blk) < BLOCK_MIN_SAMPLES:
            continue
        diag["n_long_enough"] += 1
        if (blk[defrost] > 0).any():
            diag["n_defrost_rejected"] += 1
            continue
        n = len(blk)
        mid = blk.iloc[int(n * TRIM_LO):int(n * TRIM_HI)]
        if mid[p_suc].std() < SD_SUCTION_MAX and mid[p_liq].std() < SD_LIQUID_MAX:
            diag["n_steady"] += 1
            steady.append(mid)
    return steady, diag


def report(label: str, path: Path) -> None:
    if not path.exists():
        print(f"\n=== {label}\n    MISSING: {path.name} -- run scratch/extract_xlsm.py first")
        return
    steady, diag = blocks(path)
    print(f"\n=== {label}   ({path.name})")
    print(f"    {diag['n_samples']} samples, {diag['n_running']} running, "
          f"{diag['n_defrost']} in defrost")
    print(f"    {diag['n_blocks']} run blocks -> {diag['n_long_enough']} >= "
          f"{BLOCK_MIN_SAMPLES} min -> {diag['n_defrost_rejected']} rejected for defrost "
          f"-> {diag['n_steady']} STEADY")
    if not steady:
        print("    no steady windows -- do NOT widen the criteria to manufacture some")
        return

    allrows = pd.concat(steady)
    print(f"    {len(allrows)} samples in steady windows\n")
    for name, unit in REPORT:
        try:
            c = _col(allrows, name)
        except KeyError:
            print(f"    {name:26s}  CHANNEL NOT FOUND")
            continue
        v = pd.to_numeric(allrows[c], errors="coerce").dropna()
        if v.empty:
            continue
        # Median, not mean: HANDOFF section 3 records that excursions inside otherwise
        # steady windows (Cond Inlet Temp swings 36 F) are what make means untrustworthy.
        print(f"    {name:26s} median {v.median():8.3f} {unit:4s} "
              f"[{v.quantile(0.10):8.3f} .. {v.quantile(0.90):8.3f}]  n={len(v)}")


if __name__ == "__main__":
    which = sys.argv[1:] or list(DATASETS)
    for label in which:
        matches = [k for k in DATASETS if k.startswith(label)]
        for k in (matches or []):
            report(k, DATASETS[k])
