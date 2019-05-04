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
wine files/towin.exe "$1" | wine files/validator.exe
if [ "$?" -ne "0" ]; then
    read
fi
cp $1 E.in
echo "Running solution sol_binsearch.cpp"
wine solutions/sol_binsearch.exe
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
rm -f E.in
if [ ! -f "E.out" ]; then
    echo "Solution didn't produced output [E.out]"
    read
fi
mv "E.out" "$2"
echo "Running checker"
wine check.exe $1 $2 $2
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi
