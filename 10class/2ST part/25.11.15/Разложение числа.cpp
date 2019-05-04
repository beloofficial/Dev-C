#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,k=1,mx=-9999999,l=0,sum=0;
cin>>n;
for(int i=1;i<=n/2+1;i++)
{
	for(int j=i;j<=n/2+1;j++)
	{
		sum+=j;l++;if(sum==n){
		k=2;break;}
		if(sum>n)break;
		
	}
	if(k==2)
	{
		if(l>mx)mx=l;
	}
	k=1;sum=0;l=0;
}cout<<mx;
return 0;
}
