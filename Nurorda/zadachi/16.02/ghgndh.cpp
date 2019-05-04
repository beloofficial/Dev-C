#include<iostream>
using namespace std;
bool b[11111];
int main()
{int n,k,i;
cin>>n>>k;
for(i=2;i<=n;i++)
{if(b[i]){b[i]=false;
for(i=i*i;i<=n;i++)
         b[i]=true;
         }
}        
    for(i=2;i<=n;i++)
    if(!b[i])cout<<b[i]<<" ";
system("pause");
return 0;    
}
