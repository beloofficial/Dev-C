#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
int n,a[111111],b[111111];
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	b[a[i]]=i;
}
for(int i=1;i<=n;i++)
{
cout<<b[i]<<" ";
}
	
	
return 0;	
}
