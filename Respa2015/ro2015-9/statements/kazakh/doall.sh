cd ../../problems/array/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

cd ../../problems/char/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

cd ../../problems/pair-of-nonintersected-intervals/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

cd ../../problems/goodnumbers/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

cd ../../problems/2n-matching/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

cd ../../problems/palm-reordering/statements/kazakh
for file in ./*.mp
do
    mpost $file
done
rm -f *.log
cd -

latex statements.tex
latex statements.tex
dvips statements.dvi
dvipdfmx -p a4 statements.dvi
rm -f *.log
rm -f *.aux
rm -f *.dvi
rm -f *.ps
