#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int n,m,a[30000],b[30000],i,k=0,l=0,q=0,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
                     cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=m;i++)
    {
                     cin>>b[i];
    }
    sort(b+1,b+n+1);
    if(n>=m)
    {
     for(i=1;i<=n;i++)
     {
                     for(j=1;j<=n;j++)
                     {
                        if(a[i]==b[j]){k++;break;}                  
                     }                 
         if(k>0)l++;k=0;
     }
     q=1;
    }
    else
    {
       for(i=1;i<=m;i++)
     {
                     for(j=1;j<=n;j++)
                     {
                        if(b[i]==a[j]){k++;break;}                  
                     }                 
         if(k>0)l++;k=0;
     }   
     q=2; 
    } 
    if(q==1)
    {
    if(l==n)cout<<1;
    else cout<<0;        
    }
    else 
    {
     if(l==m)cout<<1;
     else cout<<0;     
    }
//system("pause");
return 0;    
}
