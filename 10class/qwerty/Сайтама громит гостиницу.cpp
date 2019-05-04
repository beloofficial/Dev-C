#include<iostream>
#include<cstdio>
using namespace std;
long long int n,s,a[111111],b[111111],q=0,z=0;

int main()
{
cin>>n>>s;
for(int i=1;i<=n;i++)
{
	cin>>a[i]>>b[i];
}
for(int i=1;i<=n-1;i++)
{
	for(int j=i+1;j<=n;j++)
	{
		if(a[i]<a[j])
		{
			swap(a[i],a[j]);
			swap(b[i],b[j]);
		}
	}
}
a[0]=s;

for(int i=1;i<=n;i++)
{
	 z=z+a[i-1]-a[i];
	 
	 if(q+z>=b[i])q=q;
	 else 
	 		{
	 				if(b[i]>=z+q)q=b[i]-z;
	 				else q=q;
			}
}
z=z+a[n];
cout<<z+q;
return 0;
}
