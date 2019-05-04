if "%1"=="" pause 0
if "%2"=="" pause 0
if not exist %1 pause 0
files\val.exe < %1
if errorlevel 1 pause 0
copy %1 B.in
solutions\char_yu.exe
if errorlevel 1 pause 0
del B.in
if not exist B.out pause 0
move B.out %2
check.exe %1 %2 %2
:start
set error=1
if %errorlevel% equ 0 set error=0
if %errorlevel% equ 7 set error=0
if %error% equ 1 pause 0
:end
