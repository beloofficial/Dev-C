#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<utility>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<cmath>
#include<ctime>
#include<map>
#define S second
#define F first
#define ll long long
#define eps 1e-9
#define mkp make_pair
#define pb push_back
#define ull unsigned long long
#define inc(i,x,n) for(int i=(int)x;i<=(int)n;i++)
#define dec(i,n,x) for(int i=(int)n;i>=(int)x;i--)
using namespace std;
const int inf=1000000000; // default 1e9
double Time(){
  return double(clock())/double(CLOCKS_PER_SEC);
}
const int N=1000001;
ull p, hash[N], pw[N];
int n,x,P=1,b[111111];
string s;
ull Hash(int l, int r)
{
    for(l=1;l<=n;l++)
    {
                     for(r=1+x;r<=n;r++)
                     {
b[P] = hash[r] - hash[l - 1] * pw[(r-l+1)];
                          if(r==n){x++;}b[P++];
                     }
    }            
}
int main(){
    int l,r,k=0,h;
//	freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
	//std::ios_base::sync_with_stdio(false);
	cin >> s;
	n = s.length();
	hash[0] = 0;
	pw[0] = 1;
	p = 31;
	inc(i,1,n)
    {
		hash[i] = hash[i - 1] * p + s[i - 1];
		pw[i] = pw[i - 1] * p;
    }
               Hash(l=1,r=1);
		//cout << Hash(l, r) << endl;break;
		sort(b+1,b+P+1);
	for(int j=1;j<=P;j++)
	{if(b[j]==b[j+1])b[j]=-1;}
	for(int j=1;j<=P;j++)
	{if(b[j]!=-1)k++;}
	h=k-1;
	cout<<h;
	system("pause");
	return 0;	
}
