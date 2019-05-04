#include<iostream>
#include<cstdio>
using namespace std;
int a[5];
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int x[11111],y[11111],n,sum=0,i,q=0,w=0,e=0,r=0,t=0;
 for(i=1;i<=5;i++)
 {
	cin>>x[i]>>y[i];
 }
	for(i=1;i<=5;i++)
	{
		if(x[i]>=-7&&x[i]<=7&&y[i]>=-10&&y[i]<=10&&w==0)
		{
			sum++;w=1;
		}
	   else	if(x[i]>=18&&x[i]<=32&&y[i]>=-10&&y[i]<=10&&q==0)
		{
			sum++;q=1;
		}
		else if(x[i]>=43&&x[i]<=57&&y[i]>=-10&&y[i]<=10&&e==0)
		{
			sum++;e=1;
		}
		else if(x[i]>=68&&x[i]<=82&&y[i]>=-10&&y[i]<=10&&r==0)
		{
			sum++;r=1;
		}
		else if(x[i]>=93&&x[i]<=107&&y[i]>=-10&&y[i]<=10&&t==0)
		{
			sum++;t=1;
		}
	
	}
	cout<<sum;
return 0;
}
