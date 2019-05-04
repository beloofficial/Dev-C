#include<iostream>
using namespace std;
int main()
{int i,n,a[111111],mx=-999999,mn=999999;
cin>>n;
for(i=1;i<=n;i++)
{
	if(a[i]>mx)mx=a[i];
	else mx=mx;
	if(a[i]<mn)mn=a[i];
	else mn=mn;
}
	cout<<mx+mn;
	
return 0;
}
