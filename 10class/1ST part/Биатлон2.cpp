#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
long long int x,y,d,z=0,g=0,c=0,v=0,b=0;
double i,n,sum=0;
for(i=1;i<=5;i++)
{
cin>>x>>y;
if(z==0)
{
d=sqrt((0-x)*(0-x)+(0-y)*(0-y));
if(d<=10)
	{
		z++;sum++;
	}
}
if(g==0)
{
d=sqrt((25-x)*(25-x)+(0-y)*(0-y));
if(d<=10)
	{
		g++;sum++;
	}
}
if(c==0)
{
d=sqrt((50-x)*(50-x)+(0-y)*(0-y));
if(d<=10)
	{
		c++;sum++;
	}
}
if(v==0)
{
d=sqrt((75-x)*(75-x)+(0-y)*(0-y));
if(d<=10)
	{
		v++;sum++;
	}
}
if(b==0)
{
d=sqrt((100-x)*(100-x)+(0-y)*(0-y));
if(d<=10)
	{
		b++;sum++;
	}
}

}

cout<<sum;
return 0;
}
