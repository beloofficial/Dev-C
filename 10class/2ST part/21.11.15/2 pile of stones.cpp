#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int a[1111111],n,f,s,l=999999,b[1111111],q=0,sum=1,ans=0,z=0;
void rec(int id)
{
 	if(id==n+1)
	{
		for(int i=1;i<=n;i++)
		{
			q=q+a[i];if(a[i]==1)sum*=b[i];
			if(q>3)
			{
				q=1;break;
			}
		}
		if(q==3)ans+=sum;
		q=0;sum=1;
	}
 else 
 {
  for(int j=0;j<=1;++j)
  {
   a[id]=j;z+=j;
   rec(id+1);
  }
 }
}
int main()
{
 cin>>n;
 for(int i=1;i<=n;i++)
 {cin>>b[i];}
 rec(1);
 cout<<ans;
 
 return 0; 
}
