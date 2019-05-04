#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int used[11111];
int ans=0,sum=0,q=0,z=0;
bool used1[11111];
vector<int> g[11111];
void qwe(int v)
{
	used[v]=1;
	for(int i=0;i<g[v].size();i++)
	{
		if(used[g[v][i]]==1)
		{
			cout<<"NO";exit(0);
		}
		else 
		qwe(g[v][i]);
	}
	used[v]=2;
}
int main()
{
int n,a;
cin>>n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		
		cin>>a;
		if(a==1)
		g[i].push_back(j);
		g[j].push_back(i);
	}	
}
qwe(1);

for(int i=1;i<=q;i++)
{
	if(used[i]==0)
	{
	//	cout<<"NO";return 0;
	}
}
cout<<"YES";

return 0;
}
