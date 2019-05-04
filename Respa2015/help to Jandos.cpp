#include<iostream>
#include<cmath>
using namespace std;
int main()
{double b,d;
int c,l,r,q,s=0,h;
    cin>>q>>c>>l>>r;
    b=q-c;
    while(b>=l)
    {d=q/b;
    h=d;
    if(b<=r&&h*b==q-c)s++;
    b=b/2;             
    }
    cout<<s;
system("pause");
return 0;    
}
