#include<iostream>
using namespace std;
int main()
{int j,i,n,a[11111];
string k;
cin>>n;
for(i=1;i<=n;i++)cin>>k;
{                for(j=0;j<k.size();j++)

                 {a[j]=k[j]-48;}
}
for(j=0;j<k.size();j++)
{
    if(a[0]==17||a[0]==18&&a[0]==19&&a[1]>=0&&a[1]<=9&&a[2]>=0&&a[2]<=9&&a[3]>=0&&a[3]<=9&&a[4]==17||a[4]==18&&a[4]==19&&a[5]==17||a[5]==18&&a[5]==19)            
    cout<<"yes";
    else cout<<"no";                  
}    


    system("pause");
    return 0;
}
