#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{int r;
double x1,y1,x2,y2,q;
cin>>r>>x1>>y1>>x2>>y2;
	q=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	if(q==0)cout<<q;
	else
	if(q%r==0) 
	cout<<q/r-1;
	else cout<<q/r;
return 0;
}
