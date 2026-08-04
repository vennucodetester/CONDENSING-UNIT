"""Is the closed-loop FMU deterministic?

Three consecutive gate runs against a BYTE-IDENTICAL FMU gave 4/6, 0/6 and 6/6.
Failing runs abort at exactly t = 4.48749 (CVode -8, RHS unrecoverable); passing
runs complete. Same binary, same start values, same machine.

That makes every calibration number in this project provisional, so it is worth
more than a guess. This probe separates the two candidate explanations:

  PER-PROCESS   the outcome is fixed once the DLL is loaded (address-space layout,
                uninitialised memory, a static in the property library) -> repeats
                inside one process agree with each other and differ between
                processes.
  PER-CALL      the outcome varies run to run inside a single process -> state is
                being carried between simulations, or a genuine race.

Usage:  python scratch/probe_determinism.py [n_repeats]
"""

from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
FMU = ROOT / "fmu" / "RefrigerationTrainer.fmu"

NOMINAL = dict(
    evap_airflow_m3_s=0.15,
    condenser_airflow_m3_s=0.076,
    txv_opening_frac=0.50,
    txv_size_frac=1.0,
    compressor_speed_frac=1.0,
)
STOP_TIME = 1500.0


def one_run() -> str:
    """Return a short verdict string for a single nominal simulation."""
    from fmpy import simulate_fmu

    try:
        res = simulate_fmu(
            str(FMU),
            start_values=dict(NOMINAL),
            stop_time=STOP_TIME,
            output_interval=STOP_TIME / 200.0,
            validate=False,
        )
    except Exception as exc:  # noqa: BLE001 - the failure mode IS the measurement
        msg = str(exc).replace("\n", " ")
        return f"CRASH {msg[:90]}"
    last = res[-1]
    try:
        t_evap = float(last["T_evap_k"]) - 273.15
        mdot = float(last["m_dot_kg_s"]) * 1000.0
        return f"OK    T_evap {t_evap:8.3f} C   mdot {mdot:6.3f} g/s"
    except (KeyError, ValueError, IndexError):
        names = ", ".join(list(res.dtype.names)[:12])
        return f"OK    (fields: {names})"


def main() -> None:
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 4
    import hashlib

    md5 = hashlib.md5(FMU.read_bytes()).hexdigest()
    print(f"FMU {FMU.name} md5 {md5}")
    for i in range(n):
        print(f"  call {i + 1}: {one_run()}", flush=True)


if __name__ == "__main__":
    main()
