#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1111],n,f,s,l=999999,b[11111],k=0;
void rec(int id)
{
 if(id==n+1)
 {
  for(int i = 1; i <= n; ++i){
   cout<<a[i]<<" ";
  }k++;
  cout<<endl;
  
 }
 else 
 {
  for(int i=0;i<=1;++i)
  {
   a[id]=i;
   rec(id+1);
  }
 }
}
int main()
{
 cin>>n;
 rec(1);
 cout<<k;
 return 0; 
}
