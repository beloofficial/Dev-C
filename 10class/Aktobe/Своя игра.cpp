#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("jeopardy.in","r",stdin);
freopen("jeopardy.in","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	 if(a>b*2+1&&a>c*2+1)cout<<"Teacher";
	 else if(b>a*2+1&&b>c*2+1)cout<<"Friend";
	 else if(c>2*a+1&&c>2*b+1)cout<<":)";
	else cout<<"Nobody";
	return 0;
}
