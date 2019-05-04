#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int n, i, a[100000], ans;

int main()
{

	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= n; i++)
	{
	 	if (2 * i > n || 2 * i + 1 > n)
			break;
		if (2 * i <= n && a[i] <= a[2 * i])
	   		i = i;
		else
		  	{cout << "NO"; exit(0);}
	  	
		if (2 * i + 1 <= n && a[i] <= a[2 * i + 1])
			i = i;
		else
	  		{cout << "NO"; exit(0);}
	}
	cout << "YES";
}
