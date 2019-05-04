#include<iostream>
using namespace std;
int main()
{int i,n,a,b;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a>>b;
 if(b%a==0)cout<<a<<" "<<b<<endl;
 else cout<<-1<<endl;   }
//system("pause");
return 0;    
}
