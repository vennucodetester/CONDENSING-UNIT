"""SUPERSEDED 2026-08-05 — DO NOT QUOTE THE NUMBERS THIS PRINTS.

Use `scratch/trap_resolution.py` and `docs/TRAP_RESOLUTION.md` instead.

Three reasons this script's OUTPUT is not trustworthy:

  1. `COND_AIRFLOW_M3S = 0.076` below is the OLD fan-curve estimate. The measured value
     is 0.1203 m3/s, derived from the condenser air-side energy balance.
  2. It uses means, not medians, so it is sensitive to the excursions inside otherwise
     steady windows (`Cond Inlet Temp` swings 36 F inside them).
  3. Structurally, it derives `mdot` FROM `Q_cond` and then `Q_evap` FROM `mdot`, so
     `Q_evap` and `Q_cond` are NOT independent measurements. That is what manufactured
     the phantom "17 % energy balance gap" that cost a session to chase.

IT IS KEPT, AND MUST KEEP WORKING, because `steady_windows`, `samples_in` and `col` are
imported by the current scripts. Fix nothing here without checking those importers.

----- original module docstring follows -----

Build the MEASURED calibration reference from the field logs.

Why this exists
---------------
The model was being calibrated against catalogue interpolation and CoilDesigner
design intent. Both are predictions. This script derives the operating point from
measurement only, and is the target the model is judged against.

Method, and why it avoids the airflow problem
---------------------------------------------
Refrigerant enthalpies come from measured pressure + temperature via CoolProp, so
the thermodynamic path needs NO airflow assumption:

    h_suc  = f(suction pressure,  suction temperature)
    h_dis  = f(liquid pressure,   discharge temperature)
    h_ci   = f(liquid pressure,   condenser inlet temperature)
    h_liq  = f(liquid pressure,   temperature into TXV)

Mass flow is then taken from the CONDENSER air side, because its air delta (~22 F)
is three times the evaporator's (~8.5 F) and therefore far less sensitive to sensor
error. The evaporator air side is then a CHECK, not an input.

A real effect the model lacks
-----------------------------
Discharge gas cools between the compressor and the condenser inlet - the
condensate-pan hot-gas coil on the field trace, plus shell loss. That is why
h_dis - h_suc came out lower than isentropic work: the discharge sensor reads gas
that has already given up heat. Quantified here as Q_pan.

Run:  python scratch/measured_reference.py
"""
from __future__ import annotations

import csv
import datetime as dt
import statistics as st
from pathlib import Path

import openpyxl
from CoolProp.CoolProp import PropsSI as P

ROOT = Path(__file__).resolve().parents[1]
RAW = ROOT / "fileshare" / "data 2.002.csv"
XLSX = ROOT / "fileshare" / "Steady_State_Operating_Data.xlsx"

F2K = lambda f: (f - 32.0) * 5.0 / 9.0 + 273.15
PSIA = lambda psig: (psig + 14.696) * 6894.757
CP_AIR, RHO_AIR = 1005.0, 1.2
COND_AIRFLOW_M3S = 0.076  # ASSUMED: fan curve x coil resistance. The one soft input.


def _parse(x):
    if isinstance(x, dt.datetime):
        return x
    return dt.datetime.strptime(str(x).strip(), "%m/%d/%Y %H:%M:%S")


def steady_windows(dataset: str = "data 2.002", min_min: float = 9.0,
                   box_band: float = 2.0) -> list[tuple[dt.datetime, dt.datetime]]:
    """Steady windows for one dataset.  The workbook holds both runs, so the
    dataset prefix must be applied -- otherwise 2.003 windows leak into a 2.002
    analysis (harmless only because the timestamps happen not to overlap)."""
    wb = openpyxl.load_workbook(XLSX, data_only=True)
    rows = list(wb["Single_Unit_Steady_State"].iter_rows(values_only=True))
    idx = {str(n): k for k, n in enumerate(rows[0])}
    out = []
    for r in rows[1:]:
        if not str(r[idx["Dataset"]]).startswith(dataset):
            continue
        dur = r[idx["Duration_min"]]
        air_in = r[idx["Air_Into_Evap_F"]]
        if dur and dur >= min_min and air_in is not None and -box_band < air_in < box_band:
            out.append((_parse(r[idx["Start_Time"]]), _parse(r[idx["End_Time"]])))
    return out


def samples_in(windows, raw=None) -> list[dict]:
    with open(raw or RAW, encoding="utf-8-sig", errors="replace") as fh:
        rd = csv.reader(fh)
        hdr = [h.strip() for h in next(rd)]
        out = []
        for row in rd:
            if not row or not row[0].strip():
                continue
            try:
                t = dt.datetime.strptime(row[0].strip(), "%m/%d/%Y %H:%M:%S")
            except ValueError:
                continue
            if any(a <= t <= b for a, b in windows):
                out.append(dict(zip(hdr, row)))
    return out


def col(rows, name):
    vals = []
    for r in rows:
        v = r.get(name, "").strip()
        if v:
            try:
                vals.append(float(v))
            except ValueError:
                pass
    return vals


def main() -> dict:
    rows = samples_in(steady_windows())
    m = lambda n: st.mean(col(rows, n))
    sd = lambda n: st.pstdev(col(rows, n))

    p_suc, p_liq = PSIA(m("Suction Pressure")), PSIA(m("Liquid Pressure"))
    T_suc = F2K(m("Suction Temp into Comp"))
    T_dis = F2K(m("Disch Temp Out of Comp"))
    T_ci = F2K(m("Cond Inlet Temp"))
    T_liq = F2K(m("Temp Into TXV"))

    T_evap, T_cond = P("T", "P", p_suc, "Q", 1, "propane"), P("T", "P", p_liq, "Q", 1, "propane")
    h_suc = P("H", "P", p_suc, "T", T_suc, "propane")
    h_dis = P("H", "P", p_liq, "T", T_dis, "propane")
    h_ci = P("H", "P", p_liq, "T", T_ci, "propane")
    h_liq = P("H", "P", p_liq, "T", T_liq, "propane")

    dT_cond_air = (m("Ait Out of Cond Left") - m("Air Into Cond Left")) * 5.0 / 9.0
    dT_evap_air = (m("Air Into Evap Left") - m("Ait Out of Evap Left")) * 5.0 / 9.0
    C_cond = COND_AIRFLOW_M3S * RHO_AIR * CP_AIR
    Q_cond = C_cond * dT_cond_air
    mdot = Q_cond / (h_ci - h_liq)

    Q_evap = mdot * (h_suc - h_liq)
    Q_pan = mdot * (h_dis - h_ci)
    W_ref = mdot * (h_dis - h_suc)

    ref = dict(
        n_samples=len(rows),
        p_suction_psig=m("Suction Pressure"), p_liquid_psig=m("Liquid Pressure"),
        T_evap_c=T_evap - 273.15, T_cond_c=T_cond - 273.15,
        superheat_k=T_suc - T_evap, subcooling_k=T_cond - T_liq,
        T_discharge_f=m("Disch Temp Out of Comp"), T_liquid_f=m("Temp Into TXV"),
        dh_evap_kjkg=(h_suc - h_liq) / 1000.0,
        dh_comp_kjkg=(h_dis - h_suc) / 1000.0,
        dh_pan_kjkg=(h_dis - h_ci) / 1000.0,
        mdot_g_s=mdot * 1000.0,
        Q_evap_w=Q_evap, Q_cond_w=Q_cond, Q_pan_w=Q_pan, W_refrigerant_w=W_ref,
        unit_watts=m("Unit Watts"), case_watts=m("Case Watts"),
        air_in_evap_f=m("Air Into Evap Left"), air_out_evap_f=m("Ait Out of Evap Left"),
        air_in_cond_f=m("Air Into Cond Left"), air_out_cond_f=m("Ait Out of Cond Left"),
        implied_evap_airflow_m3s=Q_evap / (RHO_AIR * CP_AIR * dT_evap_air),
        sd_suction_psig=sd("Suction Pressure"), sd_liquid_psig=sd("Liquid Pressure"),
    )
    return ref


if __name__ == "__main__":
    r = main()
    print(f"MEASURED REFERENCE  (n={r['n_samples']} samples in steady windows)\n")
    print(f"  suction     {r['p_suction_psig']:7.2f} psig (sd {r['sd_suction_psig']:.2f}) -> T_evap {r['T_evap_c']:7.2f} C")
    print(f"  liquid      {r['p_liquid_psig']:7.2f} psig (sd {r['sd_liquid_psig']:.2f}) -> T_cond {r['T_cond_c']:7.2f} C")
    print(f"  superheat   {r['superheat_k']:7.2f} K      subcooling {r['subcooling_k']:6.2f} K")
    print(f"  discharge   {r['T_discharge_f']:7.1f} F      liquid into TXV {r['T_liquid_f']:6.1f} F")
    print()
    print(f"  refrigerating effect {r['dh_evap_kjkg']:7.1f} kJ/kg")
    print(f"  compressor work      {r['dh_comp_kjkg']:7.1f} kJ/kg")
    print(f"  pan/shell loss       {r['dh_pan_kjkg']:7.1f} kJ/kg  (discharge -> condenser inlet)")
    print()
    print(f"  mass flow   {r['mdot_g_s']:7.3f} g/s   (from condenser air side)")
    print(f"  Q_evap      {r['Q_evap_w']:7.1f} W")
    print(f"  Q_cond      {r['Q_cond_w']:7.1f} W")
    print(f"  Q_pan       {r['Q_pan_w']:7.1f} W")
    print(f"  W (refrig)  {r['W_refrigerant_w']:7.1f} W   vs Unit Watts {r['unit_watts']:.0f} (incl. cond fan)")
    print()
    print(f"  air evap {r['air_in_evap_f']:6.1f} -> {r['air_out_evap_f']:6.1f} F")
    print(f"  air cond {r['air_in_cond_f']:6.1f} -> {r['air_out_cond_f']:6.1f} F")
    print(f"  IMPLIED evaporator airflow {r['implied_evap_airflow_m3s']:.4f} m3/s "
          f"({r['implied_evap_airflow_m3s']*2118.88:.0f} CFM)  -- model uses 0.15 (318 CFM)")
