#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
   //  freopen("output.txt","w",stdout);
  long long  int i,n,s=0,a[11111],k=0;
cin>>n;
for(i=1;i<=n;i++)
 {
     a[0]=0;a[1]=1;a[i]=a[i-1]+a[i-2];            
 }
 for(i=1;i<=n;i++)
 cout<<a[i]<<" ";
 system("pause");
 return 0;
}
