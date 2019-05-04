#include<iostream>
#include<cstdio>
using namespace std;
long long int n,a[555555],b[555555],mx=-99999,mn=99999;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	
	cin>>a[i];
	
	b[a[i]]++;
	if(b[a[i]]>mx)
	{
		mx=b[a[i]];mn=a[i];
	}
	else if(b[a[i]]==mx)
	{
		if(a[i]<=mn)
		{
			mn=a[i];
		}
 }
}
	if(n-mn>0)
	{
			for(int i=1;i<=n;i++)
			{
					if(a[i]!=mn)cout<<a[i]<<" ";
			}
	}
	for(int i=1;i<=mx;i++)
	{	cout<<mn;
		if(i!=mx)cout<<" ";
	
		
	}

return 0;
}
