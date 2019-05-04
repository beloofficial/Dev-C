#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int n,k=0,a,b,c[1111111],d[1111111],q=1,ans=0,z=1,o=-1,p=-1,l=0;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{a=i;b=j;
		while(z==1)
		{	a=i-k;
			b=j-k;
			if(a==0||b==0)z=2;
			ans+=a*b;
			k++;
			
		}
		k=0;
		if(ans==n)
		{
			if(o==j&&p==i){l=1;break;}
			o=i;p=j;
			c[q]=i;d[q]=j;
			q++;
			
		}
		ans=0;
		z=1;	
	}
	if(l==1)break;
}
cout<<q*2-2<<endl;
for(int i=1;i<=q-1;i++)
{cout<<c[i]<<" "<<d[i]<<endl;}
for(int i=q-1;i>=1;i--)
{cout<<d[i]<<" "<<c[i]<<endl;}

return 0;
}
