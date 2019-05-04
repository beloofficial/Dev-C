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
#define N 20000

int i, n, j, k, s, l, r, m, a[1000001], ans;
bool prime[1000001];

int main() {
 
	#ifndef ONLINE_JUDGE
	freopen (".in", "r", stdin);
	freopen (".out", "w", stdout);
	#endif
	for (i = 2; i <= 1000000; ++i)
	    prime[i] = true;
	prime[0] = prime[1] = false;
	for (i = 2; i <= 1000000; ++i)
		if (prime[i])
			if (i * i <= 1000000)
				for (j = i + i; j <= 1000000; j+=i)
					prime[j] = false;

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	for (k = 1; k <= m; k++)
	{
		ans = 0;
		cin >> l >> r;
		for (i = 1; i <= n; i++)	{	
                   		
			for (j = l; j <= r; j++)
				if (prime[j])	
				{
					if (a[i] % j == 0)
						ans++;
				}
			cout << ans << endl;
		}	
		
	}

}
