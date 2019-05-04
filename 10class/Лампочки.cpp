#include<iostream>
#include<cstdio>
using namespace std;
bool a[111111];
int main()
{
int n,m,q,x;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	cin>>x;
	for(int j=1;j<=x;j++)
	{
		cin>>q;
		a[q]=1;
	}
}
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=1){cout<<"NO";return 0;}
	}
	cout<<"YES";
return 0;
}
