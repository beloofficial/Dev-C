#include<iostream>
#include<cstdio>
using namespace std;
long long int n,a[111111],m,q,mx[111111];
int main()
{

cin>>n;	
for(int i=1;i<=n;i++)
{
	cin>>m;
	for(int j=1;j<=m;j++)
	{
		cin>>q;a[j]++;a[q]++;
	}
	for(int p=1;p<=m;p++)
	{
		if(a[p]>mx[i])mx[i]=a[p];
		a[p]=0;
	}
}
for(int i=1;i<=n;i++)
{
	cout<<mx[i]<<endl;
}
return 0;
}
