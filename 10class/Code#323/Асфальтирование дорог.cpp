#include<iostream>
#include<cstdio>
using namespace std;
int n,x,y,a[11111],sz;
bool used[11111];
int main()
{
cin>>n;
for(int i=1;i<=n*n;i++)
{
	cin>>x>>y;
	if(used[x]==0&&used[y]==0)
	{sz++;
		used[x]=1;used[y]=1;
		a[sz]=i;
	}
}	
for(int i=1;i<=sz;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}
