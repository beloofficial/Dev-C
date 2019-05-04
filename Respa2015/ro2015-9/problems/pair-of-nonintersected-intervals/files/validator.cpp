#include "testlib.h"
#include <iostream>
#include <set>
#include <cassert>

using namespace std;

int main()
{
	registerValidation();

	int n = inf.readInt(1, 5000, "n");
	inf.readEoln();
	for (int i = 0; i < n; i++) {
		if (i > 0) inf.readSpace();
		inf.readInt(1, n, "a[i]");
	}
	inf.readEoln();
	inf.readEof();
	return 0;
}