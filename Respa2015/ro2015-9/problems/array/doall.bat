rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 5 4353 1000000000" "tests\02" 2
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 100 6353 1000000000" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 1 1353 1000000000" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 25 4753 1000000000" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 50 4553 10" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 1000000 6565 1000000000" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 2 4383 10" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 434 4353 1" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 3 4353 10" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen.exe 1000 1000 10 4353 1000000000" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 5 4353 1000000000" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 100 6353 1000000000" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 1 1353 1000000000" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 25 4753 1000000000" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 50 4553 10" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 1000000 6565 1000000000" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 2 4383 10" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 434 4353 1" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 3 4353 10" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 100000 10 4353 1000000000" "tests\21" 21
call scripts\gen-answer.bat tests\01 tests\01.a
call scripts\gen-answer.bat tests\02 tests\02.a
call scripts\gen-answer.bat tests\03 tests\03.a
call scripts\gen-answer.bat tests\04 tests\04.a
call scripts\gen-answer.bat tests\05 tests\05.a
call scripts\gen-answer.bat tests\06 tests\06.a
call scripts\gen-answer.bat tests\07 tests\07.a
call scripts\gen-answer.bat tests\08 tests\08.a
call scripts\gen-answer.bat tests\09 tests\09.a
call scripts\gen-answer.bat tests\10 tests\10.a
call scripts\gen-answer.bat tests\11 tests\11.a
call scripts\gen-answer.bat tests\12 tests\12.a
call scripts\gen-answer.bat tests\13 tests\13.a
call scripts\gen-answer.bat tests\14 tests\14.a
call scripts\gen-answer.bat tests\15 tests\15.a
call scripts\gen-answer.bat tests\16 tests\16.a
call scripts\gen-answer.bat tests\17 tests\17.a
call scripts\gen-answer.bat tests\18 tests\18.a
call scripts\gen-answer.bat tests\19 tests\19.a
call scripts\gen-answer.bat tests\20 tests\20.a
call scripts\gen-answer.bat tests\21 tests\21.a

