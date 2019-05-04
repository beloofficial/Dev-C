#include<iostream>
#include<algorithm>
using namespace std;
long long n , a[111];
int main()
{
	cin>>n;
	for(int i = 1; i <= n; i ++)
	{
		cin>>a[i];
	}
	sort(a + 1,a + n + 1);
	for(int i = 1; i <= n; i ++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
