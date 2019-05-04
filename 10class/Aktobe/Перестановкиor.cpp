#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s;
	int q,a[11]={0,1,2,3,4,5,6,7,8};
	cin>>s;cout<<s<<endl;
	while(next_permutation(a,a+s.size()))
	{
		for(int i=0;i<s.size();i++)
		{
			//printf("%c",s[a[i]]);
			cout<<s[a[i]];
			//cout<<a[i];
		}
		cout<<endl;
	}
	
	
	return 0;
}
