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
char s[3000000];
int n, m;

int main() {
freopen("H.in", "r", stdin);
freopen("H.out", "w", stdout);

	gets(s);
	n = strlen(s);

	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		char ch;
		scanf("\n%c", &ch);
		if (ch == '-') {
			int pos;
			scanf("%d", &pos); --pos;
			for (int j = pos; j < n; ++j)
				s[j] = s[j + 1];
			--n;
			s[n] = 0;
		} else if (ch == '?') {
			int l1, l2, len;
			scanf("%d%d%d", &l1, &l2, &len); --l1; --l2;
			bool eq = true;
			for (int i = 0; eq && i < 100; ++i) {
				int j = rand() % len;
				if (s[l1 + j] != s[l2 + j]) 
					eq = false;
			}
			if (eq) puts("ia"); else
			puts("jok");
		} else
			assert(false);
	}
	return 0;
}
