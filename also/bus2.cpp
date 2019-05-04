#include<iostream>
using namespace std;
int main()
{//
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int a,b,c,k=0,t,r=0,e;
cin>>a>>b>>c;// 10 4 5
if(b<2){cout<<0;return 0;}
else if(a+b<=c){cout<<1;return 0;}
else if(c-a<2)
{
         cout<<0;return 0;}
else if(c-a>=2){
      k++;t=b-(c-a); if(t%c==0)r=k+t/c;
      else r=k+t/c+1;
}
    cout<<r;
    
system("pause");
return 0;    
}

