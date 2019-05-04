#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int x,y,a[11111],k=2,q=2,w=1;
cin>>x>>y;
a[1]=q;a[2]=w;
	while(k==2)
	{
		for(int i=3;i<=x;i++)
		{
			a[i]=a[1]+a[2];
		}
		if(a[x]<y)q++;
		else if(a[x]>y)w--;
		else if(a[x]==y){
			cout<<q<<" "<<w;return 0;
		}
	}
return 0;
}
