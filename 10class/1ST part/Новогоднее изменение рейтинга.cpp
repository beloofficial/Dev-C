#include<iostream>
#include<algorithm>
using namespace std;
int main()
{long long int n,a[111111],i;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
 sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
     if(a[i]==a[i+1])a[i+1]=a[i+1]+1;
     else if(a[i]>a[i+1])a[i+1]=a[i]+1;                 
    }
    for(i=1;i<=n;i++)
    {cout<<a[i]<<" ";}
system("pause");
return 0;    
}
