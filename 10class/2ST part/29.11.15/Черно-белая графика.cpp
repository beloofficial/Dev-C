#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{string s[111],s1[111],s2;
int w,h;
cin>>w>>h;
for(int i=1;i<=h;i++)
{
		cin>>s[i];		
} 
for(int i=1;i<=h;i++)
{
		cin>>s1[i];		
} 
cin>>s2;
//cout<<s2[0]<<" "<<s2[1]<<" "<<s2[2]<<" "<<s2[3];

for(int i=1;i<=h;i++)
{
	for(int j=0;j<w;j++)
	{
			 if(s[i][j]==48&&s1[i][j]==48&&s[i][j]==s1[i][j])cout<<s2[0];
		else if(s[i][j]==48&&s1[i][j]==49)cout<<s2[1];
		else if(s[i][j]==49&&s1[i][j]==48)cout<<s2[2];
		else if(s[i][j]==49&&s1[i][j]==49&&s[i][j]==s1[i][j])cout<<s2[3];
	}		
	cout<<endl;
} 

return 0; 
}
