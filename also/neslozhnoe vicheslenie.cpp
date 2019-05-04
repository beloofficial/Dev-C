#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
int n,k,su=0,mult=1;
cin>>n>>k;

while(n>0){
    su=su+n%k;
    mult=mult*(n%k);
    n =n/k;
}
cout<<mult-su;
//system("pause");
return 0;    
}
