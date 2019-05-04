#include<iostream>
using namespace std;
int main()
{int n,i,j;
char a[1111][1111],k=0,l=0;
cin>>n;
for(i=1;i<=n;i++)
{
     for(j=1;j<=n;j++)
     {
              cin>>a[i][j];               
     }                 
}
/////////////////////////////////////////////////
     for(i=1;i<=n;i++)
     {
                      for(j=1;j<=n;j++)
                      {
                         if(a[i][j]=='.'){k++;break;}   
                      }           
                           
     }
     for(j=1;j<=n;j++)
     {
                      for(i=1;i<=n;i++)
                      {
                         if(a[i][j]=='.'){l++;break;}   
                      }           
                           
     }
////////////////////////////////////////////////////////////////////////////////////
     if(k==n)
     {
             for(i=1;i<=n;i++)
             {
                      for(j=1;j<=n;j++)
                      {
                         if(a[i][j]=='.'){cout<<i<<" "<<j;break;}   
                      }           
                           cout<<endl;
             }
             
     }
     else if(l==n)
     {
              for(j=1;j<=n;j++)
             {
                      for(i=1;i<=n;i++)
                      {
                         if(a[i][j]=='.'){cout<<i<<" "<<j;break;}   
                      }           
                           cout<<endl;
             }  
     }
     else cout<<-1;
system("pause");
return 0;    
}
