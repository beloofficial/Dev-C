#include<iostream>
using namespace std;
int main()
{long long int i,n,a[111111],max=-999999,min=999999;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n;i++)
    {if(a[i]>max)max=a[i];
    else max=max;}
    for(i=1;i<=n;i++)
    {if(a[i]<min)min=a[i];
    else min=min;}
    cout<<max-min;        
system("pause");
return 0;    
}      
