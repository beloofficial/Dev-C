#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main()
{freopen("3.in","r",stdin);
freopen("3.out","w",stdout);
    long long int i,j,n,a[500][500],mx=0;
cin>>n;
for(i=1;i<=n;i++)
{
                 for(j=1;j<=n;j++)
                 {
                       cin>>a[i][j];                 
                 }                 
}for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
sort(a[i]+1,a[i]+n+1);}
    for(i=1;i<=n;i++){
                      if(a[i][2]>mx)mx=a[i][2];
                      else mx=mx;}
                      cout<<mx;
//system("pause");
return 0;    
}
