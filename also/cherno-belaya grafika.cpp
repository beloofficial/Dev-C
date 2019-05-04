#include<iostream>
#include<string>
using namespace std;
int c[111][111];
int main()
{int i,j,n,k,a[111][111],b[111][111];
string s;
cin>>s>>n;
for(i=1;i<=n;i++)
{
                       for(j=0;j<s.size();j++)
                       {
                              cin>>a[i][j];                                      
                       }
}
for(i=1;i<=n;i++)
{
                       for(j=0;j<s.size();j++)
                       {
                              cin>>b[i][j];                                      
                       }
}
//------------------------------------------------------------------------------
for(i=1;i<=n;i++)
{
                       for(j=0;j<s.size();j++)
                       {
                                              if(a[i][j]!=b[i][j])
                                              {
                                               if(a[i][j]==1)a[i][j]=1;
                                               else if(b[i][j]==1)a[i][j]=1;                   
                                              }
                                              else 
                                              {
                                              if(a[i][j]==1)a[i][j]=0;
                                              else if(a[i][j]==0)a[i][j]=1;     
                                              }
                       }
}
for(i=1;i<=n;i++)
{
                       for(j=0;j<s.size();j++)
                       {
                            cout<<a[i][j]<<" "<<endl;                  
                       }
}
system("pause");
return 0;    
}
