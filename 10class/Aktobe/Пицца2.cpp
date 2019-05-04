#include<iostream>
#include<cstdio>
using namespace std;
long long int a[111111],n,mx=0,ans=0,k=0,q=0;
void rec(int id)
{
 if(id==n+1)
 {mx=0;k=0;
  for(int i = 1; i <= n; ++i){
  	if(a[i]!=0){
  	if(k==0)
   mx=mx+a[i];
   else {mx=-1;break;}}
   else k++;
   
  }
  if(mx==n){ans++;}
  return ;
 }
 else 
 {
  for(int i=0;i<=3;++i)
  {
   a[id]=i;q=q+i;
   if(q>n){q=0;break;}
   rec(id+1);
  }
 }
}
int main()
{
 cin>>n;
 rec(1);
 cout<<ans;
 return 0; 
}
