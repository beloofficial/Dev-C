#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
    int k,w,a1,b1,a2,b2,a3,b3;
cin>>k>>w>>a1>>b1>>a2>>b2>>a3>>b3;
if(w>=a1+a2&&k<=b1+b2||w>=a1+a3&&k<=b1+b3||w>=a2+a3&&k<=b2+b3||k<=b1&&w>=a1||k<=b2&&w>=a2||k<=b3&&w>=a3||w>=a1+a2+a3&&k<=b1+b2+b3)cout<<"YES";
else cout<<"NO";
    
    
//system("pause");
return 0;
}    
