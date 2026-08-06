# Phase 0 Result

## 2026-08-02 — passed

- Python: 3.11.9
- OpenModelica: 1.26.3 (64-bit)
- FMPy: 0.3.22
- Model: `modelica/RefrigerationTrainer/SmokeContract.mo`
- Artifact: `modelica/RefrigerationTrainerSmoke.fmu`
- FMI target: 2.0 Co-Simulation, win64

OpenModelica exported the FMU successfully. FMPy validated the declared interface and
executed it successfully through `twin.engine_fmu.FmuEngine`. The nominal smoke result
returned `p_suction_pa = 485000` and `Q_evap_w = 5600`.

The smoke equations are not refrigeration physics. M0 proves only the compiler, FMU
packaging, strict interface validation, SI boundary, and Python execution path.

---

## 2026-08-02 — M1a Path A: FAILED (decisive)

**Test:** instantiate `ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim` (the
finite-volume pipe used to build evaporators) with
`AixLib.Media.Refrigerants.R290.R290_IIR_P05_30_T263_343_Horner`, then `checkModel`.

**Environment:** OpenModelica 1.26.3 (64-bit), MSL 4.1.0 auto-substituted.

### Results

| Hypothesis | Outcome |
|---|---|
| AixLib and ThermoCycle cannot be loaded together | **FALSE.** Both `loadFile` calls returned `true`; all key classes resolve. OMC reports AixLib "fully compatible" with MSL 4.1.0. |
| ThermoCycle needs 237 files hand-ported to MSL 4 | **FALSE.** `convertPackageToLibrary(ThermoCycle, Modelica, "4.1.0")` → `true`. One command, in memory. Vendored source untouched. |
| A ThermoCycle FV pipe can run on the AixLib medium | **FALSE — the real blocker.** |

### The blocking error

```
Error: Variable sat.ddldp not found in scope Flow1Dim.
```

`Flow1Dim.mo:115` requires
`sat_in = {sat.ddldp, sat.ddvdp, sat.dhldp, sat.dhvdp, sat.dTp, ...}` —
**saturation-property derivatives that are ExternalMedia extensions.** AixLib's R290
medium provides none of them (verified by grep); no plain `Modelica.Media` medium does.

### Conclusion

**ExternalMedia + CoolProp is a hard dependency of ThermoCycle's finite-volume
components — not a media preference.** Recorded in SCOPE §3.3.

Before this test, three separate positions had been argued from documentation alone,
and all three were wrong in some respect. One compile settled it. **Prefer the
experiment.**

### Next

**M1b — install ExternalMedia**, then re-run as Path B with
`ThermoCycle.Media.R290_CP`.

---

## 2026-08-02 — M1b: ExternalMedia installed. PASSED, no compiler needed.

```
installPackage(ExternalMedia, "4.1.1", exactMatch=false)   ->  true
```

**No CMake, no C++ compiler, no Python required.** The package manager ships prebuilt
Windows binaries, verified present:

```
.../ExternalMedia 4.1.1/Resources/Library/win64/ExternalMediaLib.dll
.../ExternalMedia 4.1.1/Resources/Library/win64/vs2022/ExternalMediaLib.lib
```

**Correction:** the scope previously stated CMake + C/C++ compiler + Python were
prerequisites. They are **fallback** requirements for building from source only.
Estimated "day of setup pain" was wrong — actual time ~2 minutes.

---

## 2026-08-02 — M1c Path B step 1: PASSED

**Test:** R290 properties and the four saturation derivatives `Flow1Dim` requires,
through `ThermoCycle.Media.R290_CP` → ExternalMedia → CoolProp. Simulated, not merely
`checkModel`-ed.

At p = 4.85 bar:

| Quantity | Value | Check |
|---|---|---|
| `Tsat` | **0.7217 °C** | ✅ matches independent CoolProp call (0.72 °C) |
| `hl` / `hv` | 201 807 / 575 661 J/kg | h_fg = **373.9 kJ/kg**, correct for R290 |
| `dl` / `dv` | 527.6 / 10.57 kg/m³ | plausible |
| `ddldp` | −9.209e-05 | ✅ **the derivative Path A could not supply** |
| `ddvdp` | 2.108e-05 | ✅ |
| `dhldp` | 0.1702 | ✅ |
| `dhvdp` | 0.0747 | ✅ |
| `dTp` | 6.790e-05 K/Pa | ✅ |

**ExternalMedia integration works. All four blocking derivatives compute.**

---

## 2026-08-02 — M1c Path B step 2: FAILED — LIKELY OpenModelica codegen defect

**Test:** `Flow1Dim` (N=5) with `R290_CP`, source + sink + fixed wall temperature,
20 s transient.

Frontend (28 s), backend, simcode and templates all succeeded. **The C compile failed:**

```
./_PathB2_functions.h:119:9: error: unknown type name
  '__PathB2_evap_Cells_Medium_SaturationProperties_external'
```

OMC emits a C typedef referencing a type it never defines.

### Isolation — partial. The trigger is NOT yet isolated.

| Model | Structure | Result |
|---|---|---|
| Flat model, one `SaturationProperties` | no array | ✅ **simulates** (step 1) |
| **Single `Cell1Dim`**, `ComputeSat=true` | **no component array** | ✅ **SIMULATES** |
| `Flow1Dim`, N=5 | **`Cells[N]` array, `sat` passed in via `sat_in`** | ❌ **codegen error** |

**Conclusion (provisional).** ExternalMedia and ThermoCycle cell physics both work
under OpenModelica. The failure **correlates with** an array of components carrying an
external-object medium record.

> ⚠️ **Call this a *likely* OpenModelica code-generation bug, not a confirmed one.**
> It is unconfirmed until reproduced on a second OMC version or acknowledged upstream.
>
> **Known confound — the isolation is not clean.** `Flow1Dim` differs from the passing
> control in **two** ways at once: it uses a component array **and** passes the
> saturation record in via `sat_in` with `ComputeSat=false`, whereas the passing
> `Cell1Dim` computes its own saturation with `ComputeSat=true`. Either could be the
> trigger. **Vary one at a time before concluding.**

Reproduction, build log and reference result files: `modelica/spikes/PathB/`.

### Classification (per reviewer taxonomy)

- Property call fails → ExternalMedia integration — **NO, passes**
- **`Flow1Dim` fails → ThermoCycle / OpenModelica compatibility — YES, this one**
- FMU-only failure → packaging — not reached
- Airflow response fails → air-side model — **not reached; still unproven**

### Candidate workarounds, in order of cost

1. **Build an explicit `Flow1Dim` replacement** — not merely "chained cells". It must be
   a genuine drop-in that preserves:
   - **geometry**: `N`, `A`, `V`, `Vi=V/N`, `Ai=A/N`, `Nt`
   - **thermal connections**: a distributed `ThermalPort(N)` equivalent to `Wall_int`
   - **fluid ports**: `InFlow` / `OutFlow` with identical connector types
   - **mass and energy balances**: cell-to-cell chaining identical to `Flow1Dim`
   - **outputs**: every variable downstream code reads from `Flow1Dim`
   - **parameters**: `Unom_l/tp/v`, `pstart`, `Tstart_inlet/outlet`, `steadystate`,
     `Mdotnom`, discretisation options
   Use `ComputeSat=true` per cell — the configuration proven to simulate.
   Anything less than a faithful replacement silently changes the physics. **Try first.**
2. **Reproduce on a second OpenModelica version** — required to promote the theory
   from *likely* to *confirmed*, and it may simply be fixed in another release.
3. Report upstream to OpenModelica.
4. Dymola (commercial), which ThermoCycle is primarily developed against.

**Do not reopen the library decision yet** — per the agreed rule, only after the
workaround above is tried and the air-side test is run.

---

## 2026-08-02 — M1c-3 AIR SIDE: **PASSED**. §15 Q7 answered.

**This was the real decision gate for the vertical slice.** Executed, not inspected.

**Test:** `ThermoCycle...Pipes.AirCell` on `Modelica.Media.Air.SimpleAir`, cold coil
wall at 263.15 K, air in at 278.15 K, simulated at two airflows.
Repro: `modelica/spikes/PathB/AirSide.mo` + `run_airside.mos`.

| Air mass flow | U [W/m²K] | Q [W] |
|---|---|---|
| 0.40 kg/s (100 %) | 60.00 | 837.5 |
| 0.16 kg/s (40 %) | **28.83** | **396.9** |

**Verification of the underlying law.** `AirCell` defaults to the `MassFlowDependence`
heat-transfer model:

```modelica
U[i] = Unom * noEvent(0.00001 + abs(M_dot/Mdotnom)^0.8);
```

(0.16/0.40)^0.8 = 0.4805 → 60 × 0.4805 = **28.83**, matching the simulated value
exactly. The 0.8 exponent is the standard turbulent-flow value.

### Why this matters

1. **Air-side conductance genuinely responds to airflow** — not a fixed parameter.
   Reducing airflow lowers **both** U and the air-side capacity rate, which is the
   correct two-part physics. Heat transfer fell 53 % for a 60 % airflow cut.
2. **The slice experiment (§0.7, evaporator airflow) is viable.**
3. **The air side uses a plain Modelica medium** (`SimpleAir`), so the ExternalMedia
   external-object codegen failure **does not affect it**. Air and refrigerant sides
   have independent risk.

### Remaining caveats

- Tested as a **single** `AirCell`. A multi-cell air side uses a component array; since
  air uses a plain medium the array should be safe, but that is **untested**.
- `AirCell` asserts no flow reversal — fine for evaporator air, would matter if air
  flow ever reversed.
- This proves airflow → conductance → heat transfer. It does **not** yet prove a full
  finned-tube coil with fin efficiency and a fan curve. Sufficient for the slice;
  revisit for quantitative work.

### Status after this test

| Gate | Result |
|---|---|
| ExternalMedia integration | ✅ PASS |
| Refrigerant-side coil (`Flow1Dim`) | ❌ FAIL — likely OMC codegen bug, workaround pending |
| **Air side** | ✅ **PASS** |
| FMU packaging / portability | ⏳ not reached |

**One known blocker: the `Flow1Dim` replacement.** The library decision stays closed —
the air side, the property layer and the cell physics all work.

> **"One blocker" is not "one thing left to do."** M1d (FMU packaging with a native
> DLL) and M1e (closed refrigeration cycle) are **unproven gates**, not known-good
> steps. Either could fail. Do not treat the remaining path as clear.

---

## 2026-08-02 — DE-CONFOUNDED + BLOCKER CLEARED

### De-confound result

The two candidate triggers were varied independently:

| Model | Array? | ComputeSat | Result |
|---|---|---|---|
| `PathB3_SingleCell` | no | `true` | ✅ runs |
| `DeconfoundA_ArrayComputeSatTrue` | **yes** | `true` | ✅ **builds and runs** |
| `Flow1Dim` | yes | `false` (+ `sat_in`) | ❌ codegen failure |

**The trigger is passing the external `SaturationProperties` record INTO components via
`sat_in`. Component arrays are fine.** The earlier "arrays are the trigger" hypothesis
is disproven. Repro: `modelica/spikes/PathB/run_deconfound.mos`.

### `RefrigerationTrainer.Flow1DimCS` — the replacement

A faithful drop-in for `Flow1Dim`, keeping the `Cells[N]` array and setting
`ComputeSat=true` so each cell computes its own saturation state.

Preserved: geometry (`N`, `Nt`, `A`, `V`, `Vi=V/N`, `Ai=A/N`) · connectors (`FlangeA`
`InFlow`, `FlangeB` `OutFlow`, `ThermalPort(N)` `Wall_int`) · the same
`ThermalPortConverter` fan-out · cell-to-cell chaining · all heat-transfer,
initialisation and numerical parameters · outputs `Q_tot`, `M_tot`.

**Deliberate difference:** `ComputeSat=true` costs N saturation evaluations per step
instead of 1. Physically equivalent while cells share a common pressure — which they do,
since `Cell1Dim` imposes `InFlow.p = OutFlow.p`. **Slower, not different.**

### Verification — `run_flow1dimcs.mos`

R290 via ExternalMedia, N=5, ṁ=0.031 kg/s, h_in=2.6e5 J/kg, wall 278.15 K:

| Output | Value | Check |
|---|---|---|
| `Q_tot` | 1568.73 W | ṁ·Δh = 0.031 × (310604 − 260000) = **1568.7 W** — **energy balance closes exactly** |
| `M_tot` | 0.0227 kg | 22.7 g in 0.5 L → mean density 45 kg/m³, correctly between vapour (10.6) and liquid (527.6) |
| `h_out` | 310 604 J/kg | two-phase, as expected |

The exact energy closure is the property the demo engine misses by 62 % (defect D4).

**Initialisation note:** the coil must start in a state consistent with its inlet. A
subcooled `Tstart_inlet` with a two-phase source drives CoolProp out of range
(`unable to solve 1phase PY flash`). Pass `hstart` explicitly when the inlet is
two-phase.

### Status

**M1c-2 CLEARED.** Next: **M1d** (FMU export + native DLL portability) and **M1e**
(closed loop) — both still unproven gates.

---

## 2026-08-02 — M1d: **PASSED**, with two OpenModelica defects worked around

Artifact: `fmu/Evap_me.fmu` (8.16 MB) from `RefrigerationTrainer.EvapFmuSmoke`.
Build script: `modelica/build_evap_fmu.mos`.

### Against the four agreed criteria

| Criterion | Result |
|---|---|
| FMU exports reproducibly | ✅ **as Model Exchange.** Co-Simulation **fails** — see defect 1 |
| Native DLL loads with the runtime isolated (see caveat) | ✅ **isolated-runtime test only** — same PC, OpenModelica removed from `PATH` and `OPENMODELICAHOME` unset |
| Minimal smoke simulation runs with OpenModelica off PATH | ✅ `Q_evap_w = 1568.73 W`, identical to the in-OMC value |
| Failure modes are clear diagnostics, not silent crashes | ⚠️ **only after forcing it** — see defect 1 |

### Self-containment — verified by inspecting the FMU archive

```
binaries/win64/Evap_me.dll            1,292,866
binaries/win64/ExternalMediaLib.dll  10,891,205   <- CoolProp, bundled
binaries/win64/libstdc++-6.dll        2,405,564   <- MinGW runtime
binaries/win64/libgcc_s_seh-1.dll       155,378
binaries/win64/libwinpthread-1.dll       60,951
```

**The native-dependency portability risk is substantially reduced, not eliminated.**

> ⚠️ **This was an ISOLATED-RUNTIME test, not a clean-machine test.** OpenModelica was
> removed from `PATH` and `OPENMODELICAHOME` unset, **on the same PC**. That does not
> rule out registry entries, system-directory DLLs, or MSVC/MinGW runtimes already
> present because this is a dev box. **A true clean-machine test on a second machine or
> a fresh VM is still outstanding** and remains an open item.

### Functional proof

Energy balance closes **exactly** outside the dev environment:
`ṁ·Δh = 0.031 × (310604 − 260000) = 1568.73 W = Q_evap_w`.

The input genuinely drives the physics:

| `wall_T_k` | `Q_evap_w` |
|---|---|
| 274.15 K | 102.05 W |
| 278.15 K | 1568.73 W |
| 283.15 K | 3402.08 W |

### Defect 1 — Co-Simulation export fails; **use Model Exchange**

`fmuType="cs"` returns an **empty string with no error**. Only with
`setCommandLineOptions("-d=failtrace")` does the cause appear:

```
error function createNonlinearResidualEquationsComplex failed for: ...evap.Cells.Med...
error function createOdeSystem failed for component torn nonlinear Equationsystem
```

`fmuType="me"` succeeds. Note the model **simulates fine inside OMC** — the CS export
path is stricter than the simulation path, which is exactly why M1d was worth doing
separately.

**Scope change: FMI target becomes 2.0 Model Exchange, win64** (was Co-Simulation).
FMPy supplies the solver for ME. Incidental benefit: ME does not embed the OpenModelica
runtime, which simplifies the licensing question in §2.

### Defect 2 — `modelDescription.xml` violates FMI 2.0

FMPy's validator rejects it:

```
The variable "..._ThermodynamicState148.phase" is of type Integer and
must have variability != "continuous".
```

OMC emits Integer variables with `variability="continuous"`, which FMI 2.0 forbids.
Ten such variables, all internal `_D_TMP_` medium-state temporaries.

**Workaround: `validate=False`.** The FMU runs correctly and gives identical results.

> ⚠️ **This weakens a safeguard.** `twin/engine_fmu.py` validates the declared interface
> with `read_model_description(..., validate=True)`. That must now be `validate=False`,
> so **explicit interface checking against `REQUIRED_OUTPUTS` becomes the only guard**
> and matters more, not less. Do not remove it.

### Status

**M1d CLEARED.** Packaging and runtime uncertainty is gone. **M1e (closed loop) now has
a stable target.**

---

## 2026-08-02 — M1e: STARTED. Model built, type-checks, 2-equation imbalance diagnosed.

**Artifact:** `modelica/RefrigerationTrainer/ClosedLoopM1e.mo` · runner `modelica/run_m1e.mos`

Smallest closed loop: compressor → `Flow1DimCS` condenser → TXV → `Flow1DimCS`
evaporator → compressor, with two `WallTemperatureSource` air-side stand-ins.

### Named residuals — built in from the start, deliberately undamped

Per the agreed approach: make residuals visible and attributable **before** adding any
damping or continuation.

| Output | Meaning |
|---|---|
| `sum_mass_flow_kg_s` | compressor flow + TXV flow. **A SUM, not a residual** — both inflows are positive, so it equals 2*mdot at closure, never zero. Renamed from `res_mass_kg_s` 2026-08-06 |
| `res_energy_w` | `Q_evap + W_comp + Q_cond` — zero at closure |
| `res_superheat_k` | suction superheat minus target |
| `res_subcool_k` | condenser-outlet subcooling (reported, not driven) |
| `p_lift_pa` | compressor pressure lift |

Plus the full state readout (`p_suction_pa`, `T_cond_sat_k`, `cop`, `M_charge_kg`, …).
**No damping, no continuation applied.** Add only where the loop demonstrably asks, and
record why.

### Current state

`checkModel` **passes**, but the system is **over-determined by exactly 2**:

```
has 1149 equation(s) and 1147 variable(s)
```

### Diagnosis — both causes identified

1. **`txv.cmd`** — `ThermoCycle...PdropAndValves.Valve` declares `cmd` as a
   `Modelica.Blocks.Interfaces.RealInput` **and** supplies its own default
   (`Valve.mo:64`, `cmd = Xopen`). Assigning `txv.cmd = txv_opening_frac` in the
   equation section adds a second equation for the same variable. **+1**
2. **`comp.N_rot`** — `Compressor.mo` declares `N_rot` as a plain variable already
   determined by the electrical flange (`Compressor.mo:95`,
   `der(flange_elc.phi) = 2*N_rot*pi`). Assigning it directly adds a second
   equation. **+1**

Both are the same mistake: **driving a variable that its own component already
defines.** Same class as the earlier `Wall_int` over-determinations — a recurring trap
in this codebase, worth watching for.

### Fix to apply next

- Drive the valve through its connector — connect a `Modelica.Blocks.Sources.RealExpression`
  to `txv.cmd` instead of assigning it.
- Drive the compressor through `flange_elc` (e.g. `ElectricDrive`, or a rotational speed
  source), **or** select a compressor variant that exposes speed as a free input.

Neither is a physics problem. Once balanced, the real M1e question — **does the closed
loop converge** — is still open and unproven.

### Not yet attempted

Convergence, initialisation strategy, and the closed-loop pressure/charge reference.
A closed refrigerant loop has no external pressure datum; the pressure level is set by
total charge, which is M3 territory. Expect this to need an explicit reference or a
receiver before it converges.


---

## 2026-08-02 — M1e: wiring fixed, THIRD OpenModelica codegen defect hit

### Wiring fixes applied — both diagnosed causes confirmed

- `txv.cmd` now driven by `Modelica.Blocks.Sources.RealExpression` through its connector
- compressor now driven by `Modelica.Mechanics.Rotational.Sources.ConstantSpeed` on
  `flange_elc`

**Result: balanced at 1153 equations / 1153 variables.** `checkModel` passes.

### New blocker — C compile failure

```
error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'
Error: Derivative of expression ...
Error: Internal error Failed to solve ...
```

OMC emits a `nominal` attribute on an Integer variable, which its own C runtime struct
does not have. Plus index-reduction trouble ("Derivative of expression", "Failed to
solve") on the closed loop.

**This is the third OpenModelica codegen defect in this library combination:**

1. M1c-2 — `SaturationProperties_external` unknown type (worked around via `Flow1DimCS`)
2. M1d — CS export failure + FMI-invalid `modelDescription.xml` (worked around via ME)
3. M1e — `INTEGER_ATTRIBUTE.nominal` on the closed loop (**open**)

> **Pattern worth naming:** all three involve OMC's handling of Integer attributes or
> external-object records from ExternalMedia. OpenModelica's support for this exact
> stack (ThermoCycle + ExternalMedia + closed loop) is fragile. Per the agreed rule the
> library decision stays closed until a workaround is tried — but if M1e needs a third
> workaround, the Dymola option deserves a deliberate revisit rather than drift.

### CORRECTION to the earlier M1e note

An earlier entry claimed a closed loop "has no external pressure datum" and would need
"an explicit reference or a receiver". **That was wrong.**

A closed loop does **not** need an external pressure boundary, and a receiver does not
establish pressure — it only adds storage. What it needs is a **defined initial
refrigerant inventory**: sufficient initial pressure/enthalpy states, or a fixed nominal
initial mass. `steadystate=false` with explicit `pstart`/`hstart` (as used) is the right
shape. **M3 later makes that inventory adjustable**; it is not a prerequisite for M1e.

### Next

1. Chase the `INTEGER_ATTRIBUTE.nominal` error — likely a `nominal` attribute on an
   Integer somewhere in the component chain; try `-d=-newInst` or locate and strip it.
2. Then convergence, with residuals read individually before adding any damping.
