#!/bin/bash
# rebuild FMU -> verify it actually changed -> install -> gate.
R="C:/Users/silam/OneDrive/Documents/CONDENSING UNIT"
cd "$R/modelica"
OLD=$(md5sum ClosedLoopM1eCS.fmu 2>/dev/null | cut -d' ' -f1)
"/c/Users/silam/AppData/Local/OpenModelica1270/bin/omc.exe" build_closed_loop_fmu.mos > _b.log 2>&1
P=$(grep -o "@@FMU=[^@]*@@" _b.log | sed 's/@@FMU=//;s/@@//')
if [ -z "$P" ]; then
  echo "!! BUILD FAILED (empty FMU path - OMC silent failure)"
  grep -o "has [0-9]* equation(s) and [0-9]* variable(s)" _b.log
  head -c 700 _build_closed_loop_fmu.log; exit 1
fi
NEW=$(md5sum ClosedLoopM1eCS.fmu | cut -d' ' -f1)
if [ "$OLD" == "$NEW" ]; then echo "!! FMU UNCHANGED (md5 $NEW) - stale artifact, aborting"; exit 1; fi
echo "built ok: md5 $NEW"
cd "$R" && cp modelica/ClosedLoopM1eCS.fmu fmu/RefrigerationTrainer.fmu
python -m pytest tests/test_scenarios.py -v 2>&1 | grep -E "PASSED|FAILED" | grep -v "^FAILED " | sed 's/tests.test_scenarios.py::FmuScenarioTest:://'
python -m pytest tests/test_scenarios.py -q 2>&1 | grep -E "^E  " | head -6
