#include<iostream>
#include<cstdio>
using namespace std;
	int i,n,a=0,b;
	bool used[10000];
int main()
{
	cin>>n>>b;
	int res=0;
	for(i=1;i<=n;i++)
	{
		res=(res+b)%i;
	}cout<<res+1;
	return 0;
}
