#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,a[7],k=0,ans=0;
cin>>n;
for(int i=1;i<=600000;i++)
{
	if(i<10)
	{
		
		{
		k++;}
	}
	if(i>=10&&i<100)
	{
		a[1]=i/10;
		a[2]=i%10;
		if((a[1]+a[2])%2==0){
		k++;}
		
	}
	else if(i>=100&&i<1000)
	{
		a[1]=i/100;
		a[2]=i/10%10;
		a[3]=i%10;
		if((a[1]+a[2]+a[3])%3==0)k++;
			
	}
	else if(i>=1000&&i<10000)
	{
		a[1]=i/1000;
		a[2]=i/100%10;
		a[3]=i/10%10;
		a[4]=i%10;
		if((a[1]+a[2]+a[3]+a[4])%4==0)k++;	
	}
	else if(i>=10000&&i<100000)
	{
		a[1]=i/10000;
		a[2]=i/1000%10;
		a[3]=i/100%10;
		a[4]=i/10%10;
		a[5]=i%10;
		if((a[1]+a[2]+a[3]+a[4]+a[5])%5==0)k++;	
	}
	else if(i>=100000&&i<=999999)
	{
		a[1]=i/100000;
		a[2]=i/10000%10;
		a[3]=i/1000%10;
		a[4]=i/100%10;
		a[5]=i/10%10;
		a[6]=i%10;
		
		if((a[1]+a[2]+a[3]+a[4]+a[5]+a[6])%6==0)k++;	
	}
	
	if(k==n)
	{
		ans=i;break;
	}
}cout<<ans;
return 0;
}
