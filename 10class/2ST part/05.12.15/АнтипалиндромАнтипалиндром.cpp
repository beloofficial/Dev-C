#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
long long  int mx=-9,sz;
string s,sw;
int main()
{

cin>>s;
for(int i=0;i<s.size();i++)
{
	int n=s.size();
	int m=n-i;
	while(m>1)
	{
		string q(s.substr(i,m));
			for(int j=0;j<(m-i)/2;j++)
			{
				if(q[j]!=q[m-j-1])
				{
					if(m>mx)
					{
						 for(int k=0;k<=m;k++)
						 {
						 		sw[k]=q[k];	
						 }sz=m;
						 mx=m;
					}
					break;
				}
				
			}
		m--;
	}
}
if(sz==0)cout<<"NO SOLUTION";
else {

for(int i=0;i<=sz;i++)
{
	cout<<sw[i];
}
}
return 0;
}
