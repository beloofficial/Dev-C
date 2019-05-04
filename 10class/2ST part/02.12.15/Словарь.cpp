#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
int n,ans=0,sum=0;
string s[1111],k;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>s[i];
}
	cin>>k;
	for(int i=1;i<=n;i++)
	{string q(k);
		for(int j=0;j<s[i].size();j++)
		{
			for(int l=0;l<k.size();l++)
			{
				if(s[i][j]==q[l]){
					ans++;q[l]=-1;break;
				}
			}
			
		}
		if(ans==s[i].size())
		{
		sum++;
		}
		ans=0;
	}
	cout<<sum;
return 0;
}
