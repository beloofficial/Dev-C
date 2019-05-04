#include<map>
#include<cmath>
#include<ctime>
#include<vector>
#include<cstdio>  
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<algorithm>
#define y1 abcde
#define sqr(x) ((x)*(x))
#define INF 1000*1000*1000
using namespace std;
 
  int n,m,i,k[1001],a[1001][1001],l[1001],r[1001],j,kaz,kz,mx,p,ans1,ans2;
 
int main()
{
    #ifndef ONLINE_JUDGE  
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    #endif
 
      cin>>n;
 
      for(i = 1; i <= n; i++)
      {
             cin>>k[i];
             for(j = 1; j <= k[i]; j++)
             cin>>a[i][j];
             l[i] = 1; r[i] = k[i];
             kaz += k[i];
      }
      kz = 0;
      while(kaz > 0)
      {
            if (kz == 0)
            {
                mx = -INF;
                for(i = 1; i <= n; i++)
                if (k[i] > 0 && a[i][l[i]] > mx) mx = a[i][l[i]], p = i;
                ans1 += a[p][l[p]];
                k[p]--;
                l[p]++;
            }  else
            {
                mx = -INF;
                for(i = 1; i <= n; i++)
                if (k[i] > 0 && a[i][r[i]] > mx) mx = a[i][r[i]], p = i;
                ans2 += a[p][r[p]];
                k[p]--;
                r[p]--;
            }
            kaz--;
            kz = (kz + 1) % 2;
      }
      cout<<ans1<<" "<<ans2;
 
     
    return 0;
}