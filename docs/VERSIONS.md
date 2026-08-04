# Versions

| Item | Version / status |
|---|---|
| Python | 3.11.9 |
| PyQt6 | 6.11.0 |
| numpy | 2.4.6 |
| scipy | installed 2026-08-02 (result-file inspection) |
| CoolProp (Python) | installed 2026-08-02 (independent property cross-checks only — **not** the model's property source) |
| pytest | installed 2026-08-02 |
| OpenModelica | 1.26.3 (64-bit) |
| Modelica Standard Library | **4.1.0** — auto-substituted by OMC when 4.0.0 is requested |
| FMI export target | **2.0 Model Exchange, win64** (changed from Co-Simulation 2026-08-02 — OMC CS export fails; see PHASE0_RESULT M1d) |
| FMPy | 0.3.22 |
| **ExternalMedia** | **4.1.1** — installed 2026-08-02 via `installPackage(ExternalMedia, "4.1.1", exactMatch=false)`. Ships **prebuilt win64 binaries**; no compiler toolchain required. |
| **CoolProp (inside ExternalMedia)** | **7.2.0** — bundled with ExternalMedia 4.1.1. **This is the model's property source.** |
| ThermoCycle | commit `b4f16c0b9dc16ffd05d24b2980ff15533aa36cc9` |
| AixLib | 2.1.1, commit `b9d4d88d1fb38511d2af0958f11855c14064841a` |

## Notes

**ExternalMedia install location**
`C:\Users\silam\AppData\Roaming\.openmodelica\libraries\ExternalMedia 4.1.1\`
Binaries at `Resources/Library/win64/ExternalMediaLib.dll` (and a `vs2022/` variant).

**Two CoolProps, different jobs — do not confuse them.**
- **CoolProp 7.2.0 inside ExternalMedia** is the *physics* property source used by the
  Modelica model.
- **CoolProp for Python** is used only for independent cross-checks of model output
  and for data-side derived quantities. It must never become a second physics path.
- If the p-h diagram is drawn with the Python CoolProp while the model uses the
  ExternalMedia one, verify they agree (§10.3) — a mismatch will read as a physics bug.

**ThermoCycle MSL version**
ThermoCycle declares `uses(Modelica(version="3.2.1"))`. OMC substitutes MSL 4.1.0 and
warns. `convertPackageToLibrary(ThermoCycle, Modelica, "4.1.0")` is applied **in memory
at load time** by `modelica/spikes/PathB/run_pathB.mos`; **the vendored source is never
modified.** Re-verify this conversion whenever OpenModelica or ThermoCycle is upgraded.

**AixLib status**
Retained only for the existing `R290PropertySmoke` artifact and as a property
cross-check reference. It is **no longer the media source** — see SCOPE §3.3. The
local compatibility patch is documented in `modelica/AIXLIB_COMPATIBILITY.md`.
