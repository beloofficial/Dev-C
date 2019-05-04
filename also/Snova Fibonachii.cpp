#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int i,n,a[1111],d=0,f=0,k;
cin>>n;
f=n%60;
if(f==1)cout<<1;
else {
     
for(i=1;i<=f;i++)
{
a[0]=1;a[1]=1;a[i]=a[i-1]+a[i-2];   
}
//for(i=1;i<=f;i++)
cout<<a[f]%10;}
//system("pause");
return 0;    
}
