#include<iostream>
using namespace std;
int main()
{int n,i,k,l,r,a[111][111];
cin>>n;
for( i=1;i<=n;i++){
        cin>>l>>r;
for(int k=1;k<=l;k++)
{
            for(int j=1;j<=r;j++){
           
            cin>>a[k][j];}
            
            
            if(a[k][j]==0)cout<<"YSE";
}        
            
                                      }

          
                
           
    
    
system("pause");
return 0;    
}
