#include<iostream>
#include<cstdio>
#define ll long long 
using namespace std;
char s,board[8]={'a','b','c','d','e','f','g','h'};
ll x,pos;
int main()
{
 cin>>s>>x;
 for(int i=0;i<8;i++)
 if(s==board[i])
 {
  pos=i;
  break;
 }
 if(pos-2>=0)
 {
  if(x-1>0)
  {
   cout<<board[pos-2]<<x-1<<endl;
  }
  if(x+1<=8)
  {
   cout<<board[pos-2]<<x+1<<endl;
  }
 }
 if(pos-1>=0)
 {
  if(x-2>0)
  {
   cout<<board[pos-1]<<x-2<<endl;
  }
  if(x+2<=8)
  {
   cout<<board[pos-1]<<x+2<<endl;
  }
 }
 if(pos+1<=7)
 {
  if(x-2>0)
  {
   cout<<board[pos+1]<<x-2<<endl;
  }
  if(x+2<=8)
  {
   cout<<board[pos+1]<<x+2<<endl;
  }
 }
 if(pos+2<=7)
 {
  if(x-1>0)
  {
   cout<<board[pos+2]<<x-1<<endl;
  }
  if(x+1<=8)
  {
   cout<<board[pos+2]<<x+1<<endl;
  }
 }
}
