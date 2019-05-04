#include<iostream>
#include<cstdio>
using namespace std;
long long int n,z=1,q=0,a[1111111],b[1111111],l=1;
int main()
{

cin>>n;
for(int i=2;i<=36;i++)
{
int x=n;
	while(x!=0)	
	{
		a[z]=x%i;
		x=x/i;z++;
	}z--;int v=z;
	for(int j=1;j<=z/2;j++)
	{
		if(a[j]!=a[v]){
			q++;break;
		}
		else v--;
	}
	if(q==0){
	b[l]=i;l++;}
z=1;
q=0;
}l--;
if(l==0)cout<<"none";
else if(l>1)
{
cout<<"multiple"<<endl;
	for(int i=1;i<=l;i++)
	{
		cout<<b[i]<<" ";
	}
}
else if(l==1){
cout<<"unique"<<endl;
cout<<b[1];
}
return 0;
}
