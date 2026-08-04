# The gate was not reproducible — 2026-08-04

**This outranks any calibration number recorded before today.** For an unknown period,
`./gate.sh` has been reporting a pass/fail mix that varies between runs of a
**byte-identical FMU**. Every "N/6 passing" claim in this repository predating this file
is therefore a single sample of a random variable, not a measurement — including the
"6/6 passing" baseline in HANDOFF.md §1.

## What was observed

FMU `f0dee524429c429942ec9bc07907a9fe` (`mdot_nom = 0.006`), unchanged on disk,
md5-verified between runs. Six consecutive invocations of the same test file:

| run | tests passed |
|---|---|
| 1 | 4 / 6 |
| 2 | 0 / 6 |
| 3 | 6 / 6 |
| 4 | 0 / 6 |
| 5 | 6 / 6 |
| 6 | 6 / 6 |

Failing runs abort in ~11 s; passing runs take ~60 s. The failure is always

```
CVode error (code -8) ... At t = 4.48749, the right-hand side routine failed
LOG_ASSERT | Solving non-linear system 1289 failed at time=4.50630069555033
```

## It is per-process, not per-simulation

`scratch/probe_determinism.py` separates the two:

- **four calls inside one process** — all four identical, all succeeded;
- **one call in each of three processes** — crash, crash, success.

So the outcome is **fixed when the process starts** and then holds for every
simulation in that process. That rules out state leaking between simulations, and rules
out the `lru_cache` in the test file. It is consistent with the nonlinear solver sitting
exactly on its convergence boundary, where floating-point details that vary per process
(address-space layout, x87/SSE control word, library load order) decide whether the
Newton iteration recovers.

Ruled out by direct check, do not re-derive:

| candidate | verdict |
|---|---|
| stale FMU (the project's historic failure) | **no** — md5 verified identical across runs |
| pytest `addopts`, `--lf`, random ordering | **no** — no pytest config exists in the repo |
| CoolProp TTSE/bicubic table cache on disk | **no** — no `~/.CoolProp` exists; the FMU logs `TTSE is off`, `BICUBIC is off` |
| stray files written into the working tree | **no** — only `.pytest_cache` changes across a run |
| `pow()` of a negative mass flow in the U correlation | **no** — ThermoCycle guards it as `(1e-6 + M_dot^2)^0.4`, sign-safe and bounded away from zero |

## What system 1289 is

`RefrigerationTrainer.ClosedLoopM1eCS_02nls.c` — equation 1289 is
`evap.Cells[4].qdot = evap.Cells[4].Q_tot / evap.Cells[4].Ai`, which sits inside the
torn nonlinear block spanning equations **1266-1312**: the evaporator refrigerant side,
all five cells, together with the `U = Unom*(M_dot/Mdotnom)^0.8` heat-transfer
correlation. Raising the coil coefficients (lowering `mdot_nom`) makes this block
harder, which is why `mdot_nom` 0.0035, 0.00306 and 0.004 all failed here.

## The suspected cause, and the fix under test

`p_evap_start` was **4.85e5 Pa = Tsat +0.72 C**, while the loop settles near -28 C
(1.65-1.9 bar). The evaporator was started 30 K too warm at 2.5x its settled pressure,
and the violent collapse over the first few seconds is what the solver could not
integrate. `p_cond_start` needed no change (1.52e6 = 44.58 C vs the measured 44.82 C).

Changed together, as one coherent initial state at the measured operating point:

| | was | now |
|---|---|---|
| `p_evap_start` | 4.85e5 | 2.099e5 (Psat at the measured -24.17 C) |
| `evap.Tstart_inlet` / `Tstart_outlet` | 268.15 / 274.15 | 248.99 / 250.25 |
| `evap.hstart` | 2.90000e5 -> 5.87903e5 | 2.95116e5 -> 5.49227e5 |
| `comp.T_su_start` | 283.15 | 271.86 |

An initial condition does not set an equilibrium, so **this must not move the settled
answer**. If it does, something else is wrong.

## The standing rule this creates

A single green gate no longer means anything. **Repeat the gate until it has passed
in separate processes, or the result is not evidence.** Use:

```bash
for i in 1 2 3; do python -m pytest tests/test_scenarios.py -v 2>&1 | grep -cE " PASSED"; done
```

Three identical counts is the minimum bar. Anything else is a flaky gate, and the
physics conclusion drawn from it must be withheld.
