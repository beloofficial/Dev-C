#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int n, i, ans, k = 1;
string s;
char pos;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif

	cin >> n;
	for (i = 0; i <= n; i++)
	{
	
		cin >> s;
		if (s[0] == pos)
			ans++;
	
		pos = s[1];
		 
	}
	cout << ans + 1;
}
