#include<iostream>
#include<cmath>
using namespace std;
int main()
{int n,a,b,k,sum=0;
cin>>n>>a>>b;
k=n/2+1;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
        if(abs(i-k)>=a&&abs(j-k)>=b) sum++;
}                 
}
    if(sum>0){sum--;cout<<sum;}
    else cout<<sum;
system("pause");
return 0;    
}
