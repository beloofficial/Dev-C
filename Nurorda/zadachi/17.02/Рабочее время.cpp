#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,D,M,h,m;
int p1,p2,p3;
int dd[111111],vv[111111];
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>D>>M>>h>>m;
	dd[i]=M*30+D;
	vv[i]=h*60+m;
}
for(int i=1;i<=n-1;i++)
{
	for(int j=i+1;j<=n;j++)
	{
		if(dd[i]>dd[j]){swap(dd[i],dd[j]);swap(vv[i],vv[j]);}
		else if(dd[i]==dd[j])
		{
			if(vv[i]>vv[j])
			{
				swap(dd[i],dd[j]);swap(vv[i],vv[j]);
			}
		}
	}
}
for(int i=1;i<=n;i++)
{
	cout<<dd[i]<<" ";
}
return 0;
}
