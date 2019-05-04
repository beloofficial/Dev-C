#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
long long int n,a[111111],s;
double sum=0; 
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
	sort(a+1,a+n+1);
cin>>s;	
sum=s;
for(int i=1;i<=n;i++)
{
	if(sum<a[i])
	{
		sum=(sum+a[i])/2;
	}
} printf("%.6f", sum);
return 0;
}
