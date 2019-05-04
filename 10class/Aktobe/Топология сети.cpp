#include<iostream>
#include<cstdio>
using namespace std;
long long int a[111111];
int main()
{
long long int n,m,i,x,y,k=0,q=0,w=0;
cin>>n>>m;
for(i=1;i<=m;i++)
{
	cin>>x>>y;
	a[x]++;
	a[y]++;
}

	for(i=1;i<=n;i++)
	{
		if(a[i]==1)q++;
		else if(a[i]==2)w++;
		
	}
if(q==2&&w==n-2)
k=1;
else{
q=0;k=0;
for(i=1;i<=n;i++)
{
	if(a[i]==2)k=2;
	else {k=0;break;}	
}


	for(i=1;i<=n;i++)
	{
		if(a[i]==m)q++;
		if(a[i]==1)w++;
	}
	if(q==1&&w==n-1)k=3;
}

if(k==1)cout<<"bus topology";
else if(k==2)cout<<"ring topology";	
else if(k==3)cout<<"star topology";
else cout<<"unknown topology";

//for(i=1;i<=n;i++)
//cout<<a[i]<<" ";

return 0;
}
