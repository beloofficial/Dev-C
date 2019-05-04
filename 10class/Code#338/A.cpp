#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long int n,m,a[11111],mx=-99999999,k=0,q=0,z,x,ans;
bool used[111111];
int main()
{

cin>>n>>m;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{int p=0;
		for(int v=i;v<=j;v++)
		{
			
				if(used[v]==0)
				{
					p++;
					if(p>m){q=1;used[v]=1;
					break;}	
				}	
				k++;
		}
		ans=j-i+1;
		k=0;if(q==0&&ans>mx)
		{
			mx=ans;z=i;x=j;
		}q=0;
		for(int v=i;v<=j;v++)
		{
			used[v]=0;
		}
	}
}cout<<z<<" "<<x;
return 0;
}
