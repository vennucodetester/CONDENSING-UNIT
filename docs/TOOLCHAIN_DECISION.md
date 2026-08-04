# Toolchain decision point — reached 2026-08-02

**Status: OPEN. Needs a decision from the user. Work is blocked behind it.**

The agreed rule was: *tolerate workarounds, but if a third OpenModelica defect appears,
revisit the toolchain deliberately rather than drifting into a fourth workaround.*

**That trigger has been reached.**

---

## The three defects

| # | Milestone | Defect | Status |
|---|---|---|---|
| 1 | M1c-2 | `unknown type name '..._SaturationProperties_external'` — external-object medium record passed into components | **worked around** (`Flow1DimCS`) |
| 2 | M1d | Co-Simulation export fails silently; `modelDescription.xml` emits Integer variables with `variability="continuous"`, which FMI 2.0 forbids | **worked around** (Model Exchange + `validate=False`) |
| 3 | M1e | `error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'` | **OPEN — blocking** |

**All three involve OpenModelica's handling of Integer attributes or external-object
records from ExternalMedia.** This is not three unrelated bugs; it is one fragile seam.

---

## Defect 3, precisely

The failing variable is **`comp.vaporIn.phase`** — an **Integer** field inside
ExternalMedia's `ThermodynamicState` record.

OpenModelica incorrectly includes it in a nonlinear system, then generates C code
applying a `.nominal` attribute to it. `INTEGER_ATTRIBUTE` has no such member, so the
C compile fails.

**There is nothing to strip.** Modelica does not define a `nominal` attribute on
Integer. This is not a modelling error that can be edited out of `ClosedLoopM1e.mo` —
the attribute exists only in OMC's generated C.

Accompanying errors (`Derivative of expression`, `Internal error Failed to solve`)
suggest a **separate** index-reduction problem on the closed loop. Two distinct issues
may be present.

**Do not patch the generated C.** It would be fragile, would not survive a rebuild, and
would mask the index-reduction errors, which may be a genuine model-formulation problem
that still needs solving.

---

## The decisive test

**Run `RefrigerationTrainer/ClosedLoopM1e.mo` unchanged in a second toolchain.**

Unchanged is the point — any edit confounds the result.

### Step 1 — a second OpenModelica version

| Outcome | What it proves | What it does **not** prove |
|---|---|---|
| Translates **and** simulates | A **version-specific OpenModelica defect** | Not necessarily a *regression*. That word only applies if an **older** version passes and the **current** one fails. If a **newer** version passes, it is a fix, not a regression. |
| **Same** failure | **Nothing conclusive.** | **It does NOT prove model formulation.** Both versions share the same compiler lineage and may share the same defect. |
| Fails differently | Needs individual diagnosis | — |

### Step 2 — an independent compiler (Dymola)

Required to distinguish *compiler defect* from *model formulation*. A second OMC version
**cannot** make that distinction, because it is not independent.

| Outcome | Conclusion |
|---|---|
| Translates and simulates | The defect is in OpenModelica, confirmed by an independent implementation |
| **Same** failure | **Now** model formulation is the likely explanation, and reformulating is justified |
| Fails differently | Diagnose individually |

**Only after Step 2 is reformulation justified.** Reformulating on the strength of two
OpenModelica runs would risk changing physics to work around a compiler bug that both
versions share.

---

## Options, cheapest first

### A. A second OpenModelica version — free, do this first

A different OMC release (older stable, or a nightly) can establish whether the failure is
**specific to this OMC build**, at zero licence cost. If a different version translates
it, defect 3 is a **version-specific OpenModelica defect** — call it a *regression* only
if an **older** version passes while the current one fails.

**It cannot distinguish "OMC bug" from "model formulation."** Two OMC releases share a
codebase; a shared failure is not independent evidence. That distinction needs Step 2.

**This is the recommended first step** — but note it is only *partially* decisive:

- If it **passes**, that is strong evidence of a version-specific OMC defect and the
  question is largely answered.
- If it **fails the same way**, that is **not** evidence about the model. It only rules
  out "this one OMC build". Step 2 is then required.

It also helps promote defect 1 from *likely* codegen bug toward *confirmed* (outstanding
since M1c-2) — again with the same caveat: a shared failure across two OMC versions is
not independent confirmation.

### B. Dymola — commercial. **Required for the compiler-vs-formulation distinction.**

ThermoCycle's primary development target, and — more importantly — an **independent
implementation**. A second OpenModelica version shares OMC's codebase and so cannot
distinguish a compiler defect from a model-formulation problem. Dymola can.

Needed if Step 1 is inconclusive, i.e. whenever the second OMC version fails the same
way. Requires a licence or trial.

### C. Modelon Impact — commercial, browser-based

No local install. Requires a licence.

### D. Reformulate the model

**Do not start here, and do not start after Step 1 either.** Reformulation is justified
only once an **independent** compiler (Step 2) reproduces the failure. Two OpenModelica
runs failing the same way says nothing about the model — they share a codebase.
Reformulating earlier risks changing physics to work around a compiler bug.

---

## What is ready to hand over

`modelica/RefrigerationTrainer/ClosedLoopM1e.mo` — unchanged, structurally balanced,
`checkModel` passes.

Dependencies: Modelica Standard Library 4.x · ThermoCycle (vendored, needs
`convertPackageToLibrary(ThermoCycle, Modelica, "4.1.0")` under OMC — Dymola may not
need it) · ExternalMedia 4.1.1 with CoolProp.

Runner: `modelica/run_m1e.mos`.

---

## What 1153/1153 does and does not prove

The closed loop is **structurally balanced** — equations equal variables. `checkModel`
passes.

**That is all it proves.** It says nothing about whether the model **initialises** or
**converges**. Both remain unproven, and the index-reduction errors hint that at least
one of them will need work regardless of which toolchain is used.

---

## Acceptance gate — unchanged

The banner comes down only when the closed loop **converges** and the **5 xfail tests**
in `tests/test_scenarios.py` flip to passing, in the same commit. A successful
translation in another tool does **not** by itself satisfy this gate.

---

# STEP 1 RESULT — 2026-08-02: OpenModelica 1.27.0 FAILS IDENTICALLY

**Installed side by side, no UAC**, at
`C:\Users\silam\AppData\Local\OpenModelica1270`. Both verified:
`OpenModelica v1.27.0 (64-bit)` and `OpenModelica v1.26.3 (64-bit)` — 1.26.3 intact.

`ClosedLoopM1e.mo` run **completely unchanged**. No model edits, no generated-C patching.
Installer MD5 `e82783eba174b64cc9c6e5384a4d59e5`, matching the published sum.

| | 1.26.3 | 1.27.0 |
|---|---|---|
| Structural balance | 1153 / 1153 | **1153 / 1153** |
| `checkModel` | passes | **passes** |
| `no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'` | yes | **yes** |
| `Derivative of expression` | yes | **yes** |
| `Internal error Failed to solve` | yes | **yes** |
| Simulation | fails to build | **fails to build** |

Log: `modelica/spikes/PathB/_m1e_omc1270_run.log`

## What this proves — and what it does NOT

**Proves:** the failure is **not specific to OpenModelica 1.26.3**. It is present in the
current official stable release. Defect 3 is therefore not a 1.26.3-only regression.

**Does NOT prove the model formulation is at fault.** 1.26.3 and 1.27.0 share a codebase;
a common failure is **not independent evidence**. Both may carry the same defect.

**Do not reformulate on the strength of this result.**

## Decision: ESCALATE TO DYMOLA (Step 2)

Per the agreed rule, Step 1 failing the same way means escalate to an **independent
compiler** — the only thing that can separate *compiler defect* from *model formulation*.

Dymola is not installed on this machine and requires a licence or trial. **This is a
procurement decision for the user.**

Hand over unchanged: `modelica/RefrigerationTrainer/ClosedLoopM1e.mo`
(+ `Flow1DimCS.mo`, `WallTemperatureSource.mo`), ThermoCycle (vendored),
ExternalMedia 4.1.1 + CoolProp 7.2.0.
Note: Dymola may not need `convertPackageToLibrary`.

**Still not permitted before Step 2 completes:** reformulating the model, or patching
generated C.

## Side benefit

Defect 1 (M1c-2, `SaturationProperties_external`) can now also be re-checked under
1.27.0 — worth doing while 1.27.0 is installed, though the same
"not-independent" caveat applies to whatever it shows.

---

# AMENDMENT — 2026-08-02: STEP 2 NO LONGER REQUIRED **FOR DEFECT 3**

Defect 3 is **reproduced in a 17-equation model**: ExternalMedia + MSL only, no
ThermoCycle, no closed loop, no compressor, no heat exchanger. A `ThermodynamicState`
forced into a nonlinear block by two deliberately meaningless implicit relations still
emits `.nominal` on the Integer `phase`, byte-identical to the `comp.vaporIn.phase`
failure. **There is no model formulation left to blame.**

Controls, one variable at a time:

| | | |
|---|---|---|
| `MinRepro` | state record in a nonlinear block | ❌ fails |
| `VariantA` | phase pinned: `setState_ph(p, h, 1)` | ❌ **fails identically** |
| `VariantB` | no state record; scalar `density_ph` / `specificEntropy_ph` | ✅ builds and simulates |

`VariantA` is the discriminating one: the defect is not about the *value* of `phase`.
It is that OMC drags the record into the nonlinear system at all.

Evidence: `modelica/spikes/PhaseNominal/`.

## What this changes

**Step 2 (Dymola) is no longer required for defect 3.** An independent compiler cannot
now add anything — the reproducer already excludes the model.

Two further reasons the escalation was weaker than it looked:

1. **A passing Dymola would not have helped.** M1d's FMU pipeline is OMC-based, so this
   has to be solved for OMC regardless of what Dymola reports.
2. The correct route for a confirmed codegen defect is an **upstream bug report**, which
   `MinRepro.mo` supports as-is.

## What this does NOT change

- **The index-reduction errors are untouched by this result.** `Derivative of expression`
  and `Internal error Failed to solve` remain **undiagnosed**. They may still be a genuine
  formulation problem in our closed loop. **Dymola remains a legitimate independent check
  on those** — the procurement decision is narrowed, not closed.
- **The acceptance gate is unchanged.** The banner comes down only when the closed loop
  **converges** and the **5 xfail tests** in `tests/test_scenarios.py` flip to passing, in
  the same commit. Nothing here moves it.
- **Reformulating the model and patching generated C remain off-limits.**
- `ClosedLoopM1e.mo` stays **unchanged** as the handover artifact.

## Revised next step

**File the OpenModelica bug** with `MinRepro.mo`. Then diagnose the index reduction on
`Cells.p` — the real M1e question. Component rewrites are **on hold**: the trigger needs
no compressor, so rewriting components may aim at the wrong target.
