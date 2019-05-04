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
		int q=i;
		while(q>9)
		{
			a[q%10]++;
			if(a[q%10]>1)
			{
				n--;break;
			}
			q=q/10;	
			
		}
		a[q]++;
		for(int j=0;j<=9;j++)
		{
			if(a[j]>1&&k==0){
				n--;k++;
			}
			a[j]=0;
		}
		k=0;
	}
printf("%lld", n);
return 0;
}
