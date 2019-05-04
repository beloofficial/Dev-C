#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[4],ans=0;
	cin>>n;
	a[1]=n/1000;
	a[2]=n/100%10;
	a[3]=n/10%10;
	a[4]=n%10;
	int e=n;
	
	while(e!=6174)
	{	sort(a+1,a+4+1);
		int q=a[1]*1000+a[2]*100+a[3]*10+a[4];
		int w=a[4]*1000+a[3]*100+a[2]*10+a[1];
		e=w-q;
		a[1]=e/1000;
		a[2]=e/100%10;
		a[3]=e/10%10;
		a[4]=e%10;
		ans++;
	}
	cout<<6174<<endl;
	cout<<ans;
return 0;
}
