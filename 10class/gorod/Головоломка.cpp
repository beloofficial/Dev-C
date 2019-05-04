#include<iostream>
#include<string>
using namespace std;
char a,h;
int n,m,c[111];
string b;
int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		cin>>a;c[a-64]++;
	}
}

	for(int i=1;i<=m;i++)
	{
		cin>>b;
		for(int j=0;j<b.size();j++)
		{
		
		c[b[j]-64]--;
		}
	}
	for(int i=1;i<=30;i++)
	{
		if(c[i]>0)
		{
			h=i+64;
			for(int j=1;j<=c[i];j++)
			{
				cout<<h;
			}
		}
	}
return 0;
}
