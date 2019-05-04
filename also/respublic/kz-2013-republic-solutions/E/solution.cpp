#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#pragma comment(linker, "/STACK:16777216")
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define LL long long
#define bit __builtin_popcountll
#define sqr(x) (x) * (x)
using namespace std;
typedef pair<int, int> pii;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5;
const int mod = (int)1e9 + 7;
int deg[maxn];
int main()
{
freopen("E.in", "r", stdin);
freopen("E.out", "w", stdout);

	int n,m; cin >> n >> m;
	for (int i = 0; i < n - 1; i++) {
		int x,y; cin >> x >> y;
		--x;
		--y;
		deg[x]++;
		deg[y]++;
	}
	LL res = 1;
	for (int i = 0; i < n; i++) {
		res = res * deg[i] % mod;
	}
	for (int i = 0; i < m; i++) {
		res = res * 2 % mod;
	}
	cout << res << endl;
	return 0;
}
