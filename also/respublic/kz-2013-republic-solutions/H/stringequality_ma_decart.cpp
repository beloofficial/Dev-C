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

const int maxn = 3000000;
struct Tree {
	int L, R;
	int size, y, v;
	ll hl, hr;

	Tree() {
		hl = 0; hr = 0;
		L = R = 0;
		size = 1;
	}
};

char s[maxn];
Tree T[maxn];
ll pwl[maxn], pwr[maxn];
int n, m, size, root;

int getSize(int v) {
	if (!v) return 0;
	return T[v].size;
}

ll getHashL(int v) {
	if (!v) return 0;
	return T[v].hl;
}

ll getHashR(int v) {
	if (!v) return 0;
	return T[v].hr;
}

void norm(int v) {
	if (!v) return;
	T[v].size = getSize(T[v].L) + getSize(T[v].R) + 1;
	
	T[v].hl = (getHashL(T[v].L) * base1 + T[v].v) * pwl[getSize(T[v].R)] + getHashL(T[v].R);

	T[v].hr = ((getHashR(T[v].L) * base2 % mod2 + T[v].v) * pwr[getSize(T[v].R)] % mod2 + getHashR(T[v].R)) % mod2;

}

int Merge(int L, int R) {
                             
	if (!L || !R) return L + R;

	if (T[L].y > T[R].y) {
		T[L].R = Merge(T[L].R, R);
		norm(L); norm(R);
		return L;
	} else {
		T[R].L = Merge(L, T[R].L);
		norm(L); norm(R);
		return R;
	}
}

void Split(int v, int x, int &L, int &R) {
	if (!v) {
		L = R = 0;
		return;
	}
	
	if (getSize(T[v].L) + 1 <= x) {
		Split(T[v].R, x - getSize(T[v].L) - 1, T[v].R, R);
		L = v;
	} else {
		Split(T[v].L, x, L, T[v].L);
		R = v;
	}
	norm(L); norm(R);
}

void Print(int v) {
	if (!v) return;
	Print(T[v].L);
	printf("%d ", T[v].v);
	Print(T[v].R);
}
int newTree(int val) {
	size++;
	T[size].hl = T[size].hr = val;
	T[size].v = val + 1;
	T[size].y = ((rand() << 16)|rand());
	assert(T[size].size == 1);
	norm(size);
	return size;
}
pair<ll, ll> getHash(int l, int r) {
	int L, R, Rl, Rr;
	Split(root, l - 1, L, R);
	Split(R, r - l + 1, Rl, Rr);
	pair<ll, ll> ans = mp(T[Rl].hl, T[Rl].hr);
	root = Merge(L, Merge(Rl, Rr));
	return ans;
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
	}

	for (int i = 0; i < n; ++i) 
		root = Merge(root, newTree(s[i] - '0'));

	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		char ch;
		scanf("\n%c", &ch);
		if (ch == '-') {
			int pos;
			scanf("%d", &pos); 
			int L, R, Rl, Rr;
			Split(root, pos - 1, L, R);
			Split(R, 1, Rl, Rr);
			root = Merge(L, Rr);
		} else if (ch == '?') {
			int l1, l2, len;
			scanf("%d%d%d", &l1, &l2, &len);
		    pair<ll, ll> hl = getHash(l1, l1 + len - 1);
		    pair<ll, ll> hr = getHash(l2, l2 + len - 1);
			if (hl == hr) puts("ia"); else
			puts("jok");
		} else
			assert(false);
	}
	return 0;
}

