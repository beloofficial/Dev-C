#include<iostream>
using namespace std;
int a[1111],n,sum=0,q;
void rec(int id)
{
 if(id==n+1)
 {sum=0;
  for(int i = 1; i <= q; ++i){
   	sum+=a[i]; 
  }q--;
  	if(sum==n)
  	{
  		for(int i = 1; i <= n; ++i){
  			cout<<a[i]<<" ";
  		}
  		  cout << endl;
  	}

  return ;
 }
 else 
 {
  for(int i=1;i<=n-1;++i)
  {
   a[id]=i;
   rec(id+1);
  }
 }
}
int main()
{
 cin>>n;
 q=n;
 rec(1);
 return 0; 
}
