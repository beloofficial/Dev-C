#include<iostream>
using namespace std;
int main()
{int i,a[1111],b,n,k=2;
cin>>n;
while(n==1){
            if(n%k==0)b=k;
            else k+1;
            
            for(i=1;i<=n;i++){
            cout<<b<<" ";}
            }
    
    
system("pause");
return 0;    
}
