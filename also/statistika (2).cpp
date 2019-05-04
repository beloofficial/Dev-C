#include<iostream>
using namespace std;
int main()
{int i,j,n,a[1111],b=0,c=0,d=0,e=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}

for(i=1;i<=n;i++){
for( j=1;j<=n;j++){
  if(a[i]%2==0)
                {b=a[i];d++;}
                
       for(i=1;i<=n;i++){         
 if(a[i]%2==1)
                {c=a[i];e++;}}
}}
if(d<e)cout<<"YES";
else cout<<"NO";
system("pause");
return 0;    
}
