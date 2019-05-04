#include<iostream>
#include<string>
using namespace std;
int main()
{int n;
string s[11111],ss[11111];
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>s[i]>>ss[i];
     
}
for(int i=1;i<=n;i++)
{
        if(ss[i][0]==114)cout<<s[i]<<endl;     
}  
for(int i=1;i<=n;i++)
{
        if(ss[i][0]==119||ss[i][0]==99&&ss[i][1]==104)cout<<s[i]<<endl;
}  

for(int i=1;i<=n;i++)
{
        if(ss[i][0]==109)cout<<s[i]<<endl;
}  

for(int i=1;i<=n;i++)
{
        if(ss[i][0]==99&&ss[i][0]==97)cout<<s[i]<<endl;
}  

system("pause");
return 0;    
}
