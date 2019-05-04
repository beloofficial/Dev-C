#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a[7][3],k=0;
for(int i=1;i<=6;i++)
{
	for(int j=1;j<=2;j++)
	{
		cin>>a[i][j];
	}
}
for(int i=1;i<=5;i++)
{
	for(int j=1;j<=6;j++)
	{
		if(i!=j&&a[i][1]!=-1&&a[i][2]!=-1&&a[j][1]!=-1&&a[j][2]!=-1)
		{
			if(a[i][1]==a[j][1]&&a[i][2]==a[j][2]){
				k++;a[i][1]=-1;a[i][2]=-1;a[j][1]=-1;a[j][2]=-1;break;
			}
			else if(a[i][1]==a[j][2]&&a[i][2]==a[j][1])
			{
				k++;a[i][1]=-1;a[i][2]=-1;a[j][1]=-1;a[j][2]=-1;break;
			}
		}
	}
}if(k==3)cout<<"POSSIBLE";
else cout<<"IMPOSSIBLE";
return 0;
}
