#pragma comment(linker, "/STACK:640000000")
#include<iostream>
#include<cstdio>
#include<cassert>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<bitset>
#include<algorithm>

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define ll long long
#define bit __builtin_popcountll
#define sqr(x) (x) * (x)
#define forit(it,S) for(__typeof((S).begin()) it = (S).begin(); it != (S).end(); it++)

using namespace std;

typedef pair<int, int> pii;

const double eps = 1e-9;
const double pi = acos(-1.0);

const int maxn = (int)1e5 + 10;

deque<int> v[maxn];

int main() {
	freopen("A.in","r",stdin);
	freopen("A.out","w",stdout);
	
	int n,m; cin >> n >> m;

	while(m--) {
		int l,r,x; scanf("%d%d%d",&l,&r,&x);
		if (x == 0) {
			for (int i = l; i <= r; i++) 
				v[i].ppb();
			continue;
		}
		for (int i = l; i <= r; i++) {
			v[i].pb(x);
			if (v[i].size() > 1000) v[i].pop_front();
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ",v[i].empty() ? 0 : v[i].back());
	}

	return 0;
}
