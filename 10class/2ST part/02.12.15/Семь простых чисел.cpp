#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,i,j,k,l,f,e,q;
cin>>n;
for(i=2;i<=n/7+1;i++)
{
	for(j=2;i<=n/7+1;j++)
{
	for(k=2;k<=n/7+1;k++)
{
		for(l=2;l<=n/7+1;l++)
{
		for(f=2;f<=n/7+1;f++)
{
		for(e=2;e<=n/7+1;e++)
{
		for(q=2;q<=n/7+1;q++)
{
		if(i+j+k+l+f+e+q==n){
			cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<f<<" "<<e<<" "<<q;return 0;
		}
}
}
}
}
}	
}	
}
return 0;
}
