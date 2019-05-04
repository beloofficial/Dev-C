#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int n,i,t[111111],a[111111],l,r;
void build(int x,int tl,int tr)
{
 if(tl==tr)
 {
  t[x]=a[tl];
  return ;
 }
 int mid=(tl+tr)/2;
 build(x+x,tl,mid);
 build(x+x+1,mid+1,tr);
 t[x]=t[x+x]+t[x+x+1];
}
int sum(int x,int tl,int tr,int l,int r)
{	q=min(t[x]=t[x+x]+t[x+x+1]);
	return q;
}
int main()
{
 int m;
 cin>>n>>m;
 for(i=1;i<=n;i++)
 {
  cin>>a[i];
 }
 sort(a+1,a+n+1);
 build(1,1,n);
 for(i=1;i<=m;i++)
 {
 cin>>l>>r;
 cout<<sum(1,1,n,l,r)<<endl; 
}
return 0;
}
