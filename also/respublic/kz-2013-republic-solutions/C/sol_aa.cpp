/*
Problem: equallcm
Author: Azizkhan Almakhan
Solution, uses Inclusion-Exclusion formula
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <map>
#include <ctime>
#include <algorithm>
using namespace std; 

#define f first
#define s second
#define mp make_pair
#define pb push_back 

int n, a[111], psz;
vector <int> p;
long long ms[111];
map <int, int> M;
long long res;
long long c[33][111];

inline void rec(int i, int d, int cn, bool odd, long long mm) {
	if (i == psz) {
		int t = __builtin_popcount(mm&((1<<30)-1)) + __builtin_popcount(mm>>30);

		if (odd) res -= (1LL<<(n - t + cn));	
		else res += (1LL<<(n - t + cn));
		return;
	}
	rec(i + 1, d, cn, odd, mm);

	long long mask = ms[i];
	int ncn = 0;
	for (int j = 0; j < cn; ++j) {
		if ((c[d][j] & mask) != 0)
			mask |= c[d][j];
		else
			c[d+1][ncn++] = c[d][j];
	}
	c[d+1][ncn++] = mask;
	rec(i + 1, d + 1, ncn, !odd, (mm|ms[i]));
}

int main() {
	freopen("C.in", "r", stdin);
	freopen("C.out", "w", stdout);
	scanf("%d", &n);	
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);		
		a[i] = x;
		for (int j = 2; j * j <= x; ++j) if (x % j == 0) {
			p.pb(j);
			int deg = 0;
			while (x % j == 0) {
				x /= j;
				++deg;
			}
			if (!M.count(j) || M[j] < deg)
				M[j] = deg;							          	
		}
		if (x > 1) {
			p.pb(x);
			if (!M.count(x) || M[x] < 1)
				M[x] = 1;
		}
	}
	sort(p.begin(), p.end());	
	p.resize(unique(p.begin(), p.end()) - p.begin());

	for (int i = 0; i < p.size(); ++i) {
		int x = p[i];
		int mx = 1, deg = M[x];
		for (int j = 0; j < deg; ++j)
			mx *= x;
		
		int cnt = 0;
		for (int j = 0; j < n; ++j) if (a[j] % mx == 0) {
			ms[i] |= (1LL<<j); 
			++cnt;
		}
		if (cnt == 1) {
			puts("0");
			return 0;
		}
	}

	psz = p.size();
	rec(0, 0, 0, false, 0); 

	cout << res << endl;

	return 0;		
}
