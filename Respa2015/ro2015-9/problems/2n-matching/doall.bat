rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
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

