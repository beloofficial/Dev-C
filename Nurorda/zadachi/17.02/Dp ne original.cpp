#include<iostream>
using namespace std;
int d[1111][1111],a[1111],p[1111],n,j,i,len;
int main()
{int n;
cin>>n;
         for( i=1;i<=n;i++)
        {
                     cin>>a[i];
        }    
        for(i=1;i<=n;i++)
        {
                         p[i]=a[i]+p[i-1];
        }
        for(i=1;i<=n;i++)
        {
                d[i][i]=a[i];
        }
                      for(len=2;len<=n;len++)
                      {
                              for(i=1;i+len-1<=n;++i)
                              {
                                       j=i+len-1;
                                          d[i][j]=max((a[i]+p[i])-d[i+1][j],a[j]+(p[j-1]-p[i-1])-d[i][j]);
                              }
                      }
cout<<d[1][n]<<" "<<a[n]-d[1][n];

    
    
system("pause");
return 0;    
}
