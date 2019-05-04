#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<utility>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<cmath>
#include<ctime>
#include<map>

#define S second
#define F first
#define ll long long
#define eps 1e-9
#define mkp make_pair
#define pb push_back
#define ull unsigned long long
#define inc(i,x,n) for(int i=(int)x;i<=(int)n;i++)
#define dec(i,n,x) for(int i=(int)n;i>=(int)x;i--)

using namespace std;

const int inf=1000000000; // default 1e9

double Time(){
  return double(clock())/double(CLOCKS_PER_SEC);
}

const int N=1000001;

int route[N], len = 0, a[N], po[N], first[N], t[N];
vector < vector <int> > g;
int req, x[N], y[N], timer = 0;
string str[N];

void dfs(int v){
	route[++len] = v;
	if(!first[v]) first[v] = len, a[len] = ++timer;
	else a[len] = a[first[v]];
	for(int i = 0; i < g[v].size(); i++){
		dfs(g[v][i]);
		route[++len] = v;
		if(!first[v]) first[v] = len, a[len] = ++timer;
		else a[len] = a[first[v]];
	}
}

void Build(int v, int l, int r){
	if(l > r) return;
	if(l == r){
		t[v] = a[l];
		po[v] = l;
		return;
	}  
	int mid = (l + r) / 2;
	Build(v * 2, l, mid);
	Build(v * 2 + 1, mid + 1, r);
	if(t[v * 2 + 1] > t[v * 2]) t[v] = t[v * 2], po[v] = po[v * 2];
	else t[v] = t[v * 2 + 1], po[v] = po[v * 2 + 1];
}

int res, res_inx;

void Get(int v, int l, int r, int L, int R){
	if(!v || r < L || l > R) return;
	if(L <= l && r <= R){
		if(res > t[v]) res = t[v], res_inx = po[v];
		return;
	}
	else if(l == r){
		if(res > t[v]) res = t[v], res_inx = po[v];		
		return;
	} 
	int mid = (l + r) / 2;
	Get(v * 2, l, mid, L, R);
	Get(v * 2 + 1, mid + 1, r, L, R);
}

int main(){
	freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
	//std::ios_base::sync_with_stdio(false);
	cin >> req;
	g.resize(500000);
	inc(i,1,req){
		cin >> str[i] >> x[i] >> y[i];
		if(str[i] == "ADD"){
			g[x[i]].pb(y[i]);
		}	
	}
	dfs(1);
	//inc(i,1,5) cout << first[i] << " ";
	//cout << endl;
	Build(1, 1, len);	
	inc(i,1,req){
		if(str[i] == "GET"){
			res = inf;
			int l = first[x[i]], r = first[y[i]];
//			if(first[x[i]] > first[y[i]]) swap(first[x[i]], first[y[i]]);
			if(l > r) swap(l, r);
//			cerr << l << " " << r << endl;
			Get(1, 1, len, l, r);
			cout << route[res_inx] << endl;
		}
	}
	return 0;	
}