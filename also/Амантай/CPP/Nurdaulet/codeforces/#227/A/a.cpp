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

int n, i, a[101], j, ans;

int main() {
 
	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	ans = a[1];		
	for (j = 2; j <= n; j++)
	    ans = __gcd(ans, a[j]);
	cout << ans * n;
}
