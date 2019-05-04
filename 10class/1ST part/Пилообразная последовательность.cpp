#include<iostream>
#include<cstdio>

using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int n,a[111111],q=0,sum=1,k=-9999999,i,z=1;
cin>>n;
	for(i=1;i<=n-1;i++)
	{
	cin>>a[i];}
	for(i=z;i<=n;i++)
	{
		if(a[i]>a[i+1]&&q==0||a[i]>a[i+1]&&q==2){q=1;sum++;cout<<a[i]<<" "<<a[i+1]<<" ";}
		else if(a[i]<a[i+1]&&q==0||a[i]<a[i+1]&&q==1){q=2;sum++;}
		else if(sum>1)
		{
			if(sum>k)k=sum;
			sum=0;	q=0;z=i;
		}
		
	}cout<<endl;
		if(sum>k)k=sum;
	cout<<k;
return 0;
}
