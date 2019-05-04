#include<iostream>
#include<iomanip>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
   long long int n,p,t1,k;
    double h,o,c,t,s;
cin>>n>>p;
 if(p==0){cout<<n;return 0;} 
s=(100-p)/p;//3 
c=(n*(100/p));//40 
t=100/p;//4 
cout.precision(9); 
cout<<fixed<<(t*c)/((t*s)+(c));


system("pause");
return 0;
}
