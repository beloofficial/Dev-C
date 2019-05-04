#include <iostream> 
using namespace std; 
int v,t,s; 
int main() { 

cin>>v>>t; 
s=v*t%109; 
cout<<(s+109)%109+1; 
return 0; }
