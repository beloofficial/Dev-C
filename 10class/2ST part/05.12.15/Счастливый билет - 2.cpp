#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
int ans1=0,ans2=0;
string s;
	cin>>s;

	for(int i=0;i<s.size()-1;i++)
	{
		ans1+=s[i]-48;
		for(int j=i+1;j<s.size();j++)
		{
			ans2+=s[j]-48;}
					while(ans1>9)
					{
							ans1=ans1%10+ans1/10%10+ans1/100%10+ans1/1000;
						}
					while(ans2>9)
						{
							ans2=ans2%10+ans2/10%10+ans2/100%10+ans2/1000;
						}
	if(ans1==ans2){
	cout<<"YES";return 0;}
	ans2=0;
		
	}cout<<"NO";
return 0;
}
