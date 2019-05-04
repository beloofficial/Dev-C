#include<iostream>
#include<cstdio>
using namespace std;
long long int n,k,q=1,ans,sum=0,h,l=0,s=0;
int main()
{
cin>>n>>k;	
	for(int i=1;i<=k;i++)
	{
		ans=n*q;
		sum=sum+ans;
			if(i!=k)
			{
				s=s+3+2*l;
				l++;
			}
		q++;
	}cout<<sum-s;
return 0;
}
