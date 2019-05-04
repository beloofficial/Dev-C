#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int n,i,j,k=0,q=0;
cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=q;j<=n;j++)
		{
			k=k+j+i;
		}
		q++;
	}
	cout<<k;
return 0;
}
