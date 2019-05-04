#include <iostream>
#include <vector>
#define INF 1e9+7
using namespace std;
struct edge 
{
    int a, b, cost;
};
int n, m, v, i;
vector<edge> e;
void solve() 
{
    vector<int> d (n, INF);
    d[0] = 0;
    for (;;) 
 {
        bool any = false;
        for (int j=0; j<m; ++j)
            if (d[e[j].a] < INF)
                if (d[e[j].b] > d[e[j].a] + e[j].cost) 
    {
                    d[e[j].b] = d[e[j].a] + e[j].cost;
                    any = true;
                }
        if (!any)  break;
    }
    for(int i=0; i<n; i++)
    {
        if(d[i]<INF) cout<<d[i]<<" ";
        else cout<<30000<<endl;
    }
}
 
int main()
{
    cin>>n>>m;
    edge t;
    for(i=0; i<m; i++)
    {
        cin>>t.a>>t.b>>t.cost;
        t.a--; t.b--;
        e.push_back(t);
    }
    solve();
    return 0;
}
