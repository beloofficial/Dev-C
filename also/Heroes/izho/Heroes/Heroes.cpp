#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,ha[40001],hd[40001],l[40001],md[40001],ma[40001],z[40001];
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
		z[i]=md[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			md[j]=z[j];
			for(int k=1;k>0;k++)
			{
				md[j]-=ha[i];                     //5 20 // 22 20
				hd[i]-=ma[j];
				if(hd[i]<=0||md[j]<=0)break;
		 	}
			if(md[j]<=0)l[i]++;
			if(hd[i]<=0)break;
		}
	

	
		cout<<l[i];
		cout<<endl;}
	return 0;
}
