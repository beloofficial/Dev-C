#include<iostream>
using namespace std;
int main()
{int n,a[111],b[111],c=1,d=0;
cin>>n;
for(int i=1;i<=n;i++)
    {cin>>a[i]>>b[i];}
    for(int i=1;i<=n;i++)
    
    {
    if (b[i]> b[i-1]){c+=a[i]-a[i-1];if (c>d)d=c;}
    else c=1;}
                     
cout<<d;
system("pause");
return 0;     
}
