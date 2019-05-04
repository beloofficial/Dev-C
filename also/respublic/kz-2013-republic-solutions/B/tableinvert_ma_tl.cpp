#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <ctime>
#include <deque>
using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define forit(it,s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it)

typedef long long ll;
typedef vector <int> vi;
int a[3000][3000], sr[3000], sc[3000];
int n, m, cur, len, cnt;

void rec(int i, int j) {
	if (i == n) {
		for (int l = 0; l < n; ++l)
			for (int k = 0; k < m; ++k) if (a[l][k]) return;
		cout << cnt << endl;
		exit(0);
		return;
	}

	if (j == m) {
		rec(i + 1, 0);
		return;
	}
	for (int l = 0; l < n; ++l)
		for (int k = 0; k < m; ++k)
			if (l == i || j == k) a[l][k] ^= 1;
	++cnt;
	rec(i, j + 1);
	--cnt;

	for (int l = 0; l < n; ++l)
		for (int k = 0; k < m; ++k)
			if (l == i || j == k) a[l][k] ^= 1;
	rec(i, j + 1);
}


int main() {
freopen("B.in", "r", stdin);
freopen("B.out", "w", stdout);

	scanf("%d%d\n", &n, &m);	
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j)
			scanf("%d", &a[i][j]);
	rec(0, 0);				
	return 0;
}