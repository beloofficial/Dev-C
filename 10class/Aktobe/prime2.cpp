#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	long long int n,h=0;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){h++;break;}
		
	}
	if(h==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}
