#include<iostream>
using namespace std;
int main()
{int a,b,c,d,e,f;
cin>>a;
b=a/1000;
c=a%1000/100;
d=a%1000%100/10;
e=a%1000%100%10;
if(b==e&&c==d)cout<<"YES";
else cout<<"No";
    
    
    
    
system("pause");
    return 0; 
}
