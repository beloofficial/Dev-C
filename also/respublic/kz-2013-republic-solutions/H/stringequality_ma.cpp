#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <ctime>
#include <cassert>
#include <queue>

using namespace std;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define forit(it,con) for (typeof(con.begin()) it = con.begin(); it != con.end(); ++it)
#define f0(a) memset(a, 0, sizeof(a))
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define vi vector<int>
#define ll long long

#ifdef WIN32
	#define I64 "%I64d"
#else 
	#define I64 "%lld"
#endif

const ll base1 = 31;
const ll base2 = 37;
const ll mod2 = (1e9 + 7);

const int maxn = 524288;

struct Tree {
	int sum;
	ll hl, hr;

	Tree() {
		sum = 0;
		hl = hr = 0;
	}
};

char s[maxn];
Tree T[2 * maxn + 10];

ll pwl[maxn], pwr[maxn];
int n, m;

Tree upd(Tree &node, Tree &le, Tree &ri) {
	node.sum = le.sum + ri.sum;
	node.hl = le.hl * pwl[ri.sum] + ri.hl;
	node.hr = (le.hr * pwr[ri.sum] + ri.hr) % mod2;
}

void Update(int v, int x) {
	v += maxn - 1; 
	T[v].sum = 0;
	T[v].hl = T[v].hr = 0;

	while (v > 1) {
		v >>= 1;
		upd(T[v], T[v + v], T[v + v + 1]);
	}
}

Tree getHash(int v, int sl, int sr, int l, int r) {
	if (min(sr, r) - max(sl, l) < 0) 
		return Tree();
	if (l <= sl && sr <= r) 
		return T[v];
	
	int mid = (sl + sr) >> 1;
	Tree le = getHash(v + v, sl, mid, l, r);
	Tree ri = getHash(v + v + 1, mid + 1, sr, l, r);
	Tree t;
	upd(t, le, ri);
	return t;
	
}

int getKth(int k) {
	int v = 1;
	while (v < maxn) {
		if (T[v + v].sum >= k) v += v; else {
			k -= T[v + v].sum;
			v += v + 1;
		}
	}
	return v - maxn + 1;
}



int main() {
freopen("H.in", "r", stdin);
freopen("H.out", "w", stdout);
	gets(s);
	n = strlen(s);
	
	pwl[0] = pwr[0] = 1;
	for (int i = 1; i <= n; ++i) {
		pwl[i] = pwl[i - 1] * base1;
		pwr[i] = (pwr[i - 1] * base2) % mod2;
		
		T[i + maxn - 1].sum = 1;
		T[i + maxn - 1].hl = T[i + maxn - 1].hr = s[i - 1] - '0' + 1;
	}
	for (int i = maxn - 1; i >= 1; --i)
		upd(T[i], T[i + i], T[i + i + 1]);


	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		char ch;
		scanf("\n%c", &ch);
		if (ch == '-') {
			int pos;
			scanf("%d", &pos);
			Update(getKth(pos), 0); 
		} else if (ch == '?') {
			int l1, l2, len;
			scanf("%d%d%d", &l1, &l2, &len);

		    Tree le = getHash(1, 1, maxn, getKth(l1), getKth(l1 + len - 1));
		    Tree ri = getHash(1, 1, maxn, getKth(l2), getKth(l2 + len - 1));
			if (mp(le.hl, le.hr) == mp(ri.hl, ri.hr)) puts("ia"); else
			puts("jok");
		} else
			assert(false);
	}
	return 0;
}

