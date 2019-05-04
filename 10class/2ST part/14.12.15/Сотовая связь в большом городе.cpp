#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	long long int n,x[11111],y[11111],r[11111],xa,ya,ans[11111],sum=0;
	double q;
	string s[11111];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		cin>>x[i]>>y[i]>>r[i];
	}
	cin>>xa>>ya;
	for(int i=1;i<=n;i++)
	{
		q=sqrt((xa-x[i])*(xa-x[i])+(ya-y[i])*(ya-y[i]));
		if(q<=r[i])ans[i]++;	
	}sum=n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[i]==s[j]&&s[i][0]!=48&&s[i]==s[j]&&s[j][0]!=48&&i!=j)
			{
				ans[i]=ans[i]+ans[j];
				s[j][0]=48;sum--;
			}
		}
	}cout<<sum<<endl;int m=0;
	while(m!=n)
	{m++;
		if(s[m][0]!=48)cout<<s[m]<<" "<<ans[m]<<endl;
	}
return 0;
}
