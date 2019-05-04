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
#define file "E"

const int inf = (int)1e9;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n, N;
int a[22];
int dpmax[1<<20];
int dpmin[1<<20];

int calcMin(int mask, int val){
	if ( mask == (1<<N)-1 ) return 0;
	int &res = dpmin[mask];
	if ( res != -1 ) return res;
	res = inf;
	for (int i=0;i<N;i++){
		if ( mask&(1<<i) ) continue;
		for (int j=i+1;j<N;j++){
			if ( mask&(1<<j) ) continue;
			res = min(res, calcMin(mask|(1<<i)|(1<<j), val) + (a[i] + a[j] > val) );
		}
	}
	return res;
}

int calcMax(int mask, int val){
	if ( mask == (1<<N) - 1 ) return 0;
	int &res = dpmax[mask];
	if ( res != -1 ) return res;
	res = -inf;
	for (int i=0;i<N;i++){
		if ( mask&(1<<i) ) continue;
		for (int j=i+1;j<N;j++){
			if ( mask&(1<<j) ) continue;
			res = max(res, calcMax(mask|(1<<i)|(1<<j), val) + (a[i] + a[j] > val));
		}
	}
	return res;
}

int main () {
	freopen(file".in", "r", stdin);
	freopen(file".out", "w", stdout);

	scanf("%d", &n);
	N = 2*n;

	for (int i=0;i<N;i++){
		scanf("%d", &a[i]);
	}

	memset(dpmax, -1, sizeof(dpmax));
	memset(dpmin, -1, sizeof(dpmin));

	int v = -1;
	for (int i=1;i<N;i++){
		if ( v == -1 || a[i] < a[v] ) v = i;
	}

	int maxi = calcMax(1|(1<<v), a[0] + a[v]) + 1;

	v = -1;
	for (int i=1;i<N;i++){
		if ( v == -1 || a[i] > a[v] ) v = i;
	}

	int mini = calcMin(1|(1<<v), a[0] + a[v]) + 1;

	cout <<mini<<" "<<maxi<<endl;


	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}

