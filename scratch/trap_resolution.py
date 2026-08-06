"""T1/T2/T4 — resolve the third and fourth traps from data already in the repo.

Third trap : is the 44.82 C condensing temperature (from the Liquid Pressure
             transducer) consistent with the liquid-line thermocouples?
Fourth trap: which of Q_evap / Q_cond / Unit Watts is wrong?

Key structural point about the existing reference: measured_reference.py derives
mdot FROM the condenser air side, then Q_evap FROM that mdot. So Q_evap and Q_cond
are NOT independent measurements -- the "17 % gap" is really a disagreement between
the electrical work and the refrigerant enthalpy rise (h_cond_in - h_suction).
The only capacity number independent of every pressure transducer is the
EVAPORATOR AIR SIDE, using the fan-curve airflow. That is the anchor used here.

Run: python scratch/trap_resolution.py
"""
import statistics as st
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from measured_reference import steady_windows, samples_in, col, F2K, PSIA  # noqa: E402
from CoolProp.CoolProp import PropsSI as P  # noqa: E402

CP_AIR, RHO_AIR = 1005.0, 1.2
EVAP_AIRFLOW_M3S = 0.15   # fan curve x coil dP -- independent of all transducers
R = "propane"


def q(vals, p):
    v = sorted(vals)
    return v[max(0, min(len(v) - 1, int(p * (len(v) - 1))))]


def main(dataset="data 2.002"):
    raw = Path(__file__).resolve().parents[1] / "fileshare" / f"{dataset}.csv"
    rows = samples_in(steady_windows(dataset), raw=raw)
    print(f"DATASET {dataset}")
    med = lambda n: st.median(col(rows, n))
    band = lambda n: (q(col(rows, n), 0.10), st.median(col(rows, n)), q(col(rows, n), 0.90))

    print(f"n = {len(rows)} steady samples\n")

    # ---------------- T4: uncertainty bands on the raw channels ---------------
    print("T4  p10 / median / p90 of the channels the comparison rests on")
    for n in ("Suction Pressure", "Liquid Pressure", "Cond Outlet Temp",
              "Temp Into TXV", "Cond Inlet Temp", "Suction Temp into Comp",
              "Air Into Evap Left", "Ait Out of Evap Left",
              "Air Into Cond Right", "Ait Out of Cond Left", "Unit Watts"):
        a, b, c = band(n)
        print(f"    {n:24s} {a:8.2f} {b:8.2f} {c:8.2f}   spread {c-a:6.2f}")

    # ---------------- T1: is the condensing temperature believable? ----------
    p_liq = PSIA(med("Liquid Pressure"))
    T_cond_xducer = P("T", "P", p_liq, "Q", 1, R) - 273.15
    T_cond_out = F2K(med("Cond Outlet Temp")) - 273.15
    T_txv = F2K(med("Temp Into TXV")) - 273.15
    T_cond_in = F2K(med("Cond Inlet Temp")) - 273.15
    air_in_c = F2K(med("Air Into Cond Right")) - 273.15
    air_in_l = F2K(med("Air Into Cond Left")) - 273.15
    air_out_c = F2K(med("Ait Out of Cond Left")) - 273.15

    print("\nT1  condensing temperature, four routes")
    print(f"    Tsat(Liquid Pressure transducer)      {T_cond_xducer:7.2f} C")
    print(f"    condenser outlet thermocouple         {T_cond_out:7.2f} C   (hard LOWER bound on T_cond)")
    print(f"    liquid into TXV thermocouple          {T_txv:7.2f} C")
    print(f"    condenser inlet thermocouple          {T_cond_in:7.2f} C   (strap-on, discharge gas)")
    print(f"    air into condenser  R / L             {air_in_c:7.2f} / {air_in_l:7.2f} C")
    print(f"    air off condenser                     {air_out_c:7.2f} C")
    print(f"    implied approach (T_cond - air off)   {T_cond_xducer - air_out_c:7.2f} K   <- impossible if ~0")
    print(f"    implied subcooling (T_cond - T_out)   {T_cond_xducer - T_cond_out:7.2f} K   <- NEGATIVE = transducer wrong")
    print(f"    liquid line gain (TXV - cond out)     {T_txv - T_cond_out:7.2f} K")
    for appr in (5.0, 8.0):
        print(f"    T_cond if approach were {appr:4.1f} K       {air_out_c + appr:7.2f} C")

    # ---------------- T2: capacity, anchored on the evaporator air side ------
    dT_evap_air = (med("Air Into Evap Left") - med("Ait Out of Evap Left")) * 5.0 / 9.0
    dT_evap_air_r = (med("Air Into Evap Right") - med("Air Out of Evap Right")) * 5.0 / 9.0
    Q_evap_air = EVAP_AIRFLOW_M3S * RHO_AIR * CP_AIR * dT_evap_air

    # refrigerant states.  T_evap from the COIL sensors, not the faulty transducer.
    T_evap_coil = F2K(med("Evap Coil intlet Temp 2"))
    p_evap_coil = P("P", "T", T_evap_coil, "Q", 0.5, R)
    p_evap_xducer = PSIA(med("Suction Pressure"))
    T_suc = F2K(med("Suction Temp into Comp"))
    h_suc = P("H", "P", p_evap_coil, "T", T_suc, R)
    h_liq = P("H", "P", p_liq, "T", F2K(med("Temp Into TXV")), R)
    h_cond_in = P("H", "P", p_liq, "T", F2K(med("Cond Inlet Temp")), R)
    dh_evap = h_suc - h_liq
    mdot = Q_evap_air / dh_evap

    W_elec = med("Unit Watts")
    print("\nT2  capacity and the energy balance, anchored on the evaporator air side")
    print(f"    evap air dT  L / R                    {dT_evap_air:7.2f} / {dT_evap_air_r:6.2f} K")
    print(f"    Q_evap (air side, 318 CFM)            {Q_evap_air:7.1f} W   <- independent of every transducer")
    print(f"    refrigerating effect                  {dh_evap/1000:7.1f} kJ/kg")
    print(f"    mdot implied                          {mdot*1000:7.3f} g/s")
    print(f"    Unit Watts                            {W_elec:7.1f} W")
    for fan in (50.0, 80.0):
        W_gas = 0.85 * (W_elec - fan)
        print(f"    with {fan:4.0f} W fan: W_gas {W_gas:6.1f} W -> Q_cond must be {Q_evap_air + W_gas:7.1f} W"
              f"  ({(Q_evap_air + W_gas)/1000.0:.3f} kW)")
    print(f"    -> condenser airflow needed           "
          f"{(Q_evap_air + 0.85*(W_elec-50))/(RHO_AIR*CP_AIR*(air_out_c-air_in_c)):7.4f} m3/s"
          f"  ({(Q_evap_air + 0.85*(W_elec-50))/(RHO_AIR*CP_AIR*(air_out_c-air_in_c))*2118.88:.0f} CFM)")
    print(f"    specific work implied by electrics    "
          f"{0.85*(W_elec-50)/(mdot*1000):7.1f} J/g   (isentropic floor ~96.9)")
    print(f"    h_cond_in - h_suc (strap-on TC)       {(h_cond_in-h_suc)/1000:7.1f} kJ/kg"
          f"   -> W_ref {mdot*(h_cond_in-h_suc):6.1f} W")

    # -------- interval analysis: propagate the L/R sensor disagreements ------
    # Neither pair is known to be the "true" one, so carry both as an interval.
    dT_e = sorted((dT_evap_air, dT_evap_air_r))
    Qe = [EVAP_AIRFLOW_M3S * RHO_AIR * CP_AIR * d for d in dT_e]
    W_gas = 0.85 * (W_elec - 50.0)
    Qc_req = [Qe[0] + W_gas, Qe[1] + W_gas]
    dT_c = sorted((air_out_c - air_in_c, air_out_c - air_in_l))
    # condenser airflow that would close the balance, over both inlet probes
    V_lo = Qc_req[0] / (RHO_AIR * CP_AIR * dT_c[1])
    V_hi = Qc_req[1] / (RHO_AIR * CP_AIR * dT_c[0])
    print("\nT2b interval analysis -- carry the L/R sensor disagreement as a range")
    print(f"    Q_evap air side                       {Qe[0]:7.1f} .. {Qe[1]:.1f} W   (L/R evap probes)")
    print(f"    Q_cond required to close the balance  {Qc_req[0]:7.1f} .. {Qc_req[1]:.1f} W")
    print(f"    condenser air dT                      {dT_c[0]:7.2f} .. {dT_c[1]:.2f} K   (L/R inlet probes)")
    print(f"    condenser airflow that closes it      {V_lo:7.4f} .. {V_hi:.4f} m3/s"
          f"  ({V_lo*2118.88:.0f} .. {V_hi*2118.88:.0f} CFM)")
    print(f"    -> model Q_evap 693 W is {'INSIDE' if Qe[0] <= 693 <= Qe[1] else 'OUTSIDE'} the measured interval")
    print(f"    -> HANDOFF's 0.1203 m3/s is {'INSIDE' if V_lo <= 0.1203 <= V_hi else 'OUTSIDE'} the closing interval")

    # -------- T1b: does the condenser really have a "0.71 K approach"? -------
    # The trap assumed the whole coil sits at T_cond.  It does not: the refrigerant
    # ENTERS superheated, and in a counterflow coil the air EXITS at that same end.
    # So air-off is driven by the desuperheating gas, not by T_cond, and may legally
    # sit close to (or above) T_cond.  Size that zone.
    h_g = P("H", "P", p_liq, "Q", 1, R)
    h_out = P("H", "P", p_liq, "T", F2K(med("Cond Outlet Temp")), R)
    print("\nT1b is the 0.71 K approach actually impossible?")
    for mdl, md in (("evap-air low ", Qe[0] / dh_evap), ("evap-air high", Qe[1] / dh_evap)):
        h_dis = h_suc + W_gas / md
        T_dis = P("T", "P", p_liq, "H", h_dis, R) - 273.15
        f_ds = (h_dis - h_g) / (h_dis - h_out)
        print(f"    mdot {md*1000:5.2f} g/s -> true discharge {T_dis:6.1f} C, "
              f"desuperheat = {f_ds*100:4.1f} % of Q_cond ({(h_dis-h_g)*md:6.1f} W)")
    print(f"    saturated vapour at p_liq             {T_cond_xducer:7.2f} C")
    print(f"    air off condenser                     {air_out_c:7.2f} C")
    print("    -> air exits alongside gas far hotter than T_cond; no infinite UA needed")

    print("\n    transducer cross-check")
    print(f"    T_evap from coil inlet TC             {T_evap_coil-273.15:7.2f} C -> {p_evap_coil/6894.757-14.696:6.2f} psig")
    print(f"    T_evap from suction transducer        {P('T','P',p_evap_xducer,'Q',1,R)-273.15:7.2f} C -> "
          f"{med('Suction Pressure'):6.2f} psig")


def targets(dataset="data 2.002") -> dict:
    """Corrected comparison targets, as INTERVALS where the instruments disagree.
    See docs/TRAP_RESOLUTION.md. Emitted to docs/measured_targets.json so the
    comparison script does not re-parse the 10 MB CSV on every run."""
    raw = Path(__file__).resolve().parents[1] / "fileshare" / f"{dataset}.csv"
    rows = samples_in(steady_windows(dataset), raw=raw)
    med = lambda n: st.median(col(rows, n))

    p_liq = PSIA(med("Liquid Pressure"))
    T_cond = P("T", "P", p_liq, "Q", 1, R) - 273.15
    # T_evap from the COIL sensors only -- the suction transducer reads ~4 psi high.
    coil = [F2K(med(n)) - 273.15 for n in
            ("Evap Coil intlet Temp 1", "Evap Coil intlet Temp 2",
             "Defrost Termination Sensor", "TXV Bulb Temp")]
    dT_e = sorted(((med("Air Into Evap Left") - med("Ait Out of Evap Left")) * 5 / 9,
                   (med("Air Into Evap Right") - med("Air Out of Evap Right")) * 5 / 9))
    Qe = [EVAP_AIRFLOW_M3S * RHO_AIR * CP_AIR * d for d in dT_e]
    W_gas = 0.85 * (med("Unit Watts") - 50.0)
    h_suc = P("H", "P", P("P", "T", F2K(med("Evap Coil intlet Temp 2")), "Q", 0.5, R),
              "T", F2K(med("Suction Temp into Comp")), R)
    dh = h_suc - P("H", "P", p_liq, "T", F2K(med("Temp Into TXV")), R)
    return dict(
        dataset=dataset, n=len(rows),
        # Coil sensors are SURFACE mounted, so they bound T_evap from ABOVE only.
        # Lower end is HANDOFF's -24.17 C extrapolation; upper end is the coldest TC.
        T_evap_c=[-24.17, min(coil)],
        T_cond_c=[T_cond, T_cond],
        superheat_k=[1.27, 1.27],
        # AT THE TXV INLET, and that is deliberate -- see docs/TRAP_RESOLUTION.md.
        # The real condenser leaves 4.11 K of subcooling and the liquid line adds
        # another 4.8-5.6 K, but BOTH reject into the same ~35 C air, and the model's
        # condenser outlet IS its TXV inlet.  So the model legitimately lumps the two,
        # and lands at 36.22 C against a measured 35.84 C.  Comparing it to the
        # condenser-outlet 4.11 K instead was an error made and corrected 2026-08-05.
        subcooling_k=[T_cond - (F2K(med("Temp Into TXV")) - 273.15)] * 2,
        Q_evap_w=Qe,
        Q_cond_w=[-(Qe[1] + W_gas), -(Qe[0] + W_gas)],
        mdot_g_s=[Qe[0] / dh * 1000, Qe[1] / dh * 1000],
        cop=[Qe[0] / W_gas, Qe[1] / W_gas],
        air_out_evap_f=sorted((med("Ait Out of Evap Left"), med("Air Out of Evap Right"))),
        air_out_cond_f=sorted((med("Ait Out of Cond Left"), med("Air Out of Cond Right"))),
    )


if __name__ == "__main__":
    if "--emit" in sys.argv:
        import json
        out = Path(__file__).resolve().parents[1] / "docs" / "measured_targets.json"
        d = {ds: targets(ds) for ds in ("data 2.002", "data 2.003")}
        out.write_text(json.dumps(d, indent=1))
        print(f"wrote {out.name}: " + ", ".join(
            f"{k}={v[0]:.2f}..{v[1]:.2f}" for k, v in d["data 2.002"].items()
            if isinstance(v, list)))
    else:
        main(sys.argv[1] if len(sys.argv) > 1 else "data 2.002")
