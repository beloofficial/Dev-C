#include<iostream>
#include<string>
using namespace std;
int main()
{int i,l,k=0,h=0,a[11111],q=48;
string s;
cin>>s;
//for(i=0;i<=s.size();i++)
    l=s.size();
       while(l>=1)
       {
                         for(i=0;i<s.size();i++)
                         {
                            h=h+s[i]-q;s[i]=0;                                     
                         }
                         s[1]=h;
                         if(h>9)l=l;
                         else l=0;
                         
       }                             
       cout<<h<<" ";                       
system("pause");
return 0;    
}
