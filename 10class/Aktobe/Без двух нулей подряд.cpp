#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int i,n,k,d[1111],d0[11111];
	cin>>n>>k;
  d[1]=k-1; d0[1]=0;
  for(i=2;i<=n;i++){
    d[i] = (d[i-1]+d0[i-1])*(k-1);
    d0[i] = d[i-1];
  }
  cout<<d[n]+d0[n];
return 0;
}
