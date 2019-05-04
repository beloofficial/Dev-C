#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{freopen("4.in","r",stdin);
freopen("4.out","w",stdout);
    long long int i,n,a,b,g[50000],h[50000],j[50000],k[50000],p,nm=0,mn=0,q=0,w=0;
string d;
cin>>n;
for(i=1;i<=n;i++)
{                cin>>d;
                  if(d[1]==117){
                 cin>>a>>b;
                 if(d[1]==117&&d[8]==116)
                 {
                                         q++;g[q]=a;h[q]=b;nm++;
                 }
                 else if(d[1]==117&&d[7]==107)
                 {
                      w++;j[w]=a;k[w]=b;mn++;
                 }
}
                 if(d[1]==111)
{
                               cin>>a;
                               
                  if(d[1]==111&&d[7]==116)
                 {
                      for(p=1;p<=nm;p++)
                      {
                       if(g[p]==a){ 
                                {cout<<h[p];g[p]=-1;break;}
                                  }
                                  
                      }
                 }              
                 
                                             else if(d[1]==111&&d[6]==107)
                                             {
                                                                          for(p=10000;p>=1;p--)
                                                                          {
                                                                                           if(j[p]==a) 
                                                                                           {cout<<k[p];j[p]=-1;break;}
                                                                          }              
                                              }
}    
}
//system("pause");
return 0;    
}
