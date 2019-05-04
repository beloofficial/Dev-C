#include<iostream>
#include<cstdio>
using namespace std;
int main()
{long long int i,j,n,x,q,k=0;
cin>>n>>x;
for(i=1;i<=n;i++)
{
                 for(j=1;j<=n;j++)
                 {
                         if(j<=x){q=i*j;if(q==x)k++;}
                         else break;                          
                 }                 
                 if(i>x)break;
}
    cout<<k;
system("pause");
return 0;    
}
