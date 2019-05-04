#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
double d,ans,ans1,a,b,c;
cin>>a>>b>>c;
if(a==0&&b==0&&c==0)cout<<-1;
else if(a==0&&b==0)cout<<0;
else
{

d=b*b-4*a*c;
if(a!=0)
{
	if(d>0)
	{
		ans=(b*-1.0+sqrt(d))/(2*a);
		ans1=(b*-1.0-sqrt(d))/(2*a);
		cout<<2<<endl;
	std::cout << std::fixed << std::setprecision(6) << ans<<endl;
	std::cout << std::fixed << std::setprecision(6) << ans1<<endl;
	}
	else if(d<0)
		cout<<0;		
}
if(a==0)
{  cout<<1<<endl;

std::cout << std::fixed << std::setprecision(6) <<(c*-1)/b;;
}
}
return 0;
}
