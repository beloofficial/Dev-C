#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main()
{
int x[111],y[111],n;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>x[i];
s.push(x[i]);}
s.pop();
s.pop();
cout<<s.top()<<" ";
return 0;
}


