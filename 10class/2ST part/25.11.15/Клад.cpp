#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n,a,b;
double x=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
			if(a==1)
		{
			y=y+b;
		}
			else if(a==3)
		{
			x=x+b;
		}
			else if(a==5)
		{
			y=y-b;
		}
			else if(a==7)
		{
			x=x-b;
		}
			else if(a==2)
		{
			x=x+b/sqrt(2);
			y=y+b/sqrt(2);
		}
			else if(a==4)
		{
			x=x+b/sqrt(2);
			y=y-b/sqrt(2);
		}
		else if(a==6)
		{
			x=x-b/sqrt(2);
			y=y-b/sqrt(2);
		}
		else if(a==8)
		{
			x=x-b/sqrt(2);
			y=y+b/sqrt(2);
		}
	}
	std::cout<<fixed;
	std::cout<<std::setprecision(3)<<x<<" ";
	std::cout<<std::setprecision(3)<<y<<" ";
return 0;
}
