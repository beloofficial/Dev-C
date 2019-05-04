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

int n;

int calcHigh(vector < int > a){
	int myVal = *a.begin(); a.erase(a.begin());
	sort(all(a)); myVal += a.back();  
	a.pop_back();
	vector < int > p(sz(a));
	for (int i=0;i<sz(a);i++) p[i] = i;
	int mini = n;
	do {
		int cur = 0;
		for (int i=0;i<p.size();i+=2){
			if ( a[p[i]] + a[p[i+1]] > myVal ) cur++;			
		}
		mini = min(mini, cur+1);
	}while(next_permutation(all(p)));	
	return mini;
}

int calcLow(vector < int > a){
	int myVal = *a.begin(); a.erase(a.begin());
	sort(all(a)); myVal += *a.begin();
	a.erase(a.begin());
	vector < int > p(sz(a));
	for (int i=0;i<sz(a);i++) p[i] = i;
	int maxi = 1;
	do {
		int cur = 0;
		for (int i=0;i<p.size();i+=2){
			if ( a[p[i]] + a[p[i+1]] > myVal ) cur++;			
		}
		maxi = max(maxi, cur+1);
	}while(next_permutation(all(p)));	
	return maxi;
}

int main () {
	freopen(file".in", "r", stdin);
	freopen(file".out", "w", stdout);

	scanf("%d", &n);

	vector < int > a(2*n);

	for (int i=0;i<2*n;i++){
		scanf("%d", &a[i]);
	}

	cout <<calcHigh(a)<<" "<<calcLow(a)<<endl;

	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}



