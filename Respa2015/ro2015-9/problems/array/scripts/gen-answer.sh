if [ "$1" = "" ]; then
    read
fi
if [ "$2" = "" ]; then
    read
fi
if [ ! -f "$1" ]; then
    read
fi
echo "Running validator"
wine files/towin.exe "$1" | java -Xmx512M -Xss64M -DONLINE_JUDGE=true -Duser.language=en -Duser.region=US -Duser.variant=US -jar files/Validate.jar7
if [ "$?" -ne "0" ]; then
    read
fi
cp $1 A.in
echo "Running solution correct.cpp"
wine solutions/correct.exe
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
rm -f A.in
if [ ! -f "A.out" ]; then
    echo "Solution didn't produced output [A.out]"
    read
fi
mv "A.out" "$2"
echo "Running checker"
wine check.exe $1 $2 $2
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi
