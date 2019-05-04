#include<iostream>
using namespace std;
int main()
{freopen("gcd.in","r",stdin); 
freopen("gcd.out","w",stdout); 
    int i,n,k,s=1,j;
cin>>n>>k;
for(i=1;i<=n;i++)
    {s=s*k;}
    cout<<s+(k-1);
//system("pause");
return 0;    
}
