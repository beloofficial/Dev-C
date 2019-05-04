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

int calcMin(multiset < int > &S, int x){
	int ans = 0;
	while(!S.empty()){
		multiset < int > :: iterator it = --S.end(); 
		int valMax = *it;
		S.erase(it);			
		int need = x - valMax;
		it = S.upper_bound(need);

		if ( it == S.begin() ){
			S.erase(--S.end());
			ans++;	
			continue;
		}
		it--;
		S.erase(it);
	}
	return ans;
}

int calcMax(multiset < int > &S, int x){
	int ans = 0;
	while (!S.empty()){
		multiset < int > :: iterator it = S.begin();
		int valMin = *it;
		S.erase(it);
		int need = x - valMin;
		it = S.upper_bound(need);
		if ( it == S.end() ){
			S.erase(S.begin());
			continue;
		}
		S.erase(it);
		ans++;
	}
	return ans;
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

	multiset < int > Smini; // without min element
	multiset < int > Smaxi; // without max element

	int minVal = inf, maxVal = -inf;
	for (int i=1;i<2*n;i++){
		Smini.insert(a[i]);
		Smaxi.insert(a[i]);	
		minVal = min(minVal, a[i]);
		maxVal = max(maxVal, a[i]);
	}

	Smini.erase(Smini.find(minVal));
	Smaxi.erase(Smaxi.find(maxVal));

	cout <<calcMin(Smaxi, a[0] + maxVal) + 1<<" "<<calcMax(Smini, a[0] + minVal) + 1<<endl;
	

	#ifdef LOCAL
	cerr << (double)clock() * 1.0 / CLOCKS_PER_SEC << endl;
	#endif

	return 0;
}



