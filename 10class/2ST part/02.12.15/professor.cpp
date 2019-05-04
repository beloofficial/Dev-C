#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
long long unsigned n,k,q=-1,z=0,l;
set <int>a;
int main()
{
string s,s1[111111];
cin>>n>>k;
cin>>s;
for(int i=0;i<=n-k;i++)
{
	for(int j=i;j<i+k;j++)
	{
		l=l*10;
		l=l+s[j]-96;
	}
	a.insert(l);l=0;
}	
while(*a.begin()!=0)
{
	a.erase(*a.begin());z++;
}cout<<z;
return 0;
}



