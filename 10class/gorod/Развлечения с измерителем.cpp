#include<iostream>
#include<cstdio>
#include<set>
#include<cmath>
#include<iomanip>
using namespace std;
set<double> q;
int main()
{
int n,a[111],b[111],sz=0;
double z,t[11111];
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i]>>b[i];
}	
	for(int i=1;i<=n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{	
			z=sqrt( pow(a[j]-a[i],2.0)+pow(b[j]-b[i],2.0)  );
			q.insert(z);
		}	
	}
	while(!q.empty())
	{
		sz++;
		t[sz]=*q.rbegin();
		q.erase(*q.rbegin());
	}
	cout<<sz<<endl;
	for(int i=sz;i>=1;i--)
	{
		cout<<std::fixed;
		cout<<std::setprecision(12)<<t[i]<<endl;
	}
return 0;
}
