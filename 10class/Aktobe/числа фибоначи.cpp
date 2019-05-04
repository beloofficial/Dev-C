#include<iostream>
using namespace std;
int n;
void dp(int id)
{
	if(n<=1)
	{
		return;
	}
	else
	{
		return dp(n)=dp(n-1)+dp(n-2);
	}
}
int main()
{

cin>>n;
dp(n);
	
	
	
	
return 0;
}
