#   *** validation ***
scripts/run-validator-tests.sh
scripts/run-checker-tests.sh

#    *** tests ***
mkdir tests
echo "Generating test #2"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 5 4353 1000000000" "tests/02" 2
echo "Generating test #3"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 100 6353 1000000000" "tests/03" 3
echo "Generating test #4"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 1 1353 1000000000" "tests/04" 4
echo "Generating test #5"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 25 4753 1000000000" "tests/05" 5
echo "Generating test #6"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 50 4553 10" "tests/06" 6
echo "Generating test #7"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 1000000 6565 1000000000" "tests/07" 7
echo "Generating test #8"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 2 4383 10" "tests/08" 8
echo "Generating test #9"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 434 4353 1" "tests/09" 9
echo "Generating test #10"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 3 4353 10" "tests/10" 10
echo "Generating test #11"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 1000 1000 10 4353 1000000000" "tests/11" 11
echo "Generating test #12"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 5 4353 1000000000" "tests/12" 12
echo "Generating test #13"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 100 6353 1000000000" "tests/13" 13
echo "Generating test #14"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 1 1353 1000000000" "tests/14" 14
echo "Generating test #15"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 25 4753 1000000000" "tests/15" 15
echo "Generating test #16"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 50 4553 10" "tests/16" 16
echo "Generating test #17"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 1000000 6565 1000000000" "tests/17" 17
echo "Generating test #18"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 2 4383 10" "tests/18" 18
echo "Generating test #19"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 434 4353 1" "tests/19" 19
echo "Generating test #20"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 3 4353 10" "tests/20" 20
echo "Generating test #21"
scripts/gen-input-via-stdout.sh "wine files/gen.exe 100000 100000 10 4353 1000000000" "tests/21" 21
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

