#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long long int a[11111111],mx=-999999999,w=0,e=0,ans=0,ans1=0;
int main()
{freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
	int n,q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0){w=w+a[i];ans++;}
		else if(a[i]<0){e=e+a[i];ans1++;}
	}
	e=abs(e);
	if(w>e)w=1;
	else w=2;
	if(w==1)cout<<ans<<endl;
	else cout<<ans1<<endl;
	if(w==1)
	{
	
		for(int i=1;i<=n;i++)
		{
			if(a[i]>0)cout<<i<<" ";
		}
	}
	else if(w==2)
	{
	
		for(int i=1;i<=n;i++)
		{
			if(a[i]<0)cout<<i<<" ";
		}
	}
return 0;
}
