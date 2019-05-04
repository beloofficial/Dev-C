#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m,s,q,w;
	cin>>n>>m>>s;
	q=s/60;
	n=n+q;
	w=s%60;
	m=m+w;
	n=n+m/60;
	m=m%60;
	n=n%24;
	if(n<10){
	cout<<0<<n<<":";
	if(m<10)cout<<0<<m;
	else cout<<m;
	}
	else 
	{
		cout<<n<<":";
		if(m<10)cout<<0<<m;
		else cout<<m;
	}
return 0;
}
