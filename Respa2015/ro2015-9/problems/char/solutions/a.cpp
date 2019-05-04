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

const int maxn = (int)1e5 + 10;

char s[maxn];

int w[256];

int main() {
	freopen("B.in","r",stdin);
	freopen("B.out","w",stdout);


	scanf("%s",s);

	int k; cin >> k;

	int res = -1;

	int n = strlen(s);

	for (int i = 0; i < n; i++) {
		memset(w,0,sizeof(w));
		int c = 0;
		for (int j = i; j < n; j++) {
			if (res != -1 && j - i + 1 >= res) break;
			if (w[s[j]] == 0) c++;
			w[s[j]]++;
			if (c == k) {
				res = j - i + 1;
				break;
			}
		}
	}

	cout << res << endl;

	return 0;
}
