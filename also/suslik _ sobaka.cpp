#include<iostream>
#include<cmath>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int x1,y1,x2,y2,i,n,a[1111],b[1111],z,k=1,j=0;
cin>>x1>>y1>>x2>>y2>>n;
    for(i=1;i<=n;i++)
    {cin>>a[i]>>b[i];}
    
    
     for(i=1;i<=n;i++)
     {
         if(abs(a[i]-x1+b[i]-y1)>=abs((a[i]-x2+b[i]-y2)/2))k++;
         else  j=j+k;            
                      
                      
                      
                      
                      
     }
     if(j==1)
      {if(abs(a[i]-x1+b[i]-y1)>=abs((a[i]-x2+b[i]-y2)/2))cout<<"NO";
      else cout<<j;}
      else if(j==0)cout<<"NO";
      else cout<<j;
      
//system("pause");
return 0;    
}
