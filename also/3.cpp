#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
if(n%2!=0&&n%3!=0)cout<<n;
else if(n%2==0&&n%6!=0)cout<<n/2;
else if(n%3==0&&n%6!=0)cout<<n/3;
    
system("pause");
return 0;    
}
