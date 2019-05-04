#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout);
    int n,a[111111],q=0,sum=-99999999,l,r,k;
cin>>n;
for(int i=1;i<=n;i++)
{
        cin>>a[i];
}
    
for(int i=1;i<=n;i++)
{q=q+a[i];
      for(int j=i+1;j<=n;j++)
      {
             q=q+a[j]; 
             k=abs(q);
             if(k>sum){sum=k;l=i;r=j;}
      }   
      q=0;   
}
    cout<<r-l<<endl;
    cout<<l<<" "<<r;
system("pause");
return 0;    
}
