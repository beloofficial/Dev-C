#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 double n,m,q=0,x[111],y[111];
cin>>n>>m;
for(int i=1;i<=n;i++)
{cin>>x[i]>>y[i];}
for(int i=1;i<=n-1;i++)
{
	q=q+sqrt(((x[i+1]-x[i])*(x[i+1]-x[i]))+((y[i+1]-y[i])*(y[i+1]-y[i])));
}
std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(9) << (q*m)/50;
return 0;
}
