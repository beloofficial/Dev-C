/**
 * Validator
 */

#include "testlib.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <utility>
#include <iomanip>

using namespace std;


const int MAXN = (int) 1e5;
const int MAXH = (int) 1e9;

int main()
{
    registerValidation();
    
    int n = inf.readInt(1, MAXN, "n");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        int h = inf.readInt(1, MAXH, format("h[%d]", i + 1));
		
        if (i + 1 < n)
            inf.readSpace();
    }
    inf.readEoln();


    for (int i = 0; i < n; i++) {
        int h = inf.readInt(1, MAXH, format("c[%d]", i + 1));
		
        if (i + 1 < n)
            inf.readSpace();
    }
    inf.readEoln();

    inf.readEof();
    return 0;
}