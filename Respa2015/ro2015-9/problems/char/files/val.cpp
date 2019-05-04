#include <iostream>
#include <cassert>
#include "testlib.h"
using namespace std;

int main()
{
	registerValidation();
        inf.readWord("[a-z]{1,100000}");
        inf.readEoln();
	int k = inf.readInt(1, 26);
	inf.readEoln();
	inf.readEof();
	return 0;
}
