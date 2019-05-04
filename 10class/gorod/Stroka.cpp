#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
//	freopen("A.in","r",stdin);
//freopen("A.out","w",stdout);
int n=0,m=1,mx=-9999,q=0;
string s,s1,k;
cin>>s>>s1;
for(int i=0;i<s1.size();i++)
{
	for(int j=i+1;j<s1.size();j++)
	{
		
		
    size_t pos = s.find(s1.substr(i,j));
    if (pos != string::npos)
        {
		if(j-i>mx)mx=j-i+1;
    }
}
}cout<<mx;
return 0;
}
