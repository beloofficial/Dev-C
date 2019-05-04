#include<iostream>
using namespace std;
int main()
{int n,a[11111],k=1,sm=0,i;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
sort(a+1,a+n+1);
   for(i=n;i>=k;i--)
  { if(a[i]+a[k]<=4){sm++; k++;}
    else {sm++;}}
    cout<<sm;
system("pause");
return 0;    
}
