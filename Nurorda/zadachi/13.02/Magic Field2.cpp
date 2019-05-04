#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],j,k=0,x=1;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=x;i<=n-1;i++){
    for(j=2;j<=n-1;j++){
                        if(a[j]==a[n-1])break;
    if(a[i]==a[j]){k++;x++;}
    else {k=0;}                    
    }}
    cout<<k;
system("pause");
return 0;    
} 
