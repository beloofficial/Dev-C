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
#include <time.h>

using namespace std;

const int MAXN = (int) 1e5;
const int mod = (int) 1e9;

int n;

int main(int argc, char * argv[]) { 	
	//assert(freopen("input.txt","r",stdin));
	//assert(freopen("output.txt","w",stdout));

	registerGen(argc, argv, 1);
	
	//srand(time(NULL));

	n = atoi(argv[1]);

	cout << n << endl;

	for (int i = 1; i <= n; i++) {
		if (i > 1)
			cout << " ";
		cout << rnd.next(mod / 2, mod);
	}
	cout << endl;

	for (int i = 1; i <= n; i++) {
		if (i > 1)
			cout << " ";
		cout << rnd.next(mod / 2, mod);
	}
	cout << endl;

	return 0;
}