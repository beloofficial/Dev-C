#include<iostream>
using namespace std;
int k=0,q=0,w=0,l=0,sm=-9999,i,j,g,h;
int main()
{
	char a[8][8],p;
	
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=1;j<=8;j++)
	{
		for(i=1;i<=8;i++)
		{
			if(a[i][j]=='B'){q++;l=i;}
			else if(a[i][j]=='W'){w++;k=i;break;}
		}
		if(q>w)
		{
			if(8-l>sm){sm=8-l;p='B';g=8-l;}
		}
		else if(q<w)
		{
			if(k>=sm){sm=k;p='A';h=w;}
		}
		q=0;w=0;
	}
	if(g==h)cout<<"A";
	else cout<<p;
}
