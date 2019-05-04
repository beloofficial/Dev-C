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
#include <windows.h>

using namespace std;

#ifdef WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif

typedef long long ll;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define all(s) s.begin(), s.end()
#define sz(s) (int(s.size()))
#define fname "a"
#define ms(a,x) memset(a, x, sizeof(a))
#define forit(it,s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it)
#define MAXN 100000
#define MAXK 26

int n, k, dist, up, down, seed;

int main(int argv, char** argc)
{
	n = MAXN;
	k = MAXK;
	dist = 10;
	up = 1;
	down = 26;

	seed = 123;
	if (argv > 1)
		n = atoi(argc[1]);
	if (argv > 2)
		k = atoi(argc[2]);
	if (argv > 3)
		dist = atoi(argc[3]);
	if (argv > 4)
		up = atoi(argc[4]);
	if (argv > 5)
		down = atoi(argc[5]);
	if (argv > 6)
		seed = atoi(argc[6]);

	up--;
	down--;

	srand(seed);

	for (int i = 0, j; i < n; i = j)
	{
		char ch = 'a' + up + (rand() % (down - up + 1));
		j = min(n, i + (rand() % dist) + 1);
		for (int l = i; l < j; ++l)
			printf("%c", ch);
	}
	puts("");
	printf("%d\n", k);

	return 0;
}
