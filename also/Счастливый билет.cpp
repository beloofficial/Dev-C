#include<iostream>
#include<string>
using namespace std;
int main()
{int i,a[11111],k=0,j=0;
string s;
cin>>s;
    for(i=0;i<s.size();i++)
    {a[i]=s[i]-48;}
//------------------------------------------------------------------------------
    if(s.size()%2==0)
    {
                     for(i=0;i<s.size()/2;i++)
                     {
                                           k=k+a[i];
                     }
                     for(i=s.size()/2;i<s.size();i++)
                     {
                                           j=j+a[i];
                     }
                     if(k==j)cout<<"yes";
                     else cout<<"no";
    }
//------------------------------------------------------------------------------    
    else {
                      for(i=0;i<s.size()/2+1;i++)
                      {
                                           k=k+a[i];
                      }
                         for(i=s.size()/2+1;i<s.size();i++)
                         {
                                           j=j+a[i];
                         }
                         if(k==j)cout<<"yes";
                         else cout<<"no";     
         }
system("pause");
return 0;    
}
