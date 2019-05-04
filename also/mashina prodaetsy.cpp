#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int i,n,a[111],k;
cin>>n;
for(i=1;i<=n;i++)
    {cin>>a[i];}
 for(i=1;i<=n;i++){   
    sort(a+1,a+n+1);}

    cout<<a[i];
system("pause");
return 0;    
}
