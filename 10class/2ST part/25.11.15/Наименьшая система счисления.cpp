#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int k=0,a[11111],z=1;
string s;
getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<48||s[i]>=58&&s[i]<=64||s[i]>90){
			k++;break;
		}
	}
	if(k==1)cout<<"-1";
	else 
	{
		for(int i=0;i<s.size();i++)
		{
			a[z]=s[i]-48;z++;
		}z--;
		sort(a+1,a+z+1);
		if(a[z]==0)cout<<"2";
		else if(a[z]<10)cout<<a[z]+1;
		else if(a[z]>=10)cout<<a[z]-7+1;
	}
return 0;
}
