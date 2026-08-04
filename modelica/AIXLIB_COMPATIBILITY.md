# AixLib compatibility patch

AixLib 2.1.1 commit `b9d4d88d1fb38511d2af0958f11855c14064841a` is vendored.
OpenModelica 1.26.3 rejects name lookup through the partial package
`Modelica.Media.Interfaces.PartialTwoPhaseMedium.FluidConstants` in the selected R290
Horner medium. The local one-line patch references the underlying public record type
directly as `Modelica.Media.Interfaces.Types.TwoPhase.FluidConstants`.

No coefficients, property equations, validity limits, or physical behavior were
changed. Re-test this patch whenever AixLib or OpenModelica is upgraded.
