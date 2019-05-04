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

int getMax(vector<int> v) {
	int a = v[0]; v.erase(v.begin());
	vector<int>::iterator it = max_element(all(v));
	a += *it; v.erase(it);
	sort(all(v));
	int ptr = sz(v) - 1;
	int res = 0;
	for (int i = 0;; i++) {
		while(i < ptr && v[i] + v[ptr] > a) ptr--;
		if (i >= ptr) break;
		ptr--;
		res++;
	}
	return res;
}

int getMin(vector<int> v) {
	int a = v[0]; v.erase(v.begin());
	vector<int>::iterator it = min_element(all(v));
	a += *it; v.erase(it);
	sort(all(v)); reverse(all(v));
	int ptr = sz(v) - 1;
	int res = 0;
	for (int i = 0;; i++) {
		while(i < ptr && v[i] + v[ptr] <= a) ptr--;
		if (i >= ptr) break;
		ptr--;
		res++;
	}
	return res + 1;
}

int main() {
	freopen("E.in","r",stdin);
	freopen("E.out","w",stdout);

	int n; cin >> n;

	vector<int> v(2 * n);

	for (int i = 0; i < 2 * n; i++) {
		scanf("%d",&v[i]);
	}	

	cout << n - getMax(v) << " " << getMin(v) << endl;

	return 0;
}
