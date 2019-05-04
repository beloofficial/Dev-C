#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[111],i,n,k,j,b[111],q,w,e,max=9999;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a[i];}
    for(i=1;i<=n;i++)
    {b[i]=(a[i]/10)*(a[i]%10);}
    for(i=1;i<=n;i++)
    {
                     for(j=i+1;j<=n;j++)
                     {e=abs(b[i]-b[j]);
                                      {if(e<max) {max=e; q=b[i]; w=b[j];}}
}}
for(i=1;i<=n;i++)
{if((a[i]/10)*(a[i]%10)==q) cout<<a[i]<<" ";
if((a[i]/10)*(a[i]%10)==w) cout<<a[i]<<" ";}
system("pause");
return 0;    
}
