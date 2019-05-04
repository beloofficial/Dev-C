#include<iostream>
#include <cstdio>
#include <cstdlib>
#include<stdio.h>
using namespace std;
long long int a[111111],n,k=0,m,b[111111],q=0;
void rec(int id,int sum)
{
 if(id==n)
 {
 
  if(sum==m)
  {
  	for(int i = 1; i <= n; ++i)
  	{
  		cout<<b[i];
  		if(i != n){
  			cout << (a[i] ? '-' : '+');
		}
  	}
  		cout <<"="<< m;
  	exit(0);
  }
  return ;
 }
 
 else 
 {
  for(int i=0;i<=1;++i)
  {
   a[id]=i;
   if(i==0)
   	rec(id + 1, sum + b[id + 1]);
   else 
   	rec(id + 1, sum - b[id + 1]);
  }
 }
}
int main()
{freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 ios_base::sync_with_stdio(0);
 cin>>n>>m;
 
 int sum = 0;
 
 for(int i=1;i<=n;i++)
	{
 	cin>>b[i];
	}
 rec(1,b[1]);
 cout<<"No solution";
 return 0; 
}
