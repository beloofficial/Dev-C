#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,n,a[111111],k=0;
cin>>n;
for(i=1;i<=n;i++)
{
	cin>>a[i];
}
	sort(a+1,a+n+1);
	for(i=1;i<=n/2+1;i++)
	{
		k=k+(a[i]/2+1);
	}
		cout<<k;
return 0;
}
