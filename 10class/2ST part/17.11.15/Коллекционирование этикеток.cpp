#include<iostream>
#include<algorithm>
using namespace std;
long long int n,a[1111111],k=1,q=0,sum=0,z,w;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
while(k==1)
{
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0){
		q=a[i];w=a[n];a[i]=0;z=i;break;}
	}
	if(q==0)break;
	if(z==n)
	{
		sum+=w/2;
		break;
	}
	a[n]=a[n]-q;sum+=q;
	q=0;
}
cout<<sum;
return 0;
}
