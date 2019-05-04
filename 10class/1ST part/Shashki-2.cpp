#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int c,d,t,y,q,w;
char e,f;
cin>>e>>c>>f>>d;
if(e=='a')t=1;
else if(e=='b')t=2;
else if(e=='c')t=3;
else if(e=='d')t=4;
else if(e=='e')t=5;
else if(e=='f')t=6;
else if(e=='g')t=7;
else if(e=='h')t=8;

if(f=='a')y=1;
else if(f=='b')y=2;
else if(f=='c')y=3;
else if(f=='d')y=4;
else if(f=='e')y=5;
else if(f=='f')y=6;
else if(f=='g')y=7;
else if(f=='h')y=8;
//////////////////////////////////////
//cout<<t<<" "<<c<<" "<<y<<" "<<d;
q=t+c;w=y+d;//cout<<w<<" "<<q;
if(c>=d)cout<<"NO";
else if(w%2==1)cout<<"NO";
else if(q%2==1)cout<<"NO";
else if(y-t>d-c)cout<<"NO";
else cout<<"YES";
system("pause");
return 0;    
}

