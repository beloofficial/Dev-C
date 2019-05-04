#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main()
{freopen("1.in","r",stdin);
freopen("1.out","w",stdout);
    int i,n,s[1111],x,z,m;
cin>>n;
for(i=1;i<=n;i++)
{cin>>s[i];}
cin>>m;
for(i=1;i<=m;i++)
{cin>>x>>z;
if(x>z)cout<<"0"<<endl;
else cout<<"1"<<endl;
}

    
//system("pause");
return 0;    
}
