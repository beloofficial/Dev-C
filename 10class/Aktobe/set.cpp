#include<set>
#include<iostream>
using namespace std;
set<int> s;
int main()
{
	int n,i;
cin>>n;	
	for(i=1;i<=n;i++)
	{
		int x;
	cin>>x;
	s.insert(x);

	
}cout<<*s.begin();
return 0;
}
