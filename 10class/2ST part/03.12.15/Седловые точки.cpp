#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,mx=1000,a[800][800],b[1111],c[1111],z,ans,q=1,t;
int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];	if(a[i][j]<mx){
			mx=a[i][j];b[q]=j;t=0;}
			else if(a[i][j]==mx)t++;
	}	
	for(int p=q+1;p<=t+q+1;p++)
	{
		b[p]=b[q];
	}
	q=q+1+t;t=0;
	mx=2000;
}q--;
	for(int i=1;i<=q;i++)
	{	
			for(int j=1;j<=m;j++)
			{
				if(a[i][b[i]]<a[b[i]][j]){
				z++;break;}
			}
		if(z==0)ans++;z=0;
		
	}cout<<ans;
return 0;
}


