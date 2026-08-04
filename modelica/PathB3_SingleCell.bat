@echo off
SET PATH=C:/Program Files/OpenModelica1.26.3-64bit/bin/;C:/Program Files/OpenModelica1.26.3-64bit/lib//omc;C:/Program Files/OpenModelica1.26.3-64bit/lib/;C:/Users/silam/AppData/Roaming/.openmodelica/binaries/PathB3_SingleCell;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/mingw64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/ucrt64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library/win64;C:/Users/silam/AppData/Roaming/.openmodelica/libraries/ExternalMedia 4.1.1/Resources/Library;C:/Program Files/OpenModelica1.26.3-64bit/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/PathB3_SingleCell.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
