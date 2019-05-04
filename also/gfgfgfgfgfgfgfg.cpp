#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,j;
    cin>>a;
    j=a/1000;
    b=a%1000/100;
    c=a%1000%100/10;
    d=a%1000%100%10;
    if(j+b==c+d) cout<<"YES";
    else cout<<"NO";
    system("pause");
    return 0;
    
}
