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
python -m pytest tests/test_scenarios.py -v 2>&1 | grep -E "PASSED|FAILED" | grep -v "^FAILED " | sed 's/tests.test_scenarios.py::FmuScenarioTest:://'
python -m pytest tests/test_scenarios.py -q 2>&1 | grep -E "^E  " | head -6
