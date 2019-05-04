#include<iostream>
#include<cmath>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    double m,k;
    int x1,x2,y1,y2,a[11111],b[11111],i,n;
cin>>x1>>y1>>x2>>y2>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];
    m=(x1-a[i])*(x1-a[i])+(y1-b[i])*(y1-b[i]);
    m=sqrt(m);
    k=(x2-a[i])*(x2-a[i])+(y2-b[i])*(y2-b[i]);
    k=sqrt(k);
    if(m<k/2)
    {
             
             
     cout<<i;return 0;        
                    }
    }
    cout<<"NO";
system("pause");
return 0;    
}
