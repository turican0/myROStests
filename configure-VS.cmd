REM This is needed so as to avoid static expansion of environment variables
REM inside if (...) conditionals.
REM See http://stackoverflow.com/questions/305605/weird-scope-issue-in-bat-file
REM for more explanation.
REM Precisely needed for configuring Visual Studio Environment.
setlocal enabledelayedexpansion

REM Does the user need help?
if /I "%1" == "help" goto help
if /I "%1" == "/?" (
:help
    echo Help for configure script
    echo Syntax: path\to\source\configure.cmd [script-options] [Cmake-options]
    echo Available script-options: Codeblocks, Eclipse, Makefiles, clang, VSSolution
    echo Cmake-options: -DVARIABLE:TYPE=VALUE
    goto quit
)

REM Get the source root directory
set REACTOS_SOURCE_DIR=%~dp0

REM Ensure there's no spaces in the source path
echo %REACTOS_SOURCE_DIR%| find " " > NUL
if %ERRORLEVEL% == 0 (
    echo. && echo   Your source path contains at least one space.
    echo   This will cause problems with building.
    echo   Please rename your folders so there are no spaces in the source path,
    echo   or move your source to a different folder.
    goto quit
)

REM Set default generator
set CMAKE_GENERATOR="Ninja"
set CMAKE_ARCH=

    set ARCH=i386
    set VS_VERSION=16
    set BUILD_ENVIRONMENT=VS
    set VS_SOLUTION=0

REM Checkpoint
if not defined ARCH (
    echo Unknown build architecture
    goto quit
)

set USE_CLANG_CL=0

REM Parse command line parameters
set CMAKE_PARAMS=
set REMAINING=%*
:repeat

    REM Extract a parameter without removing '='
    for /f "tokens=1*" %%a in ("%REMAINING%") do (
        set "PARAM=%%a"
        set REMAINING=%%b
    )

        if /I "!PARAM!" == "CodeBlocks" (
            set CMAKE_GENERATOR="CodeBlocks - NMake Makefiles"
        ) else if /I "!PARAM!" == "Eclipse" (
            set CMAKE_GENERATOR="Eclipse CDT4 - NMake Makefiles"
        ) else if /I "!PARAM!" == "Makefiles" (
            set CMAKE_GENERATOR="NMake Makefiles"
        ) else if /I "!PARAM!" == "Ninja" (
            set CMAKE_GENERATOR="Ninja"
        ) else if /I "!PARAM!" == "clang" (
            set USE_CLANG_CL=1
        ) else if /I "!PARAM!" == "VSSolution" (
            set VS_SOLUTION=1
            REM explicitly set VS version for project generator
            for /f "tokens=1*" %%a in ("%REMAINING%") do (
                set PARAM=%%a
                set REMAINING2=%%b
            )
            if /I "!PARAM!" == "-VS_VER" (
                for /f "tokens=1*" %%a in ("!REMAINING2!") do (
                    set VS_VERSION=%%a
                    set REMAINING=%%b
                )
                echo Visual Studio Environment set to !BUILD_ENVIRONMENT!!VS_VERSION!-!ARCH!
            )
            set CMAKE_GENERATOR="Visual Studio !VS_VERSION!"
            if "!ARCH!" == "i386" (
                set CMAKE_ARCH=-A Win32
            ) else if "!ARCH!" == "amd64" (
                set CMAKE_ARCH=-A x64
            ) else if "!ARCH!" == "arm" (
                set CMAKE_ARCH=-A ARM
            ) else if "!ARCH!" == "arm64" (
                set CMAKE_ARCH=-A ARM64
            )
        ) else if /I "!PARAM:~0,2!" == "-D" (
            REM User is passing a switch to CMake
            set "CMAKE_PARAMS=%CMAKE_PARAMS% !PARAM!"
        ) else (
            echo. && echo   Warning: Unrecognized switch "!PARAM!" && echo.
        )

    REM Go to next parameter
    if defined REMAINING goto repeat

REM Inform the user about the default build
if "!CMAKE_GENERATOR!" == "Ninja" (
    echo This script defaults to Ninja. Type "configure help" for alternative options.
)

REM Create directories
set REACTOS_OUTPUT_PATH=output-%BUILD_ENVIRONMENT%-%ARCH%

if "%VS_SOLUTION%" == "1" (
    set REACTOS_OUTPUT_PATH=%REACTOS_OUTPUT_PATH%-sln
)

if "%REACTOS_SOURCE_DIR%" == "%CD%\" (
    set CD_SAME_AS_SOURCE=1
    echo Creating directories in %REACTOS_OUTPUT_PATH%

    if not exist %REACTOS_OUTPUT_PATH% (
        mkdir %REACTOS_OUTPUT_PATH%
    )
    cd %REACTOS_OUTPUT_PATH%
)

if "%VS_SOLUTION%" == "1" (

    if exist build.ninja (
        echo. && echo Error: This directory has already been configured for ninja.
        echo An output folder configured for ninja can't be reconfigured for VSSolution.
        echo Use an empty folder or delete the contents of this folder, then try again.
        goto quit
    )
) else if exist REACTOS.sln (
    echo. && echo Error: This directory has already been configured for Visual Studio.
    echo An output folder configured for VSSolution can't be reconfigured for ninja.
    echo Use an empty folder or delete the contents of this folder, then try again. && echo.
    goto quit
)

echo Preparing reactos...

if EXIST CMakeCache.txt (
    del CMakeCache.txt /q
)


if "%BUILD_ENVIRONMENT%" == "MinGW" (
    cmake -G %CMAKE_GENERATOR% -DENABLE_CCACHE:BOOL=0 -DCMAKE_TOOLCHAIN_FILE:FILEPATH=%MINGW_TOOCHAIN_FILE% -DARCH:STRING=%ARCH% %BUILD_TOOLS_FLAG% %CMAKE_PARAMS% "%REACTOS_SOURCE_DIR%"
) else if %USE_CLANG_CL% == 1 (
    cmake -G %CMAKE_GENERATOR% -DCMAKE_TOOLCHAIN_FILE:FILEPATH=toolchain-msvc.cmake -DARCH:STRING=%ARCH% %BUILD_TOOLS_FLAG% -DUSE_CLANG_CL:BOOL=1 %CMAKE_PARAMS% "%REACTOS_SOURCE_DIR%"
) else (
    cmake -G %CMAKE_GENERATOR% %CMAKE_ARCH% -DCMAKE_TOOLCHAIN_FILE:FILEPATH=toolchain-msvc.cmake -DARCH:STRING=%ARCH% %BUILD_TOOLS_FLAG% %CMAKE_PARAMS% "%REACTOS_SOURCE_DIR%"
)

if %ERRORLEVEL% NEQ 0 (
    goto quit
)

if "%CD_SAME_AS_SOURCE%" == "1" (
    set ENDV= from %REACTOS_OUTPUT_PATH%
)

if "%VS_SOLUTION%" == "1" (
    set ENDV= You can now use msbuild or open REACTOS.sln%ENDV%.
) else (
    set ENDV= Execute appropriate build commands ^(ex: ninja, make, nmake, etc...^)%ENDV%
)

echo. && echo Configure script complete^^!%ENDV%

goto quit

:cmake_notfound
echo Unable to find cmake, if it is installed, check your PATH variable.

:quit
endlocal
exit /b
