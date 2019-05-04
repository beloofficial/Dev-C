#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int n,m,k,x,y,i,j,s=0;
long long int a[201][201];
cin>>n>>m>>k;	
for(i=1;i<=k;i++)
{
	cin>>x>>y;
	a[x][y]=-1;
}	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]!=-1)
			{
			if(a[i-1][j-1]==-1&&i!=1&&j!=1)s++;
			if(a[i-1][j]==-1&&i!=1)s++;
			if(a[i-1][j+1]==-1&&i!=1&&j!=m)s++;
			if(a[i][j-1]==-1&&j!=1)s++;
			if(a[i][j+1]==-1&&j!=m)s++;
			if(a[i+1][j-1]==-1&&i!=n&&j!=1)s++;
			if(a[i+1][j]==-1&&i!=n)s++;
			if(a[i+1][j+1]==-1&&i!=n&&j!=m)s++;
			}
		if(s>0)a[i][j]=s;
		if(a[i][j]==-1)cout<<"*";
		else if(a[i][j]>0&&a[i][j]<10)cout<<a[i][j];
		else cout<<".";s=0;
		}
		cout<<endl;
	}
return 0;
}
