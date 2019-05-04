#include<iostream>
using namespace std;
typedef long long ll;
ll n,a[111111],d[1111][1111],s[111111],q,k=0;
int main()
{cin>>n;
{
        while(n!=0)
{k++;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		d[i][i]=a[i];
		s[i]=s[i-1]+a[i];
	}
	for(ll len=2;len<=n;len++)
		for(ll l=1,r=l+len-1;r<=n;l++,r++)
            d[l][r]=max(a[l]+s[r]-s[l]-d[l+1][r],a[r]+s[r-1]-s[l-1]-d[l][r-1]);
	q=d[1][n]-(s[n]-d[1][n]);
	cout<<"In game "<<k<<", the greedy strategy might lose by as many as "<<q<<" points."<<endl;
       //In game 1, the greedy strategy might lose by as many as 7 points.  1 5 67 21 23 
	 cin>>n;
}
}
	system("pause");
	return 0;
}
