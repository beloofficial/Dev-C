#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#pragma comment(linker, "/STACK:16777216")
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define LL long long
#define bit __builtin_popcountll
#define sqr(x) (x) * (x)
using namespace std;
typedef pair<int, int> pii;
const double eps = 1e-9;
const double pi = acos(-1.0);
const LL INF = (LL)1e18;
int main()
{
freopen("D.in", "r", stdin);
freopen("D.out", "w", stdout);

	int b,n,m;
	cin >> b >> n >> m;
	LL ans = 0;
	for (int i = 0; i < b; i++) {
		int k; cin >> k;
		LL cur = INF;
		for (int j = 0; j < k; j++) {
			int x; scanf("%d",&x);
			cur = min(cur,(LL)x);
		}
		ans = ans + cur;
	}	
	cout << ans << endl;
	return 0;
}
