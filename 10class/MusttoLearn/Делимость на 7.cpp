#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
unsigned long long  n,m,c[1111111],a,b,q=0,p[1111111];

int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	scanf("%lld", &a);if(c[a]==0)c[a]++;
}
for(int i=1;i<=m;i++)
{
	scanf("%lld", &b);if(c[b]==1){
	c[b]++;q++;p[q]=b;
}
}
sort(p+1,p+q+1);
	for(int i=1;i<=q;i++)
	{
		printf("%lld ",p[i]);
	}

return 0;
}
