rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\generator.exe 100 1" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\generator.exe 250 7" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\generator.exe 500 5" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\generator.exe 787 28" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\generator.exe 1000 8" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 100 1" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 250 34" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 500 42" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 787 13" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 1000 27" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\generator.exe 50000 1" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\generator.exe 53927 7" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\generator.exe 66666 5" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\generator.exe 50001 28" "tests\24" 24
call scripts\gen-input-via-stdout.bat "files\generator.exe 60028 8" "tests\25" 25
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 50000 1" "tests\26" 26
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 53927 34" "tests\27" 27
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 66666 42" "tests\28" 28
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 50001 13" "tests\29" 29
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 60028 27" "tests\30" 30
call scripts\gen-input-via-stdout.bat "files\generator.exe 70523 1" "tests\31" 31
call scripts\gen-input-via-stdout.bat "files\generator.exe 90000 7" "tests\32" 32
call scripts\gen-input-via-stdout.bat "files\generator.exe 100000 5" "tests\33" 33
call scripts\gen-input-via-stdout.bat "files\generator.exe 100000 28" "tests\34" 34
call scripts\gen-input-via-stdout.bat "files\generator.exe 100000 8" "tests\35" 35
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 70523 1" "tests\36" 36
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 90000 34" "tests\37" 37
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 100000 42" "tests\38" 38
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 100000 13" "tests\39" 39
call scripts\gen-input-via-stdout.bat "files\generator-bignums.exe 100000 27" "tests\40" 40
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
call scripts\gen-answer.bat tests\26 tests\26.a
call scripts\gen-answer.bat tests\27 tests\27.a
call scripts\gen-answer.bat tests\28 tests\28.a
call scripts\gen-answer.bat tests\29 tests\29.a
call scripts\gen-answer.bat tests\30 tests\30.a
call scripts\gen-answer.bat tests\31 tests\31.a
call scripts\gen-answer.bat tests\32 tests\32.a
call scripts\gen-answer.bat tests\33 tests\33.a
call scripts\gen-answer.bat tests\34 tests\34.a
call scripts\gen-answer.bat tests\35 tests\35.a
call scripts\gen-answer.bat tests\36 tests\36.a
call scripts\gen-answer.bat tests\37 tests\37.a
call scripts\gen-answer.bat tests\38 tests\38.a
call scripts\gen-answer.bat tests\39 tests\39.a
call scripts\gen-answer.bat tests\40 tests\40.a

