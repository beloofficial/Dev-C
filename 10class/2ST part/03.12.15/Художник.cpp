#include<iostream>
#include<cstdio>
using namespace std;
long long int a[111][111];
int main()
{
int n,m,sum,x1,y1,x2,y2,l;
cin>>n>>m;
sum=n*m;
cin>>l;
for(int q=1;q<=l;q++)
{
	cin>>x1>>y1>>x2>>y2;
	for(int x=x1;x<=x2-1;x++)
	{
		for(int y=y1;y<=y2-1;y++)
		{
			if(a[x][y]==0){
				sum--;a[x][y]=-1;
			}
		}
	}
}cout<<sum;
return 0;
}
