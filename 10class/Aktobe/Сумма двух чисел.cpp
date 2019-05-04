#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s,s1;
	int q=0,v,a[11]={1,2,3,4,5,6,7,8},qq=0,b[11]={1,2,3,4,5,6,7,8};
	cin>>s>>s1>>v;
	while(next_permutation(a-1,a+s.size()))
	{cout<<a[0]<<" "<<a[1]<<endl;
		for(int i=0;i<s.size();i++)
		{
			q=q*10;
			//printf("%c",s[a[i]]);
			q=q+s[a[i]];
			
			//cout<<a[i];
		}
			while(next_permutation(b,b+s1.size()))
			{	
					for(int i=0;i<s1.size();i++)
					{
						qq=qq*10;
						//printf("%c",s[a[i]]);
						qq=qq+s[a[i]];
					}
					if(q+qq==v)
				{
					cout<<q<<" "<<qq<<endl;
				}
			}
				
				sort(b+0,b+8+0);
	}
	return 0;
}
