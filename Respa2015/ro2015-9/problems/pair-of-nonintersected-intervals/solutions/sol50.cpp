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
map <int, int> id;
vi v;

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
    
    int ans = 0;
    for(int l1 = 0; l1 < n; l1++) {
        vi v(n, 0);
        for(int r1 = l1; r1 < n; r1++) {
            v[a[r1]] = 1;
            for(int l2 = r1+1; l2 < n; l2++) {
                bool ok = 1;
                for(int r2 = l2; r2 < n && ok; r2++) {
                    if(v[a[r2]]) ok = 0;
                    ans += ok;
                }
            }
        }
    }
    
    cout << ans << endl;
        
    return 0;
}
