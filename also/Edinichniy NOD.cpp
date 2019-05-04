#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
    int n,m,i,s=0;
cin>>n>>m;
for(i=2000;i>=1;i--)
   { if(n%i==0&&m%i==0){s=i;break;}}
   cout<<s;
system("pause");
return 0;    
}
