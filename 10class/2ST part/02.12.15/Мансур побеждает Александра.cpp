#include<iostream>
#include<string>
using namespace std;
int main()
{int i;
string s,q;
cin>>s>>q;

cout<<s.erase(3,2)<<" ";//убрать
cout<<q.substr(2,3);//выделять
cout<<s.compare(q)<<" ";//сравнивать
return 0;
}
