#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a,b,c,d;

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin>>a>>b>>c;
 d=(a*c*2)+(b*c*2);
 if (d%16>0) cout<<d/16+1;
 else cout<<d/16;
 return 0;   
}
