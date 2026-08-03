# ENGINEERING DIRECTIVES — PROJECT PRINCIPLES & GOVERNANCE

**Precedence Notice:** This document serves **SCOPE.md §0 (The Charter)**, which outranks every other file in this repository. If any directive or rule here conflicts with the Charter, **the Charter wins**.

---

## 1. CORE OPERATING PRINCIPLES

1. **Prefer the Experiment:**
   Empirical compilation, simulation, and execution results beat documentation, design docs, or theoretical speculation every time. When facing uncertainty, build the minimal reproducer (`.mo` / `.mos`) and let the toolchain settle the question.

2. **Record Withdrawn Hypotheses (Do Not Delete Them):**
   When a diagnostic hypothesis is disproven by empirical evidence (e.g., redundant `Cells.p` states, sign hypothesis on `m_dot`), record the disproof and reasoning clearly. Preserving disproven hypotheses prevents re-deriving already-explored dead ends.

3. **A Tool Reporting Success is Not Proof of Correctness:**
   Never treat a solver's `SOLVED` status as proof of physical validity. Non-linear solvers can converge on non-physical roots (e.g., enthalpies 3× outside propane's phase envelope). Always inspect physical state values and residual magnitudes.

4. **Evidence Must Land in the Repository:**
   Any script, log, C-code extract, or minimal reproducer cited as proof must be committed to the repository (e.g., `modelica/spikes/`). Uncommitted scratchpad code is not evidence.

5. **Budget Separate OMC Capture Steps:**
   OpenModelica frequently under-reports build or initialisation failures (e.g., returning only `Failed to build model` or silent `.mos` script errors). Budget a separate capture step invoking `make -f <Model>.makefile` directly with the OMC toolchain to extract raw C compiler tracebacks.

6. **Read the Built Artifact, Not the Source:**
   Before forming a diagnostic hypothesis, inspect what the compiler actually produced — generated C code, the flattened model, Jacobian structure, and residual equations. Source code tells you what was written; only the built artifact tells you what will run. Both disproven hypotheses in this project were disproven by reading the built artifact. In particular: a structural zero row ($x - x = 0$ on a degenerate branch) means the variable is unconstrained — start values, damping, and homotopy cannot fix it, and homotopy will mask the defect.

7. **In-Equation Assertions Check the Search, Not Just the Answer:**
   An in-equation `assert(expr)` is evaluated during every intermediate Newton-Raphson line-search step, not only at accepted solver states. Un-guarded in-equation assertions will trip on non-physical trial iterates during initialisation. Guard assertions using `if not initial() then` or `when` conditions so initialisation line searches can take trial steps without aborting on intermediate un-converged iterates.

---

## 2. EMPIRICAL GATE INTEGRITY

1. **Warning Banner Gate:**
   The UI demo warning banner in `app.py` is removed **only** after closed-loop convergence is achieved AND all 5 scenario tests in `tests/test_scenarios.py` flip to passing on their own.

2. **Test Suite Integrity:**
   Never delete `xfail` tags manually to claim milestone completion. The scenario tests flip organically when valid physical loop equations land.

3. **Milestone Boundary Discipline:**
   Respect interface boundaries across project milestones. Evaluate single-circuit M1e models against single-circuit contracts, leaving multi-circuit contract fields (`m_dot_circuit_kg_s_1/2`, `txv_saturated`) to M2 and M4 where they belong.
