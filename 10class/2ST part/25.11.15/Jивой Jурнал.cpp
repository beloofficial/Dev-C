#include<iostream>
#include<cstdio>
#include<algorithm>
long long int n,a[555555];
using namespace std;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
sort(a+1,a+n+1);
for(int i=1;i<=n;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}
