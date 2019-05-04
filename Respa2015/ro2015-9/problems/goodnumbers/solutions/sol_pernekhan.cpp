#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <numeric>
#include <ctime>
#include <cstdlib>
#include <sstream>

using namespace std;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define y1 stupid_y1
#define ll long long
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define all(a) a.begin(), a.end()
#define sqr(x) ((x)*(x))
#define sz(a) (int)a.size()
#define file "D"

const int inf = (int)1e9;
const double eps = 1e-9;
const double pi = acos(-1.0);

int a, c, l, r;

bool check(int x){
	return l <= x && x <= r && a%x == c;
}

int main () {
	freopen(file".in", "r", stdin);
	freopen(file".out", "w", stdout);

	cin >>a>>c>>l>>r;

	if ( !(l + r) || a < c){
		cout <<0<<endl;
		return 0;
	}
	if ( l == 0 ) l++;

	if ( a == c ){
		cout <<max(0, r - max(c, l-1))<<endl;
		return 0;
	}
	
	int d = a - c;
	int ans = 0;

	for (int i=1;i*1ll*i<=d;i++){
		if ( d%i == 0 ){
			ans += check(i);
			if ( i == d/i ) continue;
			ans += check(d/i);			
		}
	}

	cout <<ans<<endl;

	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}

