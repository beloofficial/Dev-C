#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,q,a[10];
int main()
{

cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			q=i*j;
			while(q!=0)
			{
				a[q%10]++;
				q/=10;
			}
		}
	}
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;
}
