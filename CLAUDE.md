# CLAUDE.md

Read `ENGINEERING_DIRECTIVES.md` first — it outranks this file. `SCOPE.md` §0 outranks
both. `HANDOFF.md` is the map of current state; `HANDOFF.md` §0 is how to work here.

## Token discipline is the binding constraint

Standing user instruction: **"make every token count."** Context, not wall clock, decides
how much gets done. The full rules are in `HANDOFF.md` §0; the ones that matter most:

- Always end FMU / `fmpy` commands with `2>/dev/null` and pipe through `tail`/`grep`.
- Never let `./gate.sh` print in full — `--repeat 3`, or `| grep -E "built ok|FAILED"`.
- Prefer `sed -i` or a small `python -` heredoc for `.mo` value changes; `Edit`/`Write` can
  echo a whole file back. Reserve `Edit` for comment blocks.
- Do not re-read a file already read. Do not re-verify a green gate.
- Print **derived** numbers, not raw data.
- Parameters annotated `Evaluate=false` sweep through `start_values` with **no rebuild and
  no gate cycle**. This is the single biggest efficiency lever in the project.

## Model routing — send grunt work to the cheap tier

There is no automatic per-message model router; the main thread's model is fixed for a
session. Delegation to a subagent with a pinned model is the mechanism. Two are defined:

| agent | model | use for |
|---|---|---|
| `data-grunt` | haiku | spreadsheet/CSV extraction, format conversion, running a named command and reporting named numbers |
| `script-grunt` | sonnet | writing a self-contained script from a spec that already states every input, output, formula and threshold |

**When delegation pays.** A subagent starts *cold* and re-derives context the session
already has. It wins only when the task is self-contained, output-heavy, and mechanically
specified — parsing a workbook, writing a standalone extractor, bulk text edits. Briefing a
cheap agent on the trap analysis, the calibration provenance, or the TXV history costs more
than doing the work directly.

**Delegate only when the acceptance check is mechanical and written first.** Learned the
hard way on 2026-08-06: the first delegated extraction needed three correction round-trips,
all of them spec defects rather than model failures (wrong column count, wrong timestamp
column, malformed timestamp). If you cannot state the pass condition before spawning — *"the
header set must equal `fileshare/data 2.002.csv` exactly"* — you do not yet understand the
task well enough to hand it off, and each round-trip costs more than doing it yourself.

**Note:** agent definitions in `.claude/agents/` are picked up at session start. Within a
session that predates them, use the per-call override instead:
`Agent(subagent_type="general-purpose", model="haiku")`, with the prohibitions pasted into
the prompt.

**What never gets delegated.** Anything that decides what a number *means*. Every expensive
mistake in this project has been interpretive, not mechanical: calibrating `k_v = 0.0588`
against a faulty transducer, five false "6/6 PASSED" reports from a stale FMU, the TXV gain
deadlock that pinned coil superheat at 8.19 K. Parameter choices, steadiness criteria,
whether a result is in band, and any edit to a `.mo` file, a test, or `HANDOFF.md` stay with
the caller.

## Non-negotiables

- **Never edit a test to make it pass.** If an assertion fails, the physics or the claim is
  wrong — fix one of those.
- **Never run `pytest` directly after editing a `.mo`.** A staleness guard hard-fails,
  because a stale FMU produced five false "6/6 PASSED" reports here.
- **One green gate is not evidence.** The gate once returned 4/6, 0/6, 6/6, 0/6 on a
  byte-identical FMU. Use `bash ./gate.sh --repeat 3`.
- **State predictions before running, and score them.** The failed predictions have been the
  most useful output of this project.
- **Never fit a soft parameter to close a gap** without first ruling out a structural bound.
  Persistent insensitivity to a parameter that physics says should matter is itself the
  diagnostic.
