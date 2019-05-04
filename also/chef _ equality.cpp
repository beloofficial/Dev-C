#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int i,j,n,m,a[1111],s=0,k=-1;
cin>>n>>m;
for(i=1;i<=n;i++)
{
                 for(j=1;j<=m;j++)
                 {
                   cin>>a[j];               
                 }
}    
for(i=1;i<=n;i++)
{
                 for(j=1;j<=m;j++)
                 {
                                  sort(a+1,a+m+1);
                 }for(j=1;j<=m;j++){
                 if(a[j]!=a[j+1]){k++;}}
                 cout<<k;k=0;cout<<endl;
}


return 0;    
}
