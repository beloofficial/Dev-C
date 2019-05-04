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
const int maxn = (int)1e5 + 10;
const LL INF = (LL)1e18;
LL str[maxn],deg[maxn],strComp[maxn],mask[maxn],mmask[maxn];
LL cost[1 << 12],dp[1 << 12];
vector<int> g[maxn],gr[maxn],G[maxn];
vector<int> order;
vector<int> who[maxn];
int comp[maxn];
bool used[maxn];
void dfs(int v) {
	used[v] = true;
	for (int i = 0; i < sz(g[v]); i++) {
		int to = g[v][i];
		if (used[to]) continue;
		dfs(to);
	}
	order.pb(v);
}
void go(int v, int c) {
	who[c].pb(v);
	comp[v] = c;
	for (int i = 0; i < sz(gr[v]); i++) {
		int to = gr[v][i];
		if (comp[to]) continue;
		go(to,c);
	}
}
int main()
{
freopen("D.in", "r", stdin);
freopen("D.out", "w", stdout);

	int b,n,m; cin >> b >> n >> m;
	int id = 0;
	for (int i = 0; i < b; i++) {
		int k; scanf("%d",&k);
		for (int j = 0; j < k; j++) {
			scanf("%d",&str[id]);
			mmask[id] = 1 << i;
			id++;
		}
	}
	for (int i = 0; i < m; i++) {
		int k; scanf("%d%d",&str[n + i],&k);
		for (int j = 0; j < k; j++) {
			int x; scanf("%d",&x);
			--x;
			g[n + i].pb(x);
			gr[x].pb(n + i);
		}
	}
	for (int i = 0; i < n + m; i++) {
		if (used[i]) continue;
		dfs(i);
	}
	reverse(all(order));
	int c = 0;
	for (int i = 0; i < n + m; i++) {
		int v = order[i];
		if (comp[v]) continue;
		++c;
		go(v,c);
	}
	for (int i = 0; i < n + m; i++) {	
		for (int j = 0; j < sz(g[i]); j++) {
			int to = g[i][j];
			if (comp[i] == comp[to]) continue;
			deg[comp[i]]++;
			G[comp[to]].pb(comp[i]);
		}
	}
	for (int i = 1; i <= c; i++) {
		strComp[i] = INF;
		for (int j = 0; j < sz(who[i]); j++) {
			strComp[i] = min(strComp[i],str[who[i][j]]);
		}
	}
	queue<int> q;
	for (int i = 1; i <= c; i++) {
		if (deg[i] != 0) continue;
		mask[i] = mmask[who[i][0]];
		q.push(i);
	}
	for (int i = 0; i < (1 << b); i++) {
		cost[i] = INF;
		dp[i] = INF;
	}
	cost[0] = 0;
	dp[0] = 0;
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		cost[mask[v]] = min(cost[mask[v]],strComp[v]);
		for (int i = 0; i < sz(G[v]); i++) {
			int to = G[v][i];
			mask[to] |= mask[v];
			deg[to]--;
			if (deg[to] == 0) {
				q.push(to);
			}
		}
	}
	for (int i = 0; i < (1 << b); i++) {
		for (int j = 0; j < (1 << b); j++) {
			dp[i | j] = min(dp[i | j],dp[i] + cost[j]);
		}
	}
	cout << dp[(1 << b) - 1] << endl;
	return 0;
}
