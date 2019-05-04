#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long int a[111111],n,f,s,l=999999,z,b,c,d,q,ans;
void rec(int id)
{
 if(id==4+1)
 {
  		for(int i = 1; i <= 4; ++i)
  	{
	  
  		if(a[i]==0)
  			ans+=z;
  		else if(a[i]==1)
  			ans+=b;
  		else if(a[i]==2)
  			ans+=c;
  			if(ans==d)q++;
  		}
  	//	cout<<ans<<" ";
		ans=0;
 }
 else 
 {
  for(int i=0;i<=2;++i)
  {
   a[id]=i;
   rec(id+1);
  }
 }
}
int main()
{
cin>>z>>b>>c>>d;
 rec(1);
 cout<<q/9;
 return 0; 
}
