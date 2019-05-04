#include<iostream>
#include<cstdio>
using namespace std;
long long int a[2000][2000],mx=-100000,n;
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
}

for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(i!=1&&j!=1)
		{
		
	if(a[i][j]+a[i][j-1]+a[i-1][j]>mx) mx=a[i][j]+a[i][j-1]+a[i-1][j];
	if(a[i][j]+a[i-1][j]+a[i-1][j-1]>mx )mx=a[i][j]+a[i-1][j]+a[i-1][j-1];
	
	 if(i!=1&&j!=n&&j!=1&&i!=n)
	{
	if(a[i][j]+a[i][j-1]+a[i+1][j-1]>mx )mx=a[i][j]+a[i][j-1]+a[i-1][j-1];}
	if(a[i][j]+a[i-1][j]+a[i-1][j+1]>mx)mx=a[i][j]+a[i-1][j]+a[i-1][j+1];}
	if(i>2){
	if(a[i][j]+a[i-1][j]+a[i-2][j]>mx )mx=a[i][j]+a[i-1][j]+a[i-2][j];}
	if(j>2){
	if(a[i][j]+a[i][j-1]+a[i][j-2]>mx )mx=a[i][j]+a[i][j-1]+a[i][j-2];}
	}
}
cout<<mx;
return 0;
}
