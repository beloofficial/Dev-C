#include<iostream>
#include<cstdio>
using namespace std;
int n,k=0,a[111111],b[111111],mx=-99999,s,mn=-1;
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=i;j++)
	{
		if(a[i]>a[j]&&mn<a[j])
		{
		k++;mn=a[j];	
		}	
	}	
	if(k>mx)
	{
		mx=k;s=i;
	}k=0;mn=-1;
}
cout<<mx+1<<endl;
for(int i=1;i<=s;i++)
{
	if(a[i]<a[s])cout<<a[i]<<" ";
}cout<<a[s];
return 0;
}
