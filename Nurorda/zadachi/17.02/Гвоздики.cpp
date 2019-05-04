#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long int n,a[1111],ans=0,b[1111];
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}	sort(a+1,a+n+1);
for(int i=1;i<=n;i++)
{
	cout<<a[i]<<" ";
	}cout<<endl;
a[0]=-50000;
a[n+1]=50000;
for(int i=1;i<=n;i++)
{
	if(a[i]-a[i-1]<a[i+1]-a[i]&&b[i]!=-1){ans+=a[i]-a[i-1];cout<<a[i]<<" "<<a[i-1]<<endl;}
	else if(a[i]-a[i-1]>=a[i+1]-a[i]){ans+=a[i+1]-a[i];cout<<a[i]<<" "<<a[i+1]<<endl;i++;}
}cout<<ans;
return 0;
}
