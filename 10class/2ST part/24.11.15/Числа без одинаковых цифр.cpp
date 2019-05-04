#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,a[6],k=2,ans=0;
cin>>n;
for(int i=1;i<=30000;i++)
{
	if(i>10&&i<100)
	{
		if(i%11==0)k=1;
	}
	else if(i>99&&i<1000)
	{
		a[1]=i/100;
		a[2]=i/10%10;
		a[3]=i%10;
		if(a[1]==a[2]||a[2]==a[3]||a[1]==a[3])k=1;	
	}
	else if(i>=1000&&i<10000)
	{
		a[1]=i/1000;
		a[2]=i/100%10;
		a[3]=i/10%10;
		a[4]=i%10;
		if(a[1]==a[2]||a[2]==a[3]||a[1]==a[3]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4])k=1;	
	}
	else if(i>=10000&&i<30000)
	{
		a[1]=i/10000;
		a[2]=i/1000%10;
		a[3]=i/100%10;
		a[4]=i/10%10;
		a[5]=i%10;
		if(a[1]==a[2]||a[2]==a[3]||a[1]==a[3]||a[1]==a[4]||a[2]==a[4]||a[3]==a[4]||a[1]==a[5]||a[2]==a[5]||a[3]==a[5]||a[4]==a[5])k=1;	
	}
	if(k==2)ans++;
	k=2;
	if(ans==n)
	{
		ans=i;break;
	}
}cout<<ans;
return 0;
}
