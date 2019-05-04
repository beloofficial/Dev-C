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
cp $1 D.in
echo "Running solution main.cpp"
wine solutions/main.exe
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
rm -f D.in
if [ ! -f "D.out" ]; then
    echo "Solution didn't produced output [D.out]"
    read
fi
mv "D.out" "$2"
echo "Running checker"
wine check.exe $1 $2 $2
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi
