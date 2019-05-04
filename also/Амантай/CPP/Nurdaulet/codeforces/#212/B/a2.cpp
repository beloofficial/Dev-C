#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n, m, i, x, a[3001];

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif


	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> a[i];
		if (a[i] == 1 || a[i] == n)
			{cout << "NO"; exit(0);}
	}
	sort (a + 1, a + m + 1);
	for (i = 1; i <= m; i++)
		if (a[i] && a[i + 1] == a[i] + 1 && a[i + 2] == a[i] + 2)
			{cout << "NO"; exit(0);}
	cout << "YES";			
		
		


}
