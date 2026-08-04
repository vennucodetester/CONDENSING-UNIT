# M1e defect 3 — minimal reproducer for `INTEGER_ATTRIBUTE.nominal`

**Result: defect 3 is a confirmed OpenModelica codegen defect.** Reproduced in a
17-equation model with **no ThermoCycle, no closed loop, no compressor, no heat
exchanger** — ExternalMedia + MSL only.

This answers the question `docs/TOOLCHAIN_DECISION.md` was parked on, **without Dymola**.
A 17-equation model has no formulation to blame.

Run from the `modelica/` directory:

```bash
omc spikes/PhaseNominal/run_phase_nominal.mos
```

Verified 2026-08-02 on **OpenModelica v1.27.0 (64-bit)**, ExternalMedia 4.1.1,
CoolProp 7.2.0.

---

## The three models — one variable at a time

| Model | Difference | Result |
|---|---|---|
| `MinRepro` | `ThermodynamicState` declared as a component variable, inside a nonlinear block | ❌ **FAIL** — C compile error |
| `VariantA` | identical, but phase pinned: `setState_ph(p, h, 1)` | ❌ **FAIL** — *identical* error |
| `VariantB` | same maths, **no state record**; scalar `density_ph` / `specificEntropy_ph` | ✅ **PASS** → `VariantB_res.mat` |

Transcript: `_phase_nominal_run.log` · C compile errors: `_c_compile_error.log` ·
Offending generated C, kept verbatim: `MinRepro_02nls.c` (lines 160 and 404) ·
`VariantB_res.mat` is VariantB's result file, kept as proof it simulated.

All other build artifacts are removed after each run; only `.mo`, `.mos` and the
evidence files above are kept.

### The failure

```
MinRepro_02nls.c:160:87: error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'
  160 |   sysData->nominal[i] = data->modelData->integerVarsData[2] /* st.phase */ .attribute.nominal;
```

Byte-identical to the `comp.vaporIn.phase` failure in `ClosedLoopM1e`.

---

## What this establishes

**Established:**

- **Defect 3 is an OpenModelica codegen defect, confirmed.** OMC's nonlinear-system
  static-data emitter reads `.attribute.nominal` for every iteration variable.
  That member exists on `REAL_ATTRIBUTE` and not on `INTEGER_ATTRIBUTE`, so any
  Integer reaching an NLS emits C that cannot compile. `min` and `max` are fine —
  only `nominal` is missing.
- **The trigger is narrow and now known exactly:** declare an ExternalMedia
  `ThermodynamicState` as a *component variable*, and let it land in a nonlinear
  block. The record equation expands field-by-field, dragging `Integer phase` in
  with the Reals.
- **Pinning the phase does not help.** `state.phase` is an *output* of the external
  C call, so passing `phase=1` as an input cannot constant-fold it away. `VariantA`
  fails identically. Worth recording — it is the first thing anyone tries.
- **Not declaring the record does help.** `density(setState_ph(p,h))` and
  `density_ph(p,h)` are the same function composition; `VariantB` builds and
  simulates. Function-local `$TMP` records created by inlining are *outputs* of a
  call, not iteration variables, so they do not trigger it.

- **The defect looks old-backend-only.** Under `--newBackend`, `phase` does not appear in
  the generated NLS at all, `.attribute.nominal` is emitted 0× (vs 2×), and the C
  compiles. Evidence: `_newbackend_minrepro.txt`. ⚠️ **This is not a workaround** — the
  resulting executable does not run (separate ExternalMedia linkage problem), and on the
  full model `--newBackend` stops earlier at index reduction.

**NOT established:**

- That `VariantB`'s approach makes `ClosedLoopM1e` build. It removes *this* defect;
  the index-reduction problem is separate and still open (see below).
- Anything about Dymola. This says the defect is OMC's; it does not say Dymola
  would pass.

---

## Consequence for `ClosedLoopM1e` — ONE trigger site

⚠️ **CORRECTED 2026-08-02.** This section previously claimed there were three trigger
sites ("landmines") and that every component declaring a `ThermodynamicState` was one.
**That overstated it.** An earlier version of the table also claimed `Flow1DimCS`
declares no `ThermodynamicState` and said that was why it ran standalone. **Both halves
were wrong.** `Cell1Dim.mo:85` declares `Medium.ThermodynamicState fluidState`, so every
cell has one. The corrected rule:

> **Declaring the record is necessary but not sufficient. It fires only when the record
> lands in a *nonlinear block*.**

Checked directly against the closed loop's generated NLS
(`RefrigerationTrainer.ClosedLoopM1e_02nls.c`) — **only `comp.vaporIn` is in it:**

| Component | Declaration | In the NLS? |
|---|---|---|
| `comp.vaporIn` | `Compressor.mo:50` | ✅ **yes** — the reported failure |
| `comp.vaporOut` | `Compressor.mo:52` | ❌ no |
| `txv.fluidState` | `Valve.mo:50` | ❌ no |
| `evap`/`cond` cells | `Cell1Dim.mo:85` | ❌ no |

Why the difference: in a cell, `p` and `h` are dynamic **states**, so `setState_ph(p,h)`
is an explicit forward evaluation. In the compressor, `p_su` and `h_su` are algebraic
unknowns coupled round the loop, so the same call goes implicit and drags the record —
Integer included — into the iteration set.

**Consequence: there is one trigger site, not three.** The earlier "three landmines"
framing overstated the blast radius.

The replacements all exist in ExternalMedia 4.1.1
(`Media/BaseClasses/ExternalTwoPhaseMedium.mo`):

| Record form | Scalar form | Line |
|---|---|---|
| `density(setState_ph(p,h))` | `density_ph(p, h)` | 392 |
| `specificEntropy(setState_ph(p,h))` | `specificEntropy_ph(p, h)` | 461 |
| `specificEnthalpy(setState_ps(p,s))` | `specificEnthalpy_ps(p, s)` | 771 |

⚠️ **Trade-off, stated honestly:** `specificEntropy_ph` is a plain `replaceable
function` — an ExternalMedia *extension*, not part of the `Modelica.Media` base
interface. A component written this way is no longer medium-agnostic. `density_ph`
and `specificEnthalpy_ps` are `redeclare replaceable` and so are fine.

---

## The second problem (§6) — STILL UNDIAGNOSED. A hypothesis was tried and WITHDRAWN.

⚠️ **Read this before reusing anything below.** On 2026-08-02 this section briefly
claimed the `Derivative of expression` errors were caused by redundant per-cell pressure
states, "confirmed from source". **That claim was wrong and is withdrawn.**

What was right: `Cell1Dim.mo:88` does give every cell its own `p`, `:150`/`:160`/`:163`
do differentiate it, and `:204-205` (`p = OutFlow.p; InFlow.p = p`) do weld the chain to
a single pressure.

**What that misses: OMC's alias elimination already collapses them.** The compiled state
vector (`RefrigerationTrainer.ClosedLoopM1e_info.json`) is:

```
cond.Cells[1..5].h   evap.Cells[1..5].h   drive.phi
cond.Cells[1].p      evap.Cells[5].p          <- ONE pressure per exchanger
```

13 states, **two** of them pressures. The model is *already* in the "one pressure state
per exchanger" form. **There is no redundancy to remove and no model change is warranted
on this basis.**

The `--newBackend` `Sliced Dummies` message reflects **the new backend's own** array
representation plus its unimplemented slicing during index reduction — a WIP limitation.
It is not evidence about our model, and reading it as such was the error.

**What is actually known.** `Differentiate.mo` and `ExpressionSolve.mo` serve **symbolic
Jacobian generation** as well as index reduction. The messages fire on ExternalMedia
paths lacking derivative annotations, on a differentiation w.r.t. an array
(`evap.Cells.Q_tot`), and on `drive.phi` from `ConstantSpeed`. **They did not stop C
being generated** — the build died later at the C compiler, on defect 3. Whether they
matter at runtime is unknown until a build succeeds.

Raw evidence below, kept as originally captured.

Reproduce: `omc spikes/PhaseNominal/run_m1e_newbackend.mos` from `modelica/`
(runs `ClosedLoopM1e` **unchanged**). Transcript: `_newbackend_errors.txt`.

Running `ClosedLoopM1e` **unchanged** on OMC 1.27.0's `--newBackend` fails earlier
and differently:

```
Error: Internal error NBResolveSingularities.indexReduction failed because
       slicing during index reduction is not yet supported.
Sliced Dummies: Real[5] cond.Cells.p   slice: {0, 1, 2, 3}
                Real[5] evap.Cells.p   slice: {0, 1, 2, 3}
```

**The hypothesis:** each `Cell1Dim` carries its own `der(p)` state while
`InFlow.p = OutFlow.p` chains all five to a common pressure — 4 of 5 per exchanger
would be redundant, which would be textbook high index. ❌ **SUPERSEDED — see the
correction above. The compiled model already holds one pressure per exchanger; this
reading was wrong.** The old backend resolves it by dummy-derivative selection and
logs the `Derivative of expression ... is non-existent` noise while doing so; the
new backend refuses because array slicing is unimplemented (it is WIP — not a
viable route today).

Confirming: `../PathB/_flow1dimcs_run.log` contains **zero** such messages. The
standalone coil's pressure is set by a boundary source, so the redundancy never
arises. **It is specific to closing the loop.**

**Note on `THE PROBLEM.md` §6:** stage 2 *did* complete — C was generated, which is
how we got a C compiler error at all. Those messages are logged as `Error` but were
non-fatal to translation. They may still corrupt the Jacobian at runtime, so they
are not dismissible, but "we cannot see whether stage 2 would have worked" is
stronger than the evidence supports.

---

## Regenerating the C compile error

`omc` reports only `Failed to build model` — the C error is not in its log. To see it:

```bash
omc spikes/PhaseNominal/run_phase_nominal.mos
make -f MinRepro.makefile
```

`make` must come from the OMC MSYS toolchain, e.g.
`AppData/Local/OpenModelica1270/tools/msys/{ucrt64,usr}/bin` on `PATH`.

---

## Next

1. **File upstream.** `MinRepro.mo` is ~15 lines and needs only ExternalMedia — it is
   a clean OpenModelica ticket as-is.
2. **Reconsider the Dymola procurement decision.** It can no longer tell you anything
   about defect 3. It would still be an independent check on the *index reduction*.
   Note also that M1d's FMU pipeline is OMC-based, so this has to be solved for OMC
   regardless of what Dymola says.
3. ⏸️ **Record-free `CompressorEM` / `ValveEM` are ON HOLD.** The reproducer needs no
   compressor at all, so rewriting components may aim at the wrong target. Prefer the
   upstream report plus whatever OMC-side workaround it surfaces. If it is ever revisited:
   local to `RefrigerationTrainer`, leaving vendored ThermoCycle untouched and
   `ClosedLoopM1e.mo` unchanged as the handover artifact — and note the medium-agnosticism
   trade-off above.
4. **The index reduction on `Cells.p`** — the real M1e question, and **undiagnosed**.
   Nothing in this spike bears on it.
