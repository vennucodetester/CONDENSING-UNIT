# Licenses

Licenses must be completed as dependencies are vendored or installed.

Current runtime dependencies observed locally:

- Python 3.11.9
- PyQt6 6.11.0
- numpy 2.4.6
- FMPy 0.3.22
- OpenModelica 1.26.3 generated FMI runtime (redistribution review still required)
- AixLib 2.1.1, 3-clause BSD; vendored license retained in its source tree
- ThermoCycle commit `b4f16c0b9dc16ffd05d24b2980ff15533aa36cc9`;
  vendored license retained in its source tree

Before external distribution, review the generated FMU contents and every transitive
library license. Internal development use does not replace that release gate.
