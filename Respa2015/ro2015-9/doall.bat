echo [INFO]: Building problem 'array'.
pushd problems\array
call doall.bat
popd

echo [INFO]: Building problem 'char'.
pushd problems\char
call doall.bat
popd

echo [INFO]: Building problem 'pair-of-nonintersected-intervals'.
pushd problems\pair-of-nonintersected-intervals
call doall.bat
popd

echo [INFO]: Building problem 'goodnumbers'.
pushd problems\goodnumbers
call doall.bat
popd

echo [INFO]: Building problem '2n-matching'.
pushd problems\2n-matching
call doall.bat
popd

echo [INFO]: Building problem 'palm-reordering'.
pushd problems\palm-reordering
call doall.bat
popd

echo [INFO]: Building kazakh contest statement.
pushd statements\kazakh
call doall.bat
popd

echo [INFO]: Building russian contest statement.
pushd statements\russian
call doall.bat
popd

