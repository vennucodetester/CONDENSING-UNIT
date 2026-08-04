# M1c Path B — reproductions

Two spikes: the **refrigerant side** (Path B, `run_pathB.mos`) and the **air side**
(M1c-3, `run_airside.mos`).

Prerequisite, one-off:

```modelica
installPackage(ExternalMedia, "4.1.1", exactMatch=false);
```

Both scripts run from the `modelica/` directory.

---

## 1. Refrigerant side — `run_pathB.mos`

```bash
omc spikes/PathB/run_pathB.mos
```

Expected outcome (OpenModelica 1.26.3, ExternalMedia 4.1.1, 2026-08-02):

| Model | Structure | Result |
|---|---|---|
| `PathB1_Properties` | flat; one `SaturationProperties` | ✅ **PASS** → `PathB1_Properties_res.mat` |
| `PathB3_SingleCell` | one `Cell1Dim`, **no component array**, `ComputeSat=true` | ✅ **PASS** → `PathB3_SingleCell_res.mat` |
| `PathB2_Flow1Dim` | `Flow1Dim`, **`Cells[N]` array**, `sat` via `sat_in`, `ComputeSat=false` | ❌ **FAIL** — no result file; C compile error |

### The failure

```
./PathB2_Flow1Dim_functions.h:119:9: error: unknown type name
  'PathB2__Flow1Dim_evap_Cells_Medium_SaturationProperties_external'
```

Build log: `PathB2_Flow1Dim_compile_error.log` · Full transcript: `_full_run.log`

OMC's frontend, backend, simcode and template stages all succeed; the **generated C
does not compile** — it emits a typedef for a type it never defines.

### What this establishes

**Established:**
- ExternalMedia/CoolProp works — properties and all four saturation derivatives
  (`ddldp`, `ddvdp`, `dhldp`, `dhvdp`) compute. `Tsat` = 0.7217 °C at 4.85 bar,
  cross-checked against an independent CoolProp call. h_fg = 373.9 kJ/kg.
- ThermoCycle cell physics works — a single `Cell1Dim` initialises and runs a transient.

**NOT established:**
- That this is a *confirmed* OpenModelica defect. It is **likely**. Confirming requires
  reproducing on another OMC version or an upstream report.
- **What the actual trigger is.** ⚠️ `PathB2_Flow1Dim` differs from the passing
  `PathB3_SingleCell` in **two ways at once**:
  1. a **component array** (`Cells[N]`), and
  2. `sat` **passed in** via `sat_in` with `ComputeSat=false`, vs. the control's
     `ComputeSat=true`.

  **These are confounded. Vary one at a time before concluding.** A useful next
  experiment: an array of `Cell1Dim` with `ComputeSat=true`, and a single cell with
  `ComputeSat=false`.

---

## 2. Air side (M1c-3) — `run_airside.mos`

```bash
omc spikes/PathB/run_airside.mos
```

**Status: ✅ PASSED 2026-08-02.** Answers SCOPE §15 Q7.

`AirSideTest` runs one `AirCell` on `Modelica.Media.Air.SimpleAir` against a cold coil
wall (263.15 K), air entering at 278.15 K, at two airflows:

| Air mass flow | U [W/m²K] | Q [W] | Result file |
|---|---|---|---|
| 0.40 kg/s (100 %) | 60.00 | −837.5 | `AirSide_100pct_res.mat` |
| 0.16 kg/s (40 %) | **28.83** | **−396.9** | `AirSide_040pct_res.mat` |

Transcript: `_airside_run.log`

### Verification

`AirCell` defaults to the `MassFlowDependence` heat-transfer model:

```modelica
U[i] = Unom * noEvent(0.00001 + abs(M_dot/Mdotnom)^0.8);
```

(0.16/0.40)^0.8 = 0.4805 → 60 × 0.4805 = **28.83**, matching the simulated value
exactly. The 0.8 exponent is the standard turbulent-flow value.

### What this means

- **Air-side conductance genuinely responds to airflow** — not a fixed parameter.
  Cutting airflow lowers **both** U and the air-side capacity rate; Q fell 53 % for a
  60 % airflow cut. That two-part response is the correct physics.
- **The vertical slice experiment (SCOPE §0.7) is viable.**
- The air side uses a **plain Modelica medium**, so the ExternalMedia codegen failure
  does **not** affect it. Air and refrigerant sides carry independent risk.

### Caveats

- Proven for a **single** `AirCell`. A multi-cell air side uses a component array;
  because air uses a plain medium this should be safe, but it is **untested**.
- `AirCell` asserts no flow reversal — fine for evaporator air.
- Proves airflow → conductance → heat transfer. Does **not** yet prove a full
  finned-tube coil with fin efficiency and a fan curve. Sufficient for the slice;
  revisit for quantitative work.

---

## Next

1. **Build the faithful `Flow1Dim` replacement** — a genuine drop-in preserving
   geometry, thermal connections, fluid ports, mass/energy balances, outputs and
   parameters. Requirements in `docs/PHASE0_RESULT.md`. *Chained cells alone are not
   sufficient — anything less than a faithful replacement silently changes the physics.*
2. Optionally, de-confound the trigger (see §1) and reproduce on a second OMC version
   to promote "likely codegen bug" to confirmed.
3. **M1d** — FMI 2.0 export, FMPy execution, native DLL working with no OpenModelica
   installed. **Unproven gate.**
4. **M1e** — closed refrigeration cycle. **Unproven gate.** Ends defects D3 and D11.
