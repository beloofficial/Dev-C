#include<map>
#include<cmath>
#include<ctime>
#include<vector>
#include<cstdio>  
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace std;
 
int n,m,i,l,a[1001],b[1001],j,kol;
bool w[1001];
 
   bool check(int x)
{
       for(int i = 1; i <= l; i++)
       if (b[i] < l + 1 - i) return false;
       return true;
}  
int main()
{
    #ifndef ONLINE_JUDGE  
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    #endif
 
     cin>>n;
 
     for(i = 1; i <= n; i++)
     {
            cin>>a[i];
     }
     
     sort(a+1,a+n+1);
     
     for(i = 1; i <= n; i++)
     {
             if (w[i] == false)
             {
                 w[i] = true;
                 kol++;
                 l = 1;
                    for(j = 1; j <= n; j++)
                    {
                          if (w[j] == false && a[j] >= l)
                          {
                                     l++;
                                     w[j] = true;
                          }
                    }
             }
     }
     cout<<kol;
 
 
    return 0;
}