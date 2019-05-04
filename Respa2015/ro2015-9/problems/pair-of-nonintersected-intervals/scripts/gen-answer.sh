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
cp $1 C.in
echo "Running solution sol5000.cpp"
wine solutions/sol5000.exe
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
rm -f C.in
if [ ! -f "C.out" ]; then
    echo "Solution didn't produced output [C.out]"
    read
fi
mv "C.out" "$2"
echo "Running checker"
wine check.exe $1 $2 $2
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi
