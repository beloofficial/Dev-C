#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int a[111],b[111],f=1,s=1;
	for(int i=1;i<=6;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=6;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=5;i++)
	{
		if(a[i]==a[i+1])f++;
		if(b[i]==b[i+1])s++;
	}
	if(f==6&&s==6)
	{
		cout<<"YES";return 0;
	}
	else cout<<"NO";
	return 0;
}
