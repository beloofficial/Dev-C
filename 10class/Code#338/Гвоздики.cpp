#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdio>
using namespace std;
long int n,a[11111],ans=0,q,w,e,r,t;
bool b[11111];
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i];	
} 
sort(a+1,a+n+1);
a[0]=5000000;
a[n+1]=5000000;
for(int i=1;i<=n;i++)
{
	if(b[i]!=1)
	{
		q=abs(a[i]-a[i-1]);
		w=abs(a[i]-a[i+1]);
		e=abs(a[i+1]-a[i+2]);
		if(i==n)
		{
			ans+=abs(a[i]-a[i-1]);b[i]=1;
		}
		else if(w<=q+e)
		{
			b[i]=1;b[i+1]=1;
			ans+=w;
		}
		else 
		{
			b[i]=1;b[i-1]=1;
			ans+=q;
		}
	}
}cout<<ans;
return 0;
}

