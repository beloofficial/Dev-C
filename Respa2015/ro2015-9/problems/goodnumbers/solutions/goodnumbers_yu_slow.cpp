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
#define fname "D"
#define ms(a,x) memset(a, x, sizeof(a))
#define forit(it,s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it)

int A, C, L, R;

int main()
{
	freopen(fname".in", "r", stdin);
	freopen(fname".out", "w", stdout);

	scanf("%d%d%d%d", &A, &C, &L, &R);
	int ans = 0;
	for (int i = L; i <= R; ++i)
	{
		if (i == 0) continue;
		if (A % i == C)
			++ans;
	}
	printf("%d\n", ans);

	return 0;
}
