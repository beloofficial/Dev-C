#include<iostream>
#include<string>
using namespace std;
int main()
{freopen("2.in","r",stdin);
  	freopen("2.out","w",stdout);
    int h=2;
    string s;
cin>>s;
    for(int i=1;i<s.size()-1;i++)
    {h=h*2;}
    cout<<h;
//system("pause");
return 0;    
} 
