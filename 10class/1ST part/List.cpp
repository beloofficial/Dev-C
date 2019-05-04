#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int n,a[111111],k=0,q,i,sum=0;
cin>>n;
 for(i=1;i<=n;i++)
 {
	cin>>a[i];
 }
sort(a+1,a+n+1);
 for(i=1;i<=n;i++)
 {
	if(a[i]+1==a[i+1]&&i!=n)
	{
		if(a[i]<0)k++;
		for(int j=1;j<=n;j++)
 		{
 			q=a[i];
 			q=q/10;
 			k++;
 			if(q==0)break;
 			
 		}
	}
	
		else if(a[i]!=a[i+1]&&i!=n)
		{
     		if(k>2)cout<<" ..., ";
     		if(i==n)cout<<a[i];
     		else cout<<a[i]<<", ";k=0;
     	}
     	if(i==n)cout<<a[i];
  else if(k>0)cout<<a[i]<<", ";   	
 }
system("pause");
return 0;    
}
