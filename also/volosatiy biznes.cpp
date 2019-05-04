#include<iostream>
using namespace std;
int main()
{int a[111],i,n,k=1,s=0,p=0;
    cin>>n;
    for(i=1;i<=n;i++)
{cin>>a[i];}
    for(i=1;i<=n;i++)
{
    if(a[i]<a[i+1])k++;
    else {s=a[i]*k;    p=p+s;k=1;}    
}
    cout<<p<<k;
system("pause");
return 0;    
}
