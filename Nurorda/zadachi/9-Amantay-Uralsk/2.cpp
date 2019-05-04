#include<iostream>
#include<vector>
#include<cstdio>
#include<fstream>
using namespace std;
long long int mn;
int main()
{freopen("2.in","r",stdin);
freopen("2.out","w",stdout);
   long long int n,a[99999],k=0,v,x=0,mnn=999999,d,h,s=0,e,r=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i];s=s+a[i];}
for(int i=1+k;i<=n;i++)
{                      for(int j=1+k;j<=n;j++){
                       x=x+a[j];if(a[j]<mnn)mnn=a[j];
                      int z=x*mnn;
                       if(z>mn){mn=z;v=i;d=j;}
                       else {mn=mn;}
                }k++;x=0;mnn=999999;
}    
cout<<mn<<endl;;
cout<<v<<" ";
for(int i=1;i<=n;i++)
{if(s/a[i]==n)r++;}
if(r==n)cout<<n;
else cout<<d; 
//system("pause");
return 0;    
}
//3 1 6  2 2 2
//4 5 2  2 2 2
