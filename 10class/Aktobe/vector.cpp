#include<iostream>
#include<vector>
using namespace std;
vector< int > a[1111];

int main()
{int n,m,j,i;
cin>>n>>m;
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++)
	{int x;
		cin>>x;
		a[i].push_back(x);
	}
}
	
	
return 0;
}
