#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s,q[3];
	cin>>s;
	for(int i=1;i<=3;i++)
	{
		cin>>q[i];
	}
//	sort(q+1,q+3+1);
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
					cout<<q[i][j]<<" ";
			}
		}
	return 0;
}
