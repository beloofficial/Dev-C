#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int a[11111],n,m,x,z;
cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
            cin>>x>>z;
    a[x]+=1;
    a[z]+=1;
}
for(int i=1;i<=n;i++)
cout<<a[i]<<" ";
//system("pause");
return 0;    
}
