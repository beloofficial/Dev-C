#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,a[1111],k=0,t=0;
string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i]-48;}
if(s.size()%2==0){
                   for(i=0;i<s.size()/2;i++)
                   {
                                      k=k+a[i];
                   }
                                          for(i=s.size()/2;i<s.size();i++)
                                          {
                                                                          t=t+a[i];                      
                                          }
                    cout<<k<<" "<<t;
                 }
else {
           for(i=0;i<s.size()/2+1;i++)
           {
                                k=k+a[i];
           }
                                for(i=s.size()/2+1;i<s.size();i++)
                                {
                                                                  t=t+a[i];
                                }
           cout<<k<<" "<<t;
     }
     
 while(k>10)    
     {
       k=s[i];         
              for(i=0;i<s[i];i++)
                       
     }
system("pause");
return 0;    
}
