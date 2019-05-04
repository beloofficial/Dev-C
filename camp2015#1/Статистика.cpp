#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,n,a[111111],ch=0,nech=0;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]%2==0)ch++;
else {nech++;cout<<a[i]<<" ";}
}if(nech>0)cout<<endl;
	for(i=1;i<=n;i++)
	{
	if(a[i]%2==0)
		cout<<a[i]<<" ";
	}if(ch>0)cout<<endl;
		if(ch>=nech)cout<<"YES";
		else cout<<"NO";
return 0;
}
