#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <utility>
#include <algorithm>
#include <ctime>
#include <vector>
                            
using namespace std;

#define fname ""
#define ull unsigned long long
#define ll long long
#define INF 1000*1000*1000

int n, c, i, a[1001], mx = -10000000, pos;

int main() {
 
	#ifndef ONLINE_JUDGE
	freopen (".in", "r", stdin);
	freopen (".out", "w", stdout);
	#endif


	cin >> n >> c;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i < n; i++)
		if (a[i] - a[i + 1] > mx){
			mx = a[i] - a[i + 1];
			pos = i;
		}

	if (a[pos] - a[pos + 1] - c <= 0)	
		cout << 0;
	else 
		cout << a[pos] - a[pos + 1] - c;

			

}
