#include<iostream>
#include<string>
using namespace std;
bool a[111];
int main()
{
int l;

string s;
cin>>s;
a[1]=1;
a[2]=1;
int k=1;int q=2;
for(int i=1;i<=10;i++)
{
	a[k+q]=1;l=k;k=q;q=l+q;
}
	for(int i=0;i<s.size();i++)
	{
		if(a[s[i]-96]==1)cout<<s[i];
	}
return 0;
}
