#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string s,s1;
int b,k;
int main()
{
cin>>s>>s1;
for(int i=0;i<4;i++)
{
	if(s[i]==s1[i]){
	k++;s[i]=-1;s1[i]=-1;}
}
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		if(s[i]==s1[j]&&s[i]!=-1&&s1[j]!=-1){
			b++;s[i]=-1;s1[j]=-1;
		}
	}
}
cout<<k<<" "<<b;
return 0;
}
