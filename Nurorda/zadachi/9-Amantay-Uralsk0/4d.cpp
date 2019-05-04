#include<iostream>
#include<algorithm>
#include<cstdio>
#include<fstream>
using namespace std;
int main()
{freopen("4.in","r",stdin);
freopen("4.out","w",stdout);
    int n,k,i,a[1111];
cin>>n>>k;
for(i=n;i>=1;i--)
{cin>>a[i];}
if(n<k)cout<<0;
else {
k=k-1;
sort(a+1,a+n+1);  
cout<<a[(n-k)+1]-a[1];
                      }        
//system("pause");
return 0;    
}
