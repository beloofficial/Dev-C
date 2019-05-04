#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("sapsan.in","r",stdin);
freopen("sapsan.out","w",stdout);
   long long int n,k=0,i;
cin>>n;
for(i=n/2;i>=1;i=i-1)
{
if(i/2+i<=n/2&&i%2==0){k=i;break;}                   
}
cout<<i*2;
//system("pause");
return 0;    
}
