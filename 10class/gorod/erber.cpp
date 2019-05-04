#include<iostream>
#include<cstdio>
using namespace std;
long long int l,r,z=0,n,k=0,a[20];
int main()
{
scanf("%lld", &l);
scanf("%lld", &r);
n=r-l+1;
	for(int i=l;i<=r;i++)
	{
		int a[14]={0,0,0,0,0,0,0,0,0,0,0,0,0};
		int q=i;
		while(q>0)
		{
			a[q%10]++;//cout<<a[q%10]<<" ";
			if(a[q%10]>1)
			{
				n--;break;
			}
			q=q/10;		
		}	
	}
printf("%lld", n);
return 0;
}
