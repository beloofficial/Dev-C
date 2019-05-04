#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <utility>
#include <iomanip>

using namespace std;

const int MAXN = 5050;

int n;
int a[MAXN];
int st[MAXN];
int sz[MAXN];
int num[MAXN];
vector <int> v[MAXN];
long long dp[MAXN];
long long ans;       

int getSet(int x) {
	if (st[x] == x)
		return x;
	return st[x] = getSet(st[x]);
}

int unite(int a, int b) {
	a = getSet(a); b = getSet(b);
	if (rand() & 1)
		swap(a, b);
	st[a] = b;
	sz[b] += sz[a];
	return b;
}

int main() {
	//assert(freopen("input.txt","r",stdin));
	//assert(freopen("output.txt","w",stdout));
	freopen("C.in","r",stdin);
	freopen("C.out","w",stdout);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		v[a[i]].push_back(i);
	}

	for (int i = 1; i <= n; i++)
		dp[i] = 1ll * (i + 1) * i / 2;

	for (int i = 1; i < n; i++) {
		long long cur = 0;
		
		for (int j = 1; j <= n; j++)
			num[j] = 0;
		for (int j = i; j <= n; j++) {
			st[j] = j;
			sz[j] = 1;
			num[a[j]]++;
		}

		for (int j = n; j > i; j--) {
			int x = a[j];

			num[x]--;

			if (num[x] == 0) {
				for (int k = (int) v[x].size() - 1; k >= 0; k--) {
					int ind = v[x][k];

					if (ind < j)
						break;

					int curSt = getSet(st[ind]);

					if (ind - 1 >= j && num[a[ind - 1]] == 0) {
						int nst = getSet(st[ind - 1]);
						cur -= dp[sz[nst]];
						curSt = unite(curSt, nst);
					}

					if (ind + 1 <= n && num[a[ind + 1]] == 0) {
						int nst = getSet(st[ind + 1]);
						cur -= dp[sz[nst]];
						curSt = unite(curSt, nst);
					}
					
					//cout << "UPD " << x << " " << ind << " " << sz[curSt] << " " << dp[sz[curSt]] << endl;

					cur += dp[sz[curSt]];
				}
			}

			//cout << "UPD ANS " << i << " " << j << " " << cur << endl;
			ans += cur;
		} 
	}

	cout << ans << endl;

	return 0;
}