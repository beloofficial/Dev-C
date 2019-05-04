#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long int z=0,q=0,a[111111];
string s,s1,k;
int main()
{
getline(cin,s);
cin>>s1;
while(z!=-1)
	{
	 z=s.find(s1);
	s[z]=-1;
	 a[q++]=z;
	 if(z!=-1)
	 cout<<z<<" ";
	}
return 0;
}
