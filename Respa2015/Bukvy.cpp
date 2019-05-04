#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);    
long long int k,mx=1,qq,mn=1,mnn=9999999,ss;
string s;
cin>>s>>k;
for(int q=0;q<s.size();q++)
{
    for(int i=q;i<s.size();i++)
    {
            if(mx!=k)
                     {
                      if(s[i]==s[i+1]){mn++;}
                      else {mx++;mn++;}
                      }
             else {ss=mn;break;}   
    }
   
if(mx!=k)break;
else if(ss<mnn)mnn=ss;
    else ss=ss;
    mx=1;mn=1;qq++;
}
 cout<<mnn;
system("pause");
return 0;    
}
