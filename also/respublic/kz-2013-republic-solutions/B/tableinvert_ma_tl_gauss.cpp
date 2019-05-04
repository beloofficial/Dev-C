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
int c[1010][1010], a[1010][1010];
int n, m, N;

int getNum(int i, int j) {
	return i * m + j;
}

int main() {
freopen("B.in", "r", stdin);
freopen("B.out", "w", stdout);

	scanf("%d%d\n", &n, &m);	
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j)
			scanf("%d", &c[i][j]);
	N = n * m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			int cur = getNum(i, j);
			for (int k = 0; k < m; ++k)
				a[cur][getNum(i, k)] = 1;
			for (int k = 0; k < n; ++k) 
				a[cur][getNum(k, j)] = 1;
			a[cur][N] = c[i][j];
		}
	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j)
			if (a[j][i]) {
				for (int k = 0; k <= N; ++k)
					swap(a[i][k], a[j][k]);
				break;
			}
		for (int j = 0; j < N; ++j) if (i != j && a[j][i]) {
			for (int k = 0; k <= N; ++k) 
				a[j][k] ^= a[i][k];
		}
	}

	int ans = 0;
	for (int i = 0; i < N; ++i)
		ans += a[i][N];	
	cout << ans << endl;
	return 0;
}