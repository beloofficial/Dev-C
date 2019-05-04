#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1111],n,f,s,l=999999,b[11111];
void rec(int id)
{
 if(id==n+1)
 {
  for(int i = 1; i <= n; ++i){
   if(a[i]==0)f=f+b[i];
   else s=s+b[i];
  }
  if(abs(f-s)<l){l=abs(f-s);}
  f=0;s=0;
  
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
 for(int i=1;i<=n;i++)
 {cin>>b[i];}
 rec(1);
 cout<<l;
 return 0; 
}
