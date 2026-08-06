#!/bin/bash
# THE ONLY SUPPORTED WAY TO PRODUCE A GATE RESULT.
#
# Do not run `pytest tests/test_scenarios.py` directly after editing a .mo file.
# Four separate "6/6 PASSED" reports in this project were produced against an FMU
# that predated the edits being reported on; twice the source did not even compile.
#
# This script: rebuilds -> proves the artifact actually changed -> installs -> gates.
# It fails loudly on the two OMC silent failures (empty FMU path, unchanged md5).
set -u
R="$(cd "$(dirname "$0")" && pwd)"
cd "$R/modelica"
OLD=$(md5sum ClosedLoopM1eCS.fmu 2>/dev/null | cut -d' ' -f1)
"/c/Users/silam/AppData/Local/OpenModelica1270/bin/omc.exe" build_closed_loop_fmu.mos > _b.log 2>&1
P=$(grep -o "@@FMU=[^@]*@@" _b.log | sed 's/@@FMU=//;s/@@//')
if [ -z "$P" ]; then
  echo "!! BUILD FAILED - OMC returned an empty FMU path."
  echo "!! NOTE: checkModel prints 'completed successfully' even when the model is"
  echo "!!       over-determined. Trust the equation counts, not the status line."
  grep -o "has [0-9]* equation(s) and [0-9]* variable(s)" _b.log | head -1
  head -c 600 _build_closed_loop_fmu.log
  exit 1
fi
NEW=$(md5sum ClosedLoopM1eCS.fmu | cut -d' ' -f1)
[ "$OLD" == "$NEW" ] && { echo "!! FMU UNCHANGED (md5 $NEW) - stale artifact, aborting"; exit 1; }
echo "built ok: md5 $NEW"
cd "$R" && cp modelica/ClosedLoopM1eCS.fmu fmu/RefrigerationTrainer.fmu
# ---------------------------------------------------------------------------
# --repeat N : run the suite N times in SEPARATE PROCESSES and print one line.
#
# WHY: the gate once returned 4/6, 0/6, 6/6, 0/6 on a BYTE-IDENTICAL FMU
# (docs/NONDETERMINISM.md), so "one green gate is not evidence" is a standing rule.
# Proving repeatability used to cost three commands and a wall of output, which this
# project cannot afford (HANDOFF.md section 0). Now it costs one command and one line.
# Separate processes are the point -- the nondeterminism did not reproduce in-process.
# ---------------------------------------------------------------------------
REPEAT=1
[ "${1:-}" = "--repeat" ] && REPEAT="${2:-3}"

if [ "$REPEAT" -gt 1 ]; then
  # Count the scenario tests rather than hardcoding, so adding one does not silently
  # turn the repeat check into a no-op. (Was hardcoded 6; a 7th test was added 2026-08-06.)
  NTESTS=$(grep -cE "^    def test_" tests/test_scenarios.py)
  OK=0
  RESULTS=""
  for i in $(seq 1 "$REPEAT"); do
    C=$(python -m pytest tests/test_scenarios.py -v 2>/dev/null | grep -cE " PASSED")
    RESULTS="$RESULTS $C"
    [ "$C" = "$NTESTS" ] && OK=$((OK+1))
  done
  echo "repeat: $OK/$REPEAT runs at $NTESTS/$NTESTS   (per-run pass counts:$RESULTS)"
  [ "$OK" = "$REPEAT" ] || { echo "!! NOT REPEATABLE - see docs/NONDETERMINISM.md"; exit 1; }
  exit 0
fi

python -m pytest tests/test_scenarios.py -v 2>&1 | grep -E "PASSED|FAILED" | grep -v "^FAILED " | sed 's/tests.test_scenarios.py::FmuScenarioTest:://'
python -m pytest tests/test_scenarios.py -q 2>&1 | grep -E "^E  " | head -6
