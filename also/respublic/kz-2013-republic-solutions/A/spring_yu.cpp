/*
	Solution by Yerzhan Utkelbayev
*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAXN 100001

int n;
int a[MAXN];
int b[MAXN];
int p[MAXN];

inline bool comp(int i, int j)
{
	return a[i] < a[j];
}

int main()
{
freopen("A.in", "r", stdin);
freopen("A.out", "w", stdout);

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d%d", &a[i], &b[i]);
		p[i] = i;
	}

	sort(p, p + n, comp);

	int k, ans = 1;

	for (int i = 0; i < n; ++i)
	{
	   if (!i || b[p[i - 1]] >= b[p[i]])
	   	k = i;
     	ans = max(ans, a[p[i]] - a[p[k]] + 1);
	}

	printf("%d\n", ans);
	return 0;
}
