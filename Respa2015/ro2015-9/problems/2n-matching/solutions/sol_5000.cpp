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
bool used[200200];

int calcHighest(int l, int r, int myVal){
	int ans = 0;
	memset(used, 0, sizeof(used));
	for (int i=r;i>=l;i--){
		if ( used[i] ) continue;
		bool ok = false;
		for (int j=i-1;j>=l;j--){
			if ( used[j] ) continue;
			int curVal = a[i] + a[j];
			if ( a[i] + a[j] <= myVal ){
				used[i] = used[j] = true;
				ok = true;
				break;			
			}
		}
		if ( !ok ){
			used[i] = used[i-1] = true;
			ans++;
    	}	
	}
	return ans+1;
}

int calcLowest(int l, int r, int myVal){
	int ans = 0;
	memset(used, 0, sizeof(used));
	for (int i=l;i<=r;i++){
		if ( used[i] ) continue;
		bool ok = false;
		for (int j=i+1;j<=r;j++){
			if ( used[j] ) continue;
			int curVal = a[i] + a[j];
			if ( a[i] + a[j] > myVal ){
				used[i] = used[j] = true;
				ok = true;
				ans++;
				break;						
			}
		}
		if ( !ok )
			used[i] = used[i+1] = true;
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
    sort(a + 1, a + 2*n);

    if ( n == 1 ){
        cout <<1<<" "<<1<<endl;
        return 0;
    }
    cout <<calcHighest(1, 2*n-2, a[0] + a[2*n-1])<<" "<<calcLowest(2, 2*n-1, a[0] + a[1])<<endl;

	



	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}

