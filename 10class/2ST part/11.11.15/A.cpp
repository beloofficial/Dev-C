#include<iostream>
using namespace std;
int main()
{
	int k,a,b,ans=0;
	cin>>k>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(i%k==0)ans++;
	}
	cout<<ans;
	return 0;
}
