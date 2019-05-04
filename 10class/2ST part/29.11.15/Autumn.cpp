#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,a,b,z[111111],x=0,c=0,k=0,q=1,ans=0;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a>>b;
	if(b>x){
		
		k=k+(a-c);x=b;
	}
	else 
	{
		x=0;
		if(k>ans)
		ans=k;q++;k=0;x=0;
	}
	c=a;
}cout<<ans;

return 0;
}
