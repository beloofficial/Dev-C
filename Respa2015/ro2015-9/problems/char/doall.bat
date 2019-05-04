rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** preliminary ***
md preliminary
call scripts\gen-answer.bat preliminary\01 preliminary\01.a

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen.exe 10 5 3 1 26 31" "tests\01" 1
call scripts\gen-input-via-stdout.bat "files\gen.exe 10 3 3 1 26 331" "tests\02" 2
call scripts\gen-input-via-stdout.bat "files\gen.exe 50 5 10 1 26 331" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen.exe 100 5 20 1 26 331" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen.exe 5000 25 3 1 26 3361" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen.exe 5000 10 100 1 26 1131" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\gen.exe 5000 5 1000 1 26 3311" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\gen2.exe 5000 5 200 1 26 3631" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\gen.exe 5000 5 2000 1 26 1331" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\gen2.exe 5000 3 998 1 26 1131" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 10 10000 10 26 6921" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 4 10000 12 19 1921" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 15 100 10 15 621" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 3 100000 1 26 1321" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 26 100 1 26 131" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 5 100000 1 10 893" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 26 5000 1 26 331" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen2.exe 100000 3 99998 1 26 361" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 5 100000 1 26 3231" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 1 100 1 26 6131" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 10 10000 1 26 33231" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\gen2.exe 100000 5 40000 1 26 3611" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\gen.exe 100000 5 100000 1 26 34231" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\gen2.exe 100000 3 99998 1 26 3161" "tests\24" 24
call scripts\gen-input-via-stdout.bat "files\gen2.exe 100000 5 20000 1 26 3631" "tests\25" 25
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
call scripts\gen-answer.bat tests\22 tests\22.a
call scripts\gen-answer.bat tests\23 tests\23.a
call scripts\gen-answer.bat tests\24 tests\24.a
call scripts\gen-answer.bat tests\25 tests\25.a

