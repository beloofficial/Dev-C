#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,m,k,ans=0;
cin>>n>>m>>k;
while(n>0&&m>0)
{
	m=m-2;
	n=n-(k-2);ans++;
}
if(n>0||m>0)
cout<<0;
else 
	cout<<ans;
return 0;
}
