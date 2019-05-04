#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz size()
int n,m,t,p[111111],r[111111],tw;
vector < pair < pair < int,int > ,pair < int,int > > > e;
vector < int > ans;
 
int get(int x)
{
   if(x==p[x])return x;
    else return p[x]=get(p[x]);
}
 
void unite(int a,int b)
{
    a=get(a);
    b=get(b);
    if(a!=b)
    {
        if(r[a]>r[b])
            swap(a,b);
        p[a]=p[b];
        r[b]+=r[a];
    }
}
 
int main()
{
    //freopen("A.in","r",stdin);
    //freopen("A.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        p[i]=i;
        r[i]=1;
    }
    e.resize(m+1);
    for(int i=1;i<=m;i++)
    {
        cin>>e[i].se.fi>>e[i].se.se>>e[i].fi.fi;
        e[i].fi.se=i;
    }
    sort(e.begin(),e.end());
    for(int i=1;i<=m;i++)
    {
        int a=e[i].se.fi,b=e[i].se.se,ed=e[i].fi.fi;
        if(get(a)!=get(b))
        {
            tw+=ed;
            ans.pb(e[i].fi.se);
            unite(a,b);
        }
    }
    if(ans.size()<n-1)
    {
        cout<<"-1";
        return 0;
    }   
    cout<<tw<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
        system("pause");
    return 0;
}
