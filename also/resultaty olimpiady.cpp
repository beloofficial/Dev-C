#include<iostream>
using namespace std;
int main()
{int i,n,k=0,a[111],b[111];
cin>>n;

for(i=1;i<=n;i++)

{
                 
                 cin>>a[i];

     if(a[i]>a[i+1])k++;}

    cout<<k;
    
system("pause");

return 0;  
  
}
