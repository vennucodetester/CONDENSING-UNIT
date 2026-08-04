# Upstream bug report — FILED 2026-08-02

**Filed as:** https://github.com/OpenModelica/OpenModelica/issues/16169
**Account:** vennucodetester

Everything below the line is the issue body as submitted, kept here so the
repo carries the report even if the tracker moves.

---

## Title

Codegen: `.nominal` emitted for Integer iteration variable in nonlinear system — `no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'`

## Summary

When an Integer variable becomes an iteration variable of a nonlinear system, the
generated C reads `.attribute.nominal` on it. `INTEGER_ATTRIBUTE` has no `nominal`
member, so the generated code does not compile. `min` and `max` are emitted correctly —
only `nominal` is missing.

This is reachable from ordinary user code: an `ExternalMedia` `ThermodynamicState`
record contains `Integer phase`, and if the record equation lands in a nonlinear block
the Integer is dragged in with the Reals.

## Environment

| | |
|---|---|
| OpenModelica | v1.27.0 (64-bit), Windows 11 |
| Also affects | v1.26.3 (64-bit) — identical failure |
| ExternalMedia | 4.1.1 |
| CoolProp | 7.2.0 |
| MSL | 4.0.0 |

## Steps to reproduce

`MinRepro.mo`:

```modelica
model MinRepro
  package Med = ExternalMedia.Media.CoolPropMedium(
      mediumName = "propane",
      substanceNames = {"propane"},
      ThermoStates = Modelica.Media.Interfaces.Choices.IndependentVariables.ph);

  Med.ThermodynamicState st "state record; contains Integer phase";
  Real p(start = 4.85e5, nominal = 1e5);
  Real h(start = 4.20e5, nominal = 1e5);
equation
  st = Med.setState_ph(p, h);
  // Two implicit relations that force p and h (and therefore every field of st)
  // into one nonlinear block. Physically meaningless on purpose.
  p = 4.85e5 + 1.0e3*(Med.density(st)      - 11.0);
  h = 4.20e5 + 1.0e2*(Med.specificEntropy(st) - 2000.0);
end MinRepro;
```

```
loadModel(Modelica, {"4.0.0"}); loadModel(ExternalMedia);
loadFile("MinRepro.mo");
simulate(MinRepro, stopTime=1, tolerance=1e-6);
```

`checkModel` passes: 17 equations, 17 variables.

## Actual result

`simulate` reports only `Failed to build model: MinRepro`. Running the generated
makefile directly shows the real cause:

```
MinRepro_02nls.c:160:87: error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'
  160 |   sysData->nominal[i] = data->modelData->integerVarsData[2] /* st.phase */ .attribute.nominal;
      |                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ^
```

Surrounding context in `initializeStaticDataNLS*` — `min` and `max` resolve, `nominal`
does not:

```c
/* static nls data for st.phase */
sysData->nominal[i] = data->modelData->integerVarsData[2] /* st.phase */ .attribute.nominal;
sysData->min[i]     = data->modelData->integerVarsData[2] /* st.phase */ .attribute.min;
sysData->max[i++]   = data->modelData->integerVarsData[2] /* st.phase */ .attribute.max;
```

## Expected result

Either the model builds, or a diagnosable Modelica-level error is reported. Generated C
that does not compile is the wrong outcome in both cases.

Two candidate fixes, in the reporter's order of preference:

1. **Do not place Integer variables in nonlinear-system iteration variables.** The record
   equation `st = setState_ph(p, h)` expands field-by-field; `phase` is a discrete label
   with no meaningful continuous residual and does not belong in the iteration set.
2. If (1) is impractical, **emit a default nominal for Integer iteration variables**
   rather than reading a member that does not exist.

## Additional observations

**Pinning the phase does not help.** `setState_ph(p, h, 1)` fails identically — `phase`
is an *output* of the external function, so an input argument cannot constant-fold it
away. (Reproducer: `VariantA.mo`.)

**Avoiding the state record does help.** Substituting the scalar forms —
`density_ph(p, h)` and `specificEntropy_ph(p, h)`, the same function compositions —
builds and simulates. (Reproducer: `VariantB.mo`.) This is the workaround in use, but it
gives up medium-agnosticism, since `specificEntropy_ph` is an ExternalMedia extension
rather than part of the `Modelica.Media` base interface.

**The new backend does not have this defect — it looks old-backend-only.** Building
`MinRepro` with `--newBackend` on the same 1.27.0:

| | old backend | `--newBackend` |
|---|---|---|
| `phase` in the generated NLS | yes, an iteration variable | **absent entirely** |
| `.attribute.nominal` emitted | 2× | **0×** |
| C compiles | **no** | **yes** |

So the new backend already does the right thing: it keeps the Integer out of the
iteration set, which is candidate fix (1) above. That may make this straightforward to
localise in the old backend's NLS static-data emitter.

Two caveats, so this is not overstated. The `--newBackend` executable is produced but
exits without writing a result file, and `omc` warns it cannot locate `ExternalMediaLib`
— that looks like a separate new-backend ExternalMedia linkage problem, and we have not
chased it. And on our full model `--newBackend` stops earlier still, at
`NBResolveSingularities.indexReduction failed because slicing during index reduction is
not yet supported`. **`--newBackend` is therefore not a usable workaround for us today** —
it is offered here only as evidence about where the defect lives.

**Reporting quality note, offered constructively.** `simulate()` surfaces only
`Failed to build model`; the actual C compiler error requires invoking the generated
makefile separately. Surfacing the compiler's stderr on build failure would have cut the
time to characterise this from hours to minutes.
