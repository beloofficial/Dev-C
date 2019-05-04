#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,red,green,blue,black;
int main()
{

cin>>n>>m;
for(int i=n;i>=1;i--)
{
	for(int j=m;j>=1;j--)
	{
		if((i*j)%5==0)blue++;
		else if((i*j)%3==0&&(i*j)%5!=0)green++;
		else if((i*j)%3!=0&&(i*j)%5!=0&&(i*j)%2==0)red++;
		else if((i*j)%3!=0&&(i*j)%5!=0&&(i*j)%2!=0)black++;
	}
}

cout<<"RED : "<<red<<endl;
cout<<"GREEN : "<<green<<endl;
cout<<"BLUE : "<<blue<<endl;
cout<<"BLACK : "<<black<<endl;
return 0;
}
