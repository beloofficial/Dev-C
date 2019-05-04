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

int gett(vector < int > &a, int myVal){
	int ans = 0;
	for (int i=0;i<sz(a)/2;i++){
		if ( a[i] + a[sz(a)-1-i] > myVal ) ans++;
	}	
	return ans + 1;
}

int get2(vector < int > &a, int myVal){
	int ans = 0;
	for (int i=0;i<sz(a);i+=2){
		if ( a[i] + a[i+1] > myVal ) ans++;
	}	
	return ans + 1;
}

int get3(vector < int > &a, int myVal){
	int ans = 0;
	for (int i=sz(a) - 1;i>0;i-=2){
		if ( a[i] + a[i-1] > myVal ) ans++;
	}	
	return ans + 1;
}


int calcHigh(vector < int > a){
	int myVal = *a.begin(); a.erase(a.begin());
	sort(all(a)); myVal += a.back();  
	a.pop_back();
	return min(gett(a, myVal), min(get2(a, myVal), get3(a, myVal)));
}

int calcLow(vector < int > a){
	int myVal = *a.begin(); a.erase(a.begin());
	sort(all(a)); myVal += *a.begin();
	a.erase(a.begin());
	return max(gett(a, myVal), max(get2(a, myVal), get3(a, myVal)));
}

int main () {
	freopen(file".in", "r", stdin);
	freopen(file".out", "w", stdout);

	int n;
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



