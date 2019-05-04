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
   		printf("%d", a[i]);
  		}
  		cout<<endl;
 	}
 else 
 {
  	for(int i=1;i<=n;++i)
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
