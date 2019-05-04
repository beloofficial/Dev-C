#include<iostream>
#include<cstdio>
using namespace std;
int n,a[222222],b[222222],ans=0;
int main()
{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(b[i]<a[i])
			{
			int q=a[i]-b[i];
						b[i]+=q;
						b[i+1]=b[i];
			ans+=q;
			}
			else if(b[i]>a[i])
			{
			int q=b[i]-a[i];
						b[i]-=q;
						b[i+1]=b[i];
			ans+=q;
			}
			else b[i+1]=b[i];
		}
		cout<<ans;
	return 0;
}

