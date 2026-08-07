"""Export the 'csv' sheet of a LabView test workbook to the pipeline's CSV format.

The 2026-05-27 (NSF) and 2026-05-28 (DOE) runs arrived as `.xlsm` workbooks rather than as
raw logger CSVs. This converts them into exactly the format the existing tooling reads.

THE FORMAT IS NOT NEGOTIABLE, AND GETTING IT WRONG FAILS SILENTLY
-----------------------------------------------------------------
`scratch/measured_reference.samples_in()` parses column 0 with
`strptime("%m/%d/%Y %H:%M:%S")` and **skips any row it cannot parse, without error**. A
malformed timestamp therefore yields zero samples and a confident-looking empty analysis
rather than a traceback. So:

  * column 0 must be named `Timestamp` and formatted `MM/DD/YYYY HH:MM:SS`
  * the workbook's separate `Date` and `Time` columns are merged into it and dropped
  * every other channel name is copied VERBATIM -- the logger's headers carry trailing
    spaces and typos ("Ait Out of Cond Left ", "Evap Coil intlet Temp 1") and downstream
    code matches the exact strings

The sheet has 99 named header columns; minus `Date` and `Time`, plus `Timestamp`, that is
98 -- identical to `fileshare/data 2.002.csv`. The script asserts this rather than trusting
it.

Run:  python scratch/extract_xlsm.py            # both new workbooks
      python scratch/extract_xlsm.py IN.xlsm OUT.csv
"""
from __future__ import annotations

import csv
import datetime as dt
import sys
from pathlib import Path

import openpyxl

ROOT = Path(__file__).resolve().parents[1]
FILESHARE = ROOT / "fileshare"
REFERENCE = FILESHARE / "data 2.002.csv"

DEFAULT_JOBS = [
    (ROOT / "RLN2MA Report 6 (Type 2)-NSF.xlsm",
     FILESHARE / "RLN2MA Report 6 (Type 2)-NSF.csv"),
    (ROOT / "RLN2MA Report 7 (Type 2)-DOE 1.xlsm",
     FILESHARE / "RLN2MA Report 7 (Type 2)-DOE 1.csv"),
]


def _timestamp(d, t) -> str | None:
    """`MM/DD/YYYY HH:MM:SS` from the sheet's separate Date and Time cells.

    openpyxl hands back a `datetime` for Date (midnight time component) and either a `time`
    or a `timedelta` for Time, depending on how the cell was formatted. Concatenating their
    string forms produces `2026-05-27 00:00:00 04:18:09`, which is the failure this helper
    exists to prevent.
    """
    if d is None or t is None:
        return None
    if isinstance(t, dt.timedelta):
        s = int(t.total_seconds())
        t = dt.time(s // 3600 % 24, s % 3600 // 60, s % 60)
    elif isinstance(t, dt.datetime):
        t = t.time()
    elif not isinstance(t, dt.time):
        return None
    if isinstance(d, dt.datetime):
        d = d.date()
    elif not isinstance(d, dt.date):
        return None
    return f"{d.month:02d}/{d.day:02d}/{d.year:04d} {t.hour:02d}:{t.minute:02d}:{t.second:02d}"


def convert(src: Path, dst: Path) -> dict:
    wb = openpyxl.load_workbook(src, read_only=True, data_only=True)
    ws = wb["csv"]
    rows = ws.iter_rows(values_only=True)

    header = [h for h in next(rows) if h is not None]
    if header[:2] != ["Date", "Time"]:
        raise SystemExit(f"{src.name}: expected 'Date','Time' first, got {header[:2]}")
    ncols = len(header)
    out_header = ["Timestamp"] + list(header[2:])

    written, skipped = 0, 0
    first = last = None
    dst.parent.mkdir(parents=True, exist_ok=True)
    with open(dst, "w", newline="", encoding="utf-8") as fh:
        w = csv.writer(fh)
        w.writerow(out_header)
        for r in rows:
            ts = _timestamp(r[0], r[1])
            if ts is None:
                skipped += 1
                continue
            w.writerow([ts] + ["" if v is None else v for v in r[2:ncols]])
            written += 1
            first = first or ts
            last = ts
    wb.close()
    return dict(rows=written, skipped=skipped, cols=len(out_header),
                first=first, last=last, header=out_header)


def check_against_reference(header: list[str]) -> str:
    if not REFERENCE.exists():
        return "reference missing, not checked"
    with open(REFERENCE, encoding="utf-8-sig") as fh:
        ref = next(csv.reader(fh))
    extra, missing = set(header) - set(ref), set(ref) - set(header)
    if not extra and not missing:
        return "headers identical to data 2.002.csv"
    return f"HEADER MISMATCH  extra={sorted(extra)}  missing={sorted(missing)}"


def main(argv: list[str]) -> None:
    jobs = [(Path(argv[0]), Path(argv[1]))] if len(argv) == 2 else DEFAULT_JOBS
    for src, dst in jobs:
        if not src.exists():
            print(f"{src.name}: MISSING")
            continue
        info = convert(src, dst)
        print(f"{dst.name}")
        print(f"    {info['rows']} rows, {info['cols']} cols, {info['skipped']} skipped")
        print(f"    {info['first']}  ..  {info['last']}")
        print(f"    {check_against_reference(info['header'])}")


if __name__ == "__main__":
    main(sys.argv[1:])
