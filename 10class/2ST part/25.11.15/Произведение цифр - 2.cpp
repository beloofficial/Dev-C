#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int l,r,sum=1,k=0;
cin>>l>>r;
for(int i=l;i<=r;i++)
{
	int x=i;
	int z=i;
	while(x!=0)
	{
		sum*=x%10;
		x/=10;
	}
	
	if(sum!=0)
	{
	
	if(z%sum==0)k++;
	}
	sum=1;
}cout<<k;
return 0;
}
