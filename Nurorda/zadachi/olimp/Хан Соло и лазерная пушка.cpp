#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,k,x0,y0,x,y,p,mn=-99999;
cin>>k>>x0>>y0;
for( i=1;i<=k;i++)
{cin>>x>>y;
 if(abs(x-x0)>=abs(y-y0))p=abs(y-y0);
 else p=abs(x-x0);
 if(p>mn)mn=p;
 else mn=mn;
}   
cout<<abs(mn);
system("pause");
return 0;    
}
