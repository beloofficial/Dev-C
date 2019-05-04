#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<iomanip>
#include <ctype.h>
using namespace std;
string a,b,m,s,p,z,y,u;
void searc(string a,string b)
{
	for(int i=a.size()-1;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			s=s+a[j];
		}
		s=s+b;
		z=s.substr(0,a.size());
		for(int l=0;l<a.size();l++)
		{
			z[l]=tolower(z[l]);
		}
		p=a;
		for(int k=0;k<a.size();k++)
		{
			p[k]=tolower(p[k]);
			
		}cout<<z<<" "<<p<<endl;
		if(m.size()>=s.size()&&m>s&&z==p)m=s;s.clear();
	}
}
int main()
{
cin>>y>>u;
if(y>u)m=u+y;
else m=y+u;
	searc(y,u);
	searc(u,y);
	cout<<m;
return 0;
}
