#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,q=0,w=0,a=0,z=0;
char l[111111];
cin>>n;
while(q<n)
{
	w++;
	for(int i=1;i<=w;i++)
	{
	a=i;
	if(a<10)z=1;
	else if(a>9&&a<100)z=10;
	else if(a>99&&a<1000)z=100;
	else if(a>999&&a<10000)z=1000;
	else if(a>9999&&a<100000)z=10000;
	while(z!=0)
	{
		q++;
		l[q]=a/z%10+48;
		z=z/10;
		if(q==n){
			cout<<l[q];return 0;
		}
	}
}
}


return 0;
}
