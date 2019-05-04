#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,a[11111111],b[11111111],c[1111111],k=0,ans=0,z=0;
int main()
{

cin>>n>>m;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=m;i++)
{
	cin>>b[i];
}

for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		if(a[i]==b[j]){c[j]=i;k++;}
	}
	if(k>1)ans++;
	if(k>0)z++;
	k=0;
}
if(z==n)
{
	if(ans>0)cout<<"Ambiguity";
	else 
	{cout<<"Possible"<<endl;
		for(int i=1;i<=m;i++)
		{
			cout<<c[i]<<" ";
		}
	}
}
else cout<<"Impossible";
return 0;
}
