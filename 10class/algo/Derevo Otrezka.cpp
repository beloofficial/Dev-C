#include <iostream>
#include <stdio.h>
#include <fstream>
#include <queue>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <time.h>
#include <cassert>
#include <map>
#include <set>
#include <stack>
#include <time.h>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <bitset>
using namespace std;
int t[4222222],n,m,a[4222222];
int l,r;
int INF = (int)1e9 + 7;
void build(int x,int tl,int tr)
{
    if(tl==tr)
    {
        t[x]=a[tl];
        return;
    }
    int mid = (tl+tr)/2;
    build(x+x,tl,mid);
    build(x+x+1,mid+1,tr);
    t[x]=min(t[x+x],t[x+x+1]);
}
int mn(int x,int tl,int tr,int l,int r)
{
    if(r<tl||l>tr)
    {
        return INF;
    }
    if(l<=tl&&tr<=r)
    {
        return t[x];
    }
    int mid=(tl+tr)/2;
    return min(mn(2*x,tl,mid,l,r),mn(2*x+1,mid+1,tr,l,r));
}
void upd(int x, int tl,int tr,int ind,int y)
{
    if(tl==tr)
    {
        t[x]=y;
        return;
    }
    int mid=(tl+tr)/2;
    if(ind <= mid)
    {
        upd(x+x,tl,mid,ind,y);
    }
    else upd(x+x,tl,mid,ind,y);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    build(1,1,n);
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r;
        cout<<mn(1,1,n,l,r)<<endl;
    }
    return 0;
}
