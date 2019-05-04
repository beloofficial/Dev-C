#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,ha[40000],hd[40000],l[40000],md[40000],ma[40000];
int main()
{
	freopen("heroes.in","r",stdin);
	freopen("heroes.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>ha[i]>>hd[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>ma[i]>>md[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k=1;k>0;k++)
			{
				md[j]-=ha[i];
				hd[i]-=ma[j];
				if(hd[i]<=0||md[j]<=0)break;
		 	}
			if(md[j]<=0)l[i]++;
			if(hd[i]<=0)break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<l[i];
		cout<<endl;
	}
	system("pause");
	return 0;
}
