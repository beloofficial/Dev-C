#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("6.in","r",stdin);
freopen("6.out","w",stdout);
    long long int i,n,a[8000],b[8000],j,mx=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];}
for(i=1;i<=n;i++)
{
                 for(j=i+1;j<=n;j++)
                 {
                    if(b[i]<=b[j])a[i]=a[i]+a[j];
                    else break;             
                 }
                 if(a[i]*b[i]>=mx)mx=a[i]*b[i];
                 else mx=mx;
}
cout<<mx;
system("pause");
return 0;    
}
