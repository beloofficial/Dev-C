if "%1"=="" pause 0
if "%2"=="" pause 0
if not exist %1 pause 0
java.exe -Xmx512M -Xss64M -DONLINE_JUDGE=true -Duser.language=en -Duser.region=US -Duser.variant=US -jar files\Validate.jar7 < %1
if errorlevel 1 pause 0
copy %1 A.in
solutions\correct.exe
if errorlevel 1 pause 0
del A.in
if not exist A.out pause 0
move A.out %2
check.exe %1 %2 %2
:start
set error=1
if %errorlevel% equ 0 set error=0
if %errorlevel% equ 7 set error=0
if %error% equ 1 pause 0
:end
