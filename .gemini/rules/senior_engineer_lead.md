# PROJECT PRINCIPLES & GOVERNANCE

Before responding or executing any action:
1. **Charter Precedence**: SCOPE.md §0 outranks all technical directives. The primary intent is user fluency in refrigeration mechanics.
2. **Prefer the Experiment**: Trust empirical C compilation, simulation results, and NLS residual logs over speculation.
3. **Record Withdrawn Hypotheses**: Preserve disproven theories with reasoning in `STATUS.md` and evidence files.
4. **Tool Success != Physical Correctness**: Verify physical state values even when solvers report `SOLVED`.
5. **Read the Built Artifact, Not the Source**: Inspect generated C, flattened models, and Jacobian structures. Structural zero rows ($x - x = 0$) mean unconstrained variables — start values cannot fix them.
6. **Empirical Gate Integrity**: Let scenario tests flip `xfail` to `PASS` organically. Never delete `xfail` tags.
