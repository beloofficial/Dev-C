#include<iostream>
using namespace std;
int main()
{
int n,m,l;
cin>>n>>m>>l;
if(n>=94&&n<=727&&m>=94&&m<=727&&l>=94&&l<=727)
{
	int e=max(n,m);
	int f=max(e,l);
	cout<<e;
}
else cout<<"Error";

return 0;
}
