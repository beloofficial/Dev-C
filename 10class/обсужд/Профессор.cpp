#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
long long unsigned n,k,q=-1,z=0,a[1111111];
int main()
{
	
string s,s1[111111];
cin>>n>>k;
cin>>s;
for(int i=0;i<s.size()-k+1;i++)
{
	for(int j=i;j<i+k;j++)
	{
		a[i]=a[i]*10;
		a[i]=a[i]+s[j]-96;
	}
}	
sort(a,a+s.size()-k+1);
for(int i=0;i<s.size()-k;i++)
{
	if(a[i]==a[i+1])a[i]=-1;
}
for(int i=0;i<s.size()-k+1;i++)
{
	if(a[i]!=-1)z++;
}cout<<z;
return 0;
}


