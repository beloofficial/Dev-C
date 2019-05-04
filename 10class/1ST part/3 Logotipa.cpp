#include<iostream>
using namespace std;
int main()
{
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int a=max(x1,y1);
int b=max(x2,y2);
int c=max(x3,y3);
int d=max(a,b);
int mx=max(d,c);

if(mx*mx==x1*y1+x2*y2+x3*y3)
{
 int x1mx=max(x1,y1);
 int x2mx=max(x2,y2);
 int x3mx=max(x3,y3);
 int x1mn=min(x1,y1);
 int x2mn=min(x2,y2);
 int x3mn=min(x3,y3);
     if(x1mx==mx)
     {
                     for(int i=1;i<=x1mn;i++)
                     {
                             for(int j=1;j<=x1mx;j++)
                             {       
                                     cout<<"A";        
                             }                         
                             cout<<endl;
                     }                       
     }
     if(x2mx==mx)
     {
                     for(int i=1;i<=x2mn;i++)
                     {
                             for(int j=1;j<=x2mx;j++)
                             {       
                                     cout<<"B";        
                             }                         
                             cout<<endl;
                     }                       
     }
     if(x3mx==mx)
     {
                     for(int i=1;i<=x3mn;i++)
                     {
                             for(int j=1;j<=x3mx;j++)
                             {       
                                     cout<<"C";        
                             }                         
                             cout<<endl;
                     }                       
     }
     
     
     
     
}         
system("pause");
return 0;    
}
