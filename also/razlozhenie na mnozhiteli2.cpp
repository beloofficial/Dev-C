#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],j;
cin>>n;
j=n;
for(i=1;i<=n;i++)
{
if(j%i==0){a[i]=i;j=j/i;}
else i=i;                 
    cout<<a[i]<<" ";}
system("pause");
return 0;    
}
