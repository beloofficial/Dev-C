#include<map>
#include<iostream>
using namespace std;
map<string,int>d;
int main()
{string s;
int id,n,i,a[11111];
cin>>n;
for(i=1;i<=n;i++)
{cin>>s>>id;
d[s]=id;}
	for(i=1;i<=n;i++)
	{
	cin>>s;
	a[i]=d[s];
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
return 0;
}
