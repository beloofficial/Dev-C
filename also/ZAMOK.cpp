#include<iostream>
using namespace std;
int main()
{int i,n,k,s,j,mx=0;
cin>>n>>k;
s=n-1;
j=n-2;
for(i=1;i<=k-1;i++)
{s=s+j;mx=mx+s;}
cout<<n+mx;
system("pause");
return 0;    
}
