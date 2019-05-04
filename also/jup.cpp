#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("D.in","r",stdin);
freopen("D.out","w",stdout);
    long long int i,n,a,k=0;
cin>>i>>n;
for(a=i;a<=n;a++)
{if(a%2==0)k=k+a;}
    cout<<k;
    
    
return 0;    
}
