#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int a[11111],k=1,q=1,mx=-9999999;
int main()
{
	
	string s;
getline(cin,s);
for(int i=0;i<s.size();i++)
{
	if(s[i]!=60&&s[i]!=94&&s[i]!=124&&s[i]!=92)
	{
			a[k]++;if(a[k]>mx)mx=a[k];	
	}
	else if(s[i]==60)
	{
		if(a[k]!=0)a[k]--;
		else {
			for(int j=k;j<=q-1;j++)
			{
				a[k-1]=a[k-1]+a[k];
				a[k]=0;
			}
			q--;k--;
		}
	}
	else if(s[i]==92)
	{
		k++;if(k>q)q=k;
	}
	else if(s[i]==94&&k!=1)
	{
		k--;
	}
	else if(s[i]==124&&k!=q)
	{
		k++;
	}
}
cout<<mx;
return 0;
}
