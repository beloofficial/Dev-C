#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int n,a[111111],q;
int main()
{/*
freopen("B.in","r",stdin);
freopen("B.out","w",stdout);*/
cin>>n;
for(int i=1;i<=n;i++)
	{
		cin>>q; a[q]++;
	}
for(int i=1;i<=n+1;i++)
	{
	if(a[i]==0){
		cout<<i;return 0;}
	}
} 
