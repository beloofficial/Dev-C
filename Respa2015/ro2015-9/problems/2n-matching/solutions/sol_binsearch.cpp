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
int a[200200];

bool check(int l, int r, int myVal, bool isHigh){
	for (int i=l, cnt = 0;i<=r;i++, cnt++){
		int ni = r - cnt;
		if ( isHigh && a[i] + a[ni] > myVal ) return false;
		if ( !isHigh && a[i] + a[ni] <= myVal ) return false;	
	}
	return true;
}

int calcHighest(){
	int l = 1, r = n-1;
	int ans = 0;
	while ( l <= r ){
		int mid = (l + r)/2;
		if ( check(1, 2*mid, a[0] + a[2*n-1], true)){
			l = mid + 1;
			ans = mid;
		}	
		else {
			r = mid - 1;
		}
	}
	return n - ans;
}

int calcLowest(){
	int l = 0, r = n-1;
	int ans = n-1;
	while (l <= r){
		int mid = (l + r)/2;
		if ( check(2*n-1 - 2*mid + 1, 2*n-1, a[0] + a[1], false) ){
			l = mid + 1;
			ans = mid;	
 		}	
 		else 
 			r = mid - 1;
	}
	return ans + 1;
}

int main () {
	freopen(file".in", "r", stdin);
	freopen(file".out", "w", stdout);

	scanf("%d", &n);

	for (int i=0;i<2*n;i++){
		scanf("%d", &a[i]);
	}

	if ( n == 1 ){
		cout <<1<<" "<<1<<endl;
		return 0;
	}

	sort(a + 1, a + 2*n);

	cout <<calcHighest()<<" "<<calcLowest()<<endl;



	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}

