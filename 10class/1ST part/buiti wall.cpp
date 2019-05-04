#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int n,i,j,s,k,q=9999999,a,b;
cin>>n;
for(i=1;i<=n;i++)
{
            for(j=1;j<=n;j++)
            {        if(i*j>n)break;
                             else{     
                    s=n-i*j;
                    k=i-j;
                    k=abs(k);
                    if(q>s+k){q=s+k;a=i;b=j;}
                    
                    }                           
            }                   
}
    cout<<a<<" "<<b;
//system("pause");
return 0;    
}
