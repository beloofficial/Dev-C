#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[1111],z=1,k=2,sum=0,ans=1,mx=-99999999,q=0;
cin>>n;
while(n!=0)
{		int p=z-1;
		a[z]=n%2;
		n=n/2;z++;
} 	z--;int p=z;
	p--;
	while(k==2)
	{
		int x=a[1];
		int t=z;
		int y=z;
		for(int i=1;i<=z;i++)
		{
			a[i]=a[i+1];
		}
		a[y]=x;
		for(int j=z;j>=1;j--)
		{
			for(int i=p;i>=0;i--)
			{
				ans*=2;	
			}
			sum+=a[j]*ans;ans=1;p--;
		}
		if(sum>mx)mx=sum;
		if(q==2)break;q++;
		sum=0;
	}
	cout<<mx;
return 0;
}
