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

int main() {
	freopen("D.in","r",stdin);
	freopen("D.out","w",stdout);

	int a,c,l,r; cin >> a >> c >> l >> r;

	if (a < c) {
		cout << 0 << endl;
		return 0;
	}

	if (a == c) {
		a++;
		l = max(l,a);
		if (l > r) {
			cout << 0 << endl;
		} else {
			cout << r - l + 1 << endl;
		}
		return 0;
	}

	int e = a - c;

	vector<int> v;

	for (int i = 1; i * i <= e; i++) if (e % i == 0) {
		v.pb(i);
		if (i != e / i) v.pb(e / i);
	}

	int res = 0;

	for (int i = 0; i < sz(v); i++) {
		if (v[i] > c && l <= v[i] && v[i] <= r) {
			res++;
		}
	}

	cout << res << endl;

	return 0;
}
