#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int n,a[1111111],b[111111],z=0;
int main()
{

cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)printf("%lld ",a[i]);
		else {z++;
		b[z]=a[i];
	}
	}
	for(int i=z;i>=1;i--)
	{
		printf("%lld ",b[i]);
	}
return 0;
}
