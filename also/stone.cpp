#include<iostream>
using namespace std;
int main()
{
 int a[111][2],i,n,k,j,e,b[111];
 cin>>n;
 for(i=1;i<=n;i++)
 {
                  for(j=1;j<=2;j++){
 cin>>a[i][j];}
 }

 for(i=1;i<=n;i++)
 {
                  for(j=1;j<=2;j++){
                  if(a[1][2]==1) b[i]=1; else b[i]=0; 
                  if(a[i][2]!=a[i+1][2]) 
                  {
                  if(a[i][2]>a[i+1][2])    b[i]=1; else b[i]=0; 
                  }
                  if(a[i][2]==a[i+1][2])  a[i][1]=a[i][1]+a[i+1][1];                   
                  
                  }
 }
 for(i=1;i<=n;i++)
 if(b[i]==1) cout<<"<"; else cout<<">";


system("pause");
return 0;    
}
