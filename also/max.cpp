#include<iostream>
using namespace std;
int main()
{int i,n,a,max=-999999,c;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a;
if (max < a) max=a;}
cout << max;
system("pause");
return 0;    
}
