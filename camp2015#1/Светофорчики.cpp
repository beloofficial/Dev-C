#include<iostream>
#include<cstdio>
using namespace std;
int a[111111];
int main()
{freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
int q,i,j,n,m;
cin>>m>>n;
for(q=1;q<=n;q++)
{
cin>>i>>j;
a[i]++;a[j]++;	
}
for(q=1;q<=m;q++)
cout<<a[q]<<" ";
return 0;
}
