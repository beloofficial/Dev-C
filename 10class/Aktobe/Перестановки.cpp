#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
int a[1111],n,f,l=999999,b[11111];
string s;
void rec(int id)
{
 if(id==n+1)
 {
  for(int i = 1; i <= n; ++i){
	cout<<a[i]<<" ";
}cout<<endl;
 }
 else 
 {
  for(int i=0;i<n;++i)
  {
   a[id]=i;
   rec(id+1);
  }
 }
}
int main()
{
 cin>>s;
	n=s.size();
 rec(1);
 return 0; 
}
