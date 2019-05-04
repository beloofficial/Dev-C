#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[111][111],d[111],z[1111];
cin>>n;
for(int i=1;i<=n*n;i++)
{
	for(int j=1;j<=n*n;j++)
	{
		cin>>a[i][j];
	}
}
for (int i=1;i<=n;i++)
{
    for (int j=1;j<=n;j++)
	{
      for(int l=1;l<=n*n;l++)
      {
      	d[i]=0;
	  }
      for (int y=(i-1)*n+1;y<=i*n;y++)
	  {
        for (int x=(j-1)*n+1;x<=j*n;x++)
		{
          d[a[y][x]]=1;
        }    
      }
      for(int l=1;l<=n*n;l++)
      {if(i==1&&j==2)
      cout<<d[l]<<" ";
      	if(d[l]==0){
      		cout<<"Incorrect";return 0;
		  }
	  }
    }
  }
  for (int i=1;i<=n*n;i++)
{
    for (int j=1;j<=n*n;j++)
	{
		z[a[i][j]]++;
		if(z[a[i][j]]==2)
		{
			cout<<"Incorrect";return 0;
		}
		for(i=1;i<=n;i++)
		{
			z[i]=0;
		}
	}
}
 for (int j=1;j<=n*n;j++)
{
    for (int j=1;j<=n*n;j++)
	{
		z[a[i][j]]++;
		if(z[a[i][j]]==2)
		{
			cout<<"Incorrect";return 0;
		}
		for(i=1;i<=n;i++)
		{
			z[i]=0;
		}
	}
}
  cout<<"Correct";
  return 0;
}
