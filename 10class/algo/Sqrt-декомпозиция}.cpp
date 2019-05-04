#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,a[11111];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int len=sqrt(n);
	int b[len];
	for(int i=0;i<n;i++)
	{
		b[i/len]+=a[i];
	}
	int l,r,sum=0;
	cin>>l>>r;
	l=l-1;r=r-1;
	int c_l=l/len;
	int c_r=r/len;
	if(c_l==c_r)
	{
		for(int i=l;i<=r;i++)
		{
			sum+=a[i];
		}
	}
	else 
	{
		for(int i=l,end=(c_l+1)*len-1;i<=end;i++)
		{
			sum+=a[i];
		}
		for(int i=c_l+1;i<=c_r-1;i++)
		{
			sum+=b[i];
		}
		for(int i=c_r*len;i<=r;i++)
		{
			sum+=a[i];
		}
	}cout<<sum;
return 0;
}
