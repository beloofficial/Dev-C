#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{int n,a[111][111],c[11111],d[11111],i,j,sum=0;
cin>>n;
	for(i=1;i<=n*n;i++)
	{
		for(j=1;j<=n*n;j++)
		{
			cin>>a[i][j];c[j]=a[i][j];
		}
			sort(c+1,c+n*n+1);
	  for(int q=1;q<=n*n;q++)
	  {
			if(q!=c[q]){sum++;break;}
	  }
	}

	
	{
		for(j=1;j<=n*n;j++)
		{
			for(i=1;i<=n*n;i++)
			{
				d[i]=a[i][j];
			}
			sort(d+1,d+n*n+1);
			for(int q=1;q<=n*n;q++)
	  		{
				if(q!=c[q]){sum++;break;}
	  		}
		}
	}
if(sum==0)cout<<"Correct";
else cout<<"Incorrect";
return 0;
}
