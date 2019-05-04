#include<iostream>
using namespace std;
int main()
{
int n,sum=0,j,k;
char s[11111];
cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>s[i];               
    }
    
    for(int i=1;i<=n;i++)
    {
         if(s[i]=='*')
         {
                      for(k=1;k<=n/2;k++)
                      {
                                         for(j=i;j<=n;j=j+k)             
                                         {
                                          if(s[j]=='*')sum++; 
                                           else 
                                                {
                                                     if(sum>4)break;
                                                     else sum=0;              
                                                }  
                                         }
                                         if(sum>4)break;
                                     else sum=0;
                      }
         } 
         
         
    }
    if(sum>4)cout<<"yes";
    else cout<<"no";
return 0;    
}
