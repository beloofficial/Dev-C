#   *** validation ***
scripts/run-validator-tests.sh
scripts/run-checker-tests.sh

#    *** preliminary ***
echo ""
mkdir preliminary
echo "Generating answer for test #1"
scripts/gen-answer.sh preliminary/01 preliminary/01.a
echo ""

#    *** tests ***
mkdir tests
echo "Generating test #1"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 10 5 3 1 26 31" "tests/01" 1
echo "Generating test #2"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 10 3 3 1 26 331" "tests/02" 2
echo "Generating test #3"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 50 5 10 1 26 331" "tests/03" 3
echo "Generating test #4"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100 5 20 1 26 331" "tests/04" 4
echo "Generating test #5"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 5000 25 3 1 26 3361" "tests/05" 5
echo "Generating test #6"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 5000 10 100 1 26 1131" "tests/06" 6
echo "Generating test #7"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 5000 5 1000 1 26 3311" "tests/07" 7
echo "Generating test #8"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 5000 5 200 1 26 3631" "tests/08" 8
echo "Generating test #9"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 5000 5 2000 1 26 1331" "tests/09" 9
echo "Generating test #10"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 5000 3 998 1 26 1131" "tests/10" 10
echo "Generating test #11"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 10 10000 10 26 6921" "tests/11" 11
echo "Generating test #12"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 4 10000 12 19 1921" "tests/12" 12
echo "Generating test #13"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 15 100 10 15 621" "tests/13" 13
echo "Generating test #14"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 3 100000 1 26 1321" "tests/14" 14
echo "Generating test #15"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 26 100 1 26 131" "tests/15" 15
echo "Generating test #16"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 5 100000 1 10 893" "tests/16" 16
echo "Generating test #17"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 26 5000 1 26 331" "tests/17" 17
echo "Generating test #18"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 100000 3 99998 1 26 361" "tests/18" 18
echo "Generating test #19"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 5 100000 1 26 3231" "tests/19" 19
echo "Generating test #20"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 1 100 1 26 6131" "tests/20" 20
echo "Generating test #21"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 10 10000 1 26 33231" "tests/21" 21
echo "Generating test #22"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 100000 5 40000 1 26 3611" "tests/22" 22
echo "Generating test #23"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 5 100000 1 26 34231" "tests/23" 23
echo "Generating test #24"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 100000 3 99998 1 26 3161" "tests/24" 24
echo "Generating test #25"
scripts/gen-input-via-stdout.sh "wine files/gen2.exe 100000 5 20000 1 26 3631" "tests/25" 25
echo ""
echo "Generating answer for test #1"
scripts/gen-answer.sh tests/01 tests/01.a
echo ""
echo "Generating answer for test #2"
scripts/gen-answer.sh tests/02 tests/02.a
echo ""
echo "Generating answer for test #3"
scripts/gen-answer.sh tests/03 tests/03.a
echo ""
echo "Generating answer for test #4"
scripts/gen-answer.sh tests/04 tests/04.a
echo ""
echo "Generating answer for test #5"
scripts/gen-answer.sh tests/05 tests/05.a
echo ""
echo "Generating answer for test #6"
scripts/gen-answer.sh tests/06 tests/06.a
echo ""
echo "Generating answer for test #7"
scripts/gen-answer.sh tests/07 tests/07.a
echo ""
echo "Generating answer for test #8"
scripts/gen-answer.sh tests/08 tests/08.a
echo ""
echo "Generating answer for test #9"
scripts/gen-answer.sh tests/09 tests/09.a
echo ""
echo "Generating answer for test #10"
scripts/gen-answer.sh tests/10 tests/10.a
echo ""
echo "Generating answer for test #11"
scripts/gen-answer.sh tests/11 tests/11.a
echo ""
echo "Generating answer for test #12"
scripts/gen-answer.sh tests/12 tests/12.a
echo ""
echo "Generating answer for test #13"
scripts/gen-answer.sh tests/13 tests/13.a
echo ""
echo "Generating answer for test #14"
scripts/gen-answer.sh tests/14 tests/14.a
echo ""
echo "Generating answer for test #15"
scripts/gen-answer.sh tests/15 tests/15.a
echo ""
echo "Generating answer for test #16"
scripts/gen-answer.sh tests/16 tests/16.a
echo ""
echo "Generating answer for test #17"
scripts/gen-answer.sh tests/17 tests/17.a
echo ""
echo "Generating answer for test #18"
scripts/gen-answer.sh tests/18 tests/18.a
echo ""
echo "Generating answer for test #19"
scripts/gen-answer.sh tests/19 tests/19.a
echo ""
echo "Generating answer for test #20"
scripts/gen-answer.sh tests/20 tests/20.a
echo ""
echo "Generating answer for test #21"
scripts/gen-answer.sh tests/21 tests/21.a
echo ""
echo "Generating answer for test #22"
scripts/gen-answer.sh tests/22 tests/22.a
echo ""
echo "Generating answer for test #23"
scripts/gen-answer.sh tests/23 tests/23.a
echo ""
echo "Generating answer for test #24"
scripts/gen-answer.sh tests/24 tests/24.a
echo ""
echo "Generating answer for test #25"
scripts/gen-answer.sh tests/25 tests/25.a
echo ""

