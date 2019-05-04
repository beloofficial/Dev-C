#include<iostream>
#include<cstdio>
using namespace std;
int n,m,k,a[300],b[300]={999},c[300],d[300],q;
int main()
{
cin>>n>>m>>k;
for(int i=1;i<=k;i++)
{
b[i]=999;c[i]=999;
}
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		cin>>q;
		if(i>a[q]&&q!=0)
		{
			a[q]=i;
		}
		if(j<b[q]&&q!=0)
		{
			b[q]=j;
		}
		if(i<c[q]&&q!=0)
		{
			c[q]=i;
		}
		if(j>d[q]&&q!=0)
		{
			d[q]=j;
		}
	}
}
	for(int i=1;i<=k;i++)
	{
		cout<<b[i]-1<<" "<<n-a[i]<<" "<<d[i]<<" "<<n-c[i]+1<<endl;
	}
return 0;
}
