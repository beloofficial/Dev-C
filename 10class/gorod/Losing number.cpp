#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int n,a[111111];
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
for(int i=1;i<=n+1;i++)
	{
	if(a[i]!=i){
		cout<<i;return 0;
	}
	}
} 
