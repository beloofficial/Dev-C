#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("delivery.in","r",stdin);
freopen("delivery.out","w",stdout);
   long long  int n,m,p,a[111111],b[111111],k=0,i,q=0;
cin>>n>>m>>p;
for(i=1;i<=n;i++)
{cin>>a[i];}    
for(i=1;i<=n;i++)
{cin>>b[i];}
    for(i=1;i<=n;i++)
    {
        k=k+a[i];             
           if(k>=b[i])k=k+p;
           else{ k=k+m;q=k-b[i];
                       if(k>=b[i]){k=k+p;k=k-q;}
                 }   
    }
    cout<<k;
//system("pause");
return 0;    
}
