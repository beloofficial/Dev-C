#include<iostream>
using namespace std;
int n,i,j,k;
bool b[111][111], ok, ok2;
int main()
{int m;
     char a[111][111];
    cin>>m;
    for(int p=1;p<=m;p++)
{   cin>>n;
//-----------------------
ok = 1;
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
 cin>>a[i][j];                 
 if(a[i][j] == '.'){
   b[i][j] = 1;         
 }
 }                 
}   
//////////////////////////////////////////////////////////////////////////////////////////////////////
for(i=1;i<=n;i++)
{
                 for(j=1;j<=n;j++)
                {
                   ok2 = 0;
                   if(a[i][j] == '.') ok2 = 1;
                   if(ok2&&b[j][n - i + 1]){cout << "INCORRECT"; ok = 0; break;}
                   else if(ok2){b[j][n - i + 1] = 1;}
                 }                
     if(!ok)
     {
             break;
     }  
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
if(!ok) continue;
else
{
for(i=1;i<=n;i++)
{
                 for(j=1;j<=n;j++)
                 {
                   ok2 = 0;
                   if(a[i][j] == '.') ok2 = 1;
                   if(ok2&&b[n-j+1][n - i + 1]){cout << "INCORRECT"; ok = 0; break;}
                   else if(ok2){b[n-j+1][n - i + 1] = 1;}
                 }                
     if(!ok){
             break;
             }
}  
}
if(!ok) continue;
///////////////////////////////////////////////////////////////////////////////////////////////////
else 
{     
for(i=1;i<=n;i++)
{
                 for(j=1;j<=n;j++)
                 {
                   ok2 = 0;
                   if(a[i][j] == '.') ok2 = 1;
                   if(ok2&&b[n-j+1][i]){cout << "INCORRECT"; ok = 0; break;}
                   else if(ok2){b[n-j+1][i] = 1;}
                 }                
     if(!ok)
     {
             break;
     }
}  
}
////////////////////////////////////////////////////////////////////////////////////////////////////
             for(i=1;i<=n;i++)
            {//
            for(j=1;j<=n;j++)
                     {//
                     if(b[i][j]) ++k;
                     }//
            }//
            
if(k==n*n)cout<<"GOOD";
else cout<<"BAD";
                 for(i=1;i<=n;i++)
                 {//
                 for(j=1;j<=n;j++)
                 {//
                 b[i][j]=0;
                 }//
                 }//
}
system("pause");
return 0;    
}
