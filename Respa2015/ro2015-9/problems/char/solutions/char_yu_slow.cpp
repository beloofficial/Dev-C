#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <deque>
#include <cassert>

using namespace std;

#ifdef WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif

typedef long long ll;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(s) s.begin(), s.end()
#define sz(s) (int(s.size()))
#define fname "B"
#define ms(a,x) memset(a, x, sizeof(a))
#define forit(it,s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it)
#define MAXN 200002
#define MAXK 26
#define INF 1000000000

int n, k;
char s[MAXN];
int a[MAXK];

int main()
{

	freopen(fname".in", "r", stdin);
	freopen(fname".out", "w", stdout);


	gets(s);
	n = strlen(s);
	scanf("%d", &k);
	int ans = INF;
	for (int i = 0; i < n; ++i)
	{
		int cur = 0;
		memset(a, 0, sizeof(a));
		for (int j = i; j < n; ++j)
		{
			if (!a[s[j] - 'a']) ++cur;
			a[s[j] - 'a'] = 1;
			if (cur == k)
			{
				ans = min(ans, j - i + 1);
				break;
			}
		}
	}

	printf("%d\n", ans == INF ? -1 : ans);

	return 0;
}
