// by Nurdaulet Eltayev
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n, x, y, i, j, ans, ans1, a[100001], b[100001], d[101], d1[101];

int main()
{

	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif

	cin >> n; 
	for (i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	for (i = 1; i <= n; i++)
		d[a[i]]++;
	for (i = 1; i <= n; i++)
		d1[b[i]]++;
	
	for (i = 0; i <= 100; i++)
		if (d[i] > 0)
			ans++;
	for (i = 0; i <= 100; i++)
		if (d1[i] > 0)
			ans1++;
	if (ans > ans1)
		cout << ans1;
	else
		cout << ans;
				
	

}

