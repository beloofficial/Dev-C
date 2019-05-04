#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
	int a,b,c,d,e,f,g;
	cin>>a;
	b=a/100000;
	c=a/10000%10;
	d=a/1000%10;
	e=a/100%10;
	f=a/10%10;
	g=a%10;
	if(b+c+d==e+f+g)  cout<<"YES";
	else cout<<"NO";
    return 0;
}
