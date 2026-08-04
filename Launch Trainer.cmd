@echo off
setlocal

set "APP_DIR=%~dp0"
cd /d "%APP_DIR%"

where python >nul 2>nul
if errorlevel 1 (
    echo Python was not found on PATH.
    echo Install Python 3.11+ or add it to PATH, then run this launcher again.
    echo.
    pause
    exit /b 1
)

python -c "import PyQt6" >nul 2>nul
if errorlevel 1 (
    echo PyQt6 is not installed in this Python environment.
    echo Installing requirements now...
    echo.
    python -m pip install -r requirements.txt
    if errorlevel 1 (
        echo.
        echo Dependency installation failed.
        pause
        exit /b 1
    )
)

python app.py
if errorlevel 1 (
    echo.
    echo Refrigeration Trainer closed with an error.
    pause
    exit /b 1
)

endlocal
