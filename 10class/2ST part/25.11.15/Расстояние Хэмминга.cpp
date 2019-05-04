#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
long long int n,a[111111],k=0,mx=9999999,z=0;
string s,s1;
int main()
{

cin>>s;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>s1;
	for(int j=0;j<=s.size();j++)
	{
		if(s[j]!=s1[j])k++;
	}
	a[i]=k;
	if(k<mx)mx=k;
	k=0;
}
for(int i=1;i<=n;i++)
{
	if(a[i]==mx)z++;
}
cout<<z<<endl;
for(int i=1;i<=n;i++)
{
	if(a[i]==mx)cout<<i<<" ";
}
return 0;
}
