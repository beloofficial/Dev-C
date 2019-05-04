#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define pii pair < int, int >
#define pll pair < long long, long long>
#define ull unsigned long long
#define y1 stupid_cmath
#define left stupid_left
#define right stupid_right
#define vi vector <int>
#define sz(a) (int)a.size()
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define all(a) a.begin(), a.end()
#define sqr(x) ((x) * (x))

const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n;
int a[100100];
vi pos[100100];
map <int, int> id;
vi v;

int f(int n) {
    return n * (n + 1) / 2;
}

int main(){
	freopen("C.in","r",stdin);
	freopen("C.out","w",stdout);    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", a + i);
    
    for(int i = 0; i < n; i++) v.pb(a[i]);
    
    sort(all(v));
    v.resize(unique(all(v)) - v.begin());
    
    for(int i = 0; i < sz(v); i++) id[v[i]] = i;
    
    for(int i = 0; i < n; i++) a[i] = id[a[i]];
    
    for(int i = 0; i < n; i++)
        pos[a[i]].pb(i);
    
    ll ans = 0;
    for(int l = 1; l < n; l++) {
        vi used(n, 0);
        set <pair <int, int> > s;
        s.insert(mp(0, l-1));
        ll cur = l * (l + 1) / 2;
        for(int r = l; r < n; r++) {
            if(!used[a[r]]) {
                int val = a[r];
                used[val] = 1;
                for(int i = 0; i < pos[val].size() && pos[val][i] < l; i++) {
                    int p = pos[val][i];
                    __typeof(s.begin()) it = s.lower_bound(mp(p, n));
                    if(it == s.end()) it--;
                    else if((*it).f != p) {
                        if(it == s.begin()) continue;
                        else it--;
                    }
                    int L = (*it).f, R = (*it).s;
                    if(p < L || p > R) continue;
                    int sz = R - L + 1;
                    s.erase(it);
                    cur -= f(sz);
                    cur += f(p - L);
                    cur += f(R - p);
                    if(L <= p-1) s.insert(mp(L, p-1));
                    if(p+1 <= R) s.insert(mp(p+1, R));
                }
            }
            ans += cur;
        }
    }
    
    cout << ans << endl;
        
    return 0;
}
