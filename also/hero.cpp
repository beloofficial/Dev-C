#include<iostream>
using namespace std;
int main()
{long long int h,m,a[11111],b[11111],c[11111],d[11111],p[11111],k=0,e=100,f=10000,i,j,s=0,w=0,q[1111];
    cin>>h>>m;
    for(i=1;i<=h;i++)
    {
                     cin>>a[i]>>b[i];
    }
    for(j=1;j<=m;j++)
    {
                     cin>>c[j]>>d[j];
    }
//---------------------------------------------------------------------------------
    for(i=1;i<=h ;i++)
    {
                     f=10000;
                     while(f>0)              
                     {              
                                               
                                    d[1+w]-=a[i];
                                    b[i]-=c[1+w];
                                    if(b[i]>0){k=0;p[i]=e;cout<<p[i]<<" ";}
                                    else 
                                    {
                                         k++;
                                         w++;
                                    }
                                    if(d[1+w]>0)
                                    {
                                         { q[i]=d[1+w];cout<<q[i]<<" "; k=k;f=100;}
                                    }
                                    else 
                                    {
                                         p[i]=k;
                                         k=0;
                                         e=10000;
                                         f=0;
                                         w=0;
                                    }            
                     }             
    }/*
    for(i=1;i<=h;i++)
    {
                     cout<<p[i]<<endl;//  25 5   3 30  //25 2   3 5 // 3 -20   25 -1          
    }*/
system("pause");
return 0;    
}
