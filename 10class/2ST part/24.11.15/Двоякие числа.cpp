#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
int n,a[7],k=1,z,x;
cin>>n;
for(int i=n;i>=n;i--)
{
	a[1]=i/10000;
	a[2]=i/1000%10;
	a[3]=i/100%10;
	a[4]=i/10%10;
	a[5]=i%10;
	sort(a+1,a+5+1);
	for(int j=1;j<=5;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	if(i>=10000)
	{
		if(a[1]!=a[2])k++;
		if(a[2]!=a[3])k++;
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
	}
	else if(i>=1000&&i<10000)
	{
		if(a[2]!=a[3])k++;
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
	}
		else if(i>=100&&i<1000)
	{
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
		cout<<k;
	}
	else k++;
	if(k<=2){z=i;cout<<k<<" q";break;}
	k=1;
}
////////////////////////////
for(int i=n;i<=30000;i++)
{
	a[1]=i/10000;
	a[2]=i/1000%10;
	a[3]=i/100%10;
	a[4]=i/10%10;
	a[5]=i%10;
	sort(a+1,a+5+1);
	if(i>=10000)
	{
		if(a[1]!=a[2])k++;
		if(a[2]!=a[3])k++;
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
	}
	else if(i>=1000&&i<10000)
	{
		if(a[2]!=a[3])k++;
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
	}
		else if(i>=100&&i<1000)
	{
		if(a[3]!=a[4])k++;
		if(a[4]!=a[5])k++;
	}
	else k++;
	if(k<=2){x=i;break;}
}
cout<<z<<" "<<x<<endl;
z=n-z;
x=x-n;
if(z>x)cout<<x;
else cout<<z;
return 0;
}
