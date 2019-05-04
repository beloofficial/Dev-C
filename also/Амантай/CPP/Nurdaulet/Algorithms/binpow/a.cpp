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

int binpow(int a, int n){
	if (n == 0)
		return 1;
	else
	if (n % 2 == 0)
	{
		int b = binpow(a, n / 2);
		return b * b;
	}
	else
	if (n % 2 != 0)
		return binpow(a, n - 1) * a;


}

int main() {
 
	#ifndef ONLINE_JUDGE
	freopen ("binpow.in", "r", stdin);
	freopen ("binpow.out", "w", stdout);
	#endif

	int x, y;
	cin >> x >> y;
	cout << binpow(x, y);		

}