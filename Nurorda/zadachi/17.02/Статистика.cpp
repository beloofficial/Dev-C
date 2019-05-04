#include<iostream>
#include<cstdio>
using namespace std;
long long int n,a[111111],k=0,s=0,b[111111],c[111111];
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	if(a[i]%2==1)
	{k++;
		b[k]=a[i];
	}
	if(a[i]%2==0)
	{s++;
		c[s]=a[i];
	}	
}
if(k!=0)
{
	for(int i=1;i<=k;i++)
	{
		cout<<b[i];
		if(i!=k)cout<<" ";
	}
}
if(k!=0)cout<<endl;
if(s!=0)
{
	for(int i=1;i<=s;i++)
	{
		cout<<c[i];
		if(i!=s)cout<<" ";	
	}
}
if(s!=0)cout<<endl;
if(s>=k)cout<<"YES";
else cout<<"NO";
return 0;
}
