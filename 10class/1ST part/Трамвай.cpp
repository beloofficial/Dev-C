#include<iostream>
using namespace std;
int main()
{int n,a,b,sm=0,q=-999999;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b;
sm=sm-a;
sm=sm+b;
if(sm>q)q=sm;
}
cout<<q;
system("pause");
return 0;    
}
