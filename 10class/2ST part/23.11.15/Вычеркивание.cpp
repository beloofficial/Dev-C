#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long int a[5000],ans;
int main()
{
string s;
cin>>s;
for(int i=0;i<s.size()-2;i++)
{
	for(int j=i+1;j<s.size()-1;j++)
	{
		for(int k=j+1;k<s.size();k++)
		{
			a[(s[i]-48)*100+(s[j]-48)*10+s[k]-48]++;
		}
	}
}
for(int i=100;i<=999;i++)
{
	if(a[i]>0){
	ans++;cout<<i<<" ";}
}
cout<<ans;
return 0;
}
