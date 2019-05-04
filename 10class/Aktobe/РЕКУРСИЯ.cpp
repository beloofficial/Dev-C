#include<iostream>
using namespace std;
int a[1111],n;
void rec(int id)
{
 if(id==n+1)
 {
  for(int i = 1; i <= n; ++i){
   cout << a[i] << " ";
  }
  cout << endl;
  return ;
 }
 else 
 {
  for(int i=1;i<=2;++i)
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
 return 0; 
}
