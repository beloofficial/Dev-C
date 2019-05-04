#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,ans=1,k=2;
	cin>>n;
	int m=n;
	while(k<sqrt(n))
	{
		if(n%k==0)
		{	ans*=k;
			n=n/k;cout<<k;
			if(ans!=m)cout<<"*";
		}
		else k++;
	}
	if(n>1)cout<<n;
return 0;
}

