#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,n,a[11111],s=0,k=0,j=0,h;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
/*if(n%2==0)
for(s=0;s<=n/2;s+=2)
{
     k=k+a[1+s]+a[n-s];j=j+a[2+s]+a[(n-1)-s];
}
    if(n%2==0)
    cout<<abs(k-j);*/
    h=n;
     for(s=0;s<=n/2;s+=2)
{
     k=k+a[1+s]+a[h-s];j=j+a[2+s]+a[(h-1)-s];
}
     cout<<k<<" "<<j;    
system("pause");
return 0;    
}
