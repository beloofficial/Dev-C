#include<iostream>
using namespace std;
char a[1111][1111];
int ans;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int i,u,n,s=0,m,k=0,l,mn=1;
cin>>n>>m;
for(i=1;i<=n;i++)
{
                 for(u=1;u<=m;u++)
                 {
                         cin>>a[i][u];           
                 }
}
//---------------------------------------------------------------------------------------------------------  
for(l=1;l<=m-2;l++)
{
                   for(i=1;i<=n;i++)
                   {
                                    for(u=1;u<=m;u++)
                                    { 
                                                     if(a[i][u]=='B'&&a[i][u-1]=='.'){a[i][u-1]='B';k++;break;}
                   }                 }
                   if(k==n)ans++;
                   k=0;
                   
}                                    
//---------------------------------------------------------------------------------------------------------
cout<<ans;                        
system("pause");
return 0;    
}
