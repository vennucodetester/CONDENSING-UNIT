@echo off
SET PATH=C:/Users/silam/AppData/Local/OpenModelica1270/bin/;C:/Users/silam/AppData/Local/OpenModelica1270/lib//omc;C:/Users/silam/AppData/Local/OpenModelica1270/lib/;C:/Users/silam/AppData/Roaming/.openmodelica/binaries/RefrigerationTrainer;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/mingw64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/ucrt64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/win64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library;C:/Users/silam/AppData/Local/OpenModelica1270/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/RefrigerationTrainer.ClosedLoopM1eCS.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
