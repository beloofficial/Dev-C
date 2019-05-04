#include<iostream>
using namespace std;
int main()
{
	int n,a,b,l,r,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(i==1){
			l=a;r=b;ans++;
		}
		else
		{
		
		if(a>=l&&b<=r){
			l=a;r=b;ans++;
		}
		else if(a<=l&&b>=l&&b<=r){
		r=b;ans++;}
		else if(b>=r&&a>=l&&a<=r){l=a;ans++;}
	}
	}
	if(ans==n)cout<<"YES";
	else cout<<"NO";
	return 0;
}
