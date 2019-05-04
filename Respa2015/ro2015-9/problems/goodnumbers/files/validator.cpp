#include "testlib.h"

using namespace std;

int main()
{
    registerValidation();
    
    int a = inf.readInt(0, 1000000000);
    inf.readSpace();
    int c = inf.readInt(0, 1000000000);
    inf.readSpace();
    int l = inf.readInt(0, 1000000000);
    inf.readSpace();
    int r = inf.readInt(0, 1000000000);
    inf.readEoln();
    inf.readEof();

    return 0;
}