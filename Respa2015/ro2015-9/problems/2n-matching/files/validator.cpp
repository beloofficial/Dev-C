#include "testlib.h"

using namespace std;

int main()
{
    registerValidation();
    
    int n = inf.readInt(1, 100000);
    inf.readEoln();
    for (int i = 0; i < 2 * n; i++) {
        if (i > 0) inf.readSpace();
        inf.readInt(1, 100000);
    }
    inf.readEoln();
    inf.readEof();

    return 0;
}