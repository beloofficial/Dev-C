#include<iostream>
#include<cmath>
using namespace std;
int main()
{double n,a,R1,R2;
cin>>n>>a;
	R1=a/(2*sin(360/(2*n)));
	R2=a/(2*tan(360/(2*n)));
	R1=R1-R2;
	abs(R1);
	if(R1>=0&&R1<1)cout<<"YES";
	else cout<<"NO";

return 0;
}
