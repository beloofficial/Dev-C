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
wine files/towin.exe "$1" | wine files/val.exe
if [ "$?" -ne "0" ]; then
    read
fi
cp $1 B.in
echo "Running solution char_yu.cpp"
wine solutions/char_yu.exe
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
rm -f B.in
if [ ! -f "B.out" ]; then
    echo "Solution didn't produced output [B.out]"
    read
fi
mv "B.out" "$2"
echo "Running checker"
wine check.exe $1 $2 $2
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi
