#include<iostream>
#include<string>
using namespace std;
int main()
{int n;
string s[111111];
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>s[i];}
for(int i=1;i<=n;i++)
{ 
if(s[i].size()>10)
cout<<s[i][0]<<s[i].size()-2<<s[i][s[i].size()-1]<<endl;
else cout<<s[i]<<endl;            
}
system("pause");
return 0;    
}
