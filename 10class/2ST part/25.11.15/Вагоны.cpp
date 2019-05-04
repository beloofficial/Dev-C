#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[111111],k=0;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
	
for(int i=1;i<=n-1;i++)
{
	if(a[i]+1!=a[i+1])k++;
}
cout<<k;
return 0;
}
