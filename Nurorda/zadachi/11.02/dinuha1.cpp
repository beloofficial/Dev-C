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
//#define inc(i,x,h) for(int i=(int)x;i<=(int)n;i++)
//#define dec(i,h,x) for(int i=(int)n;i>=(int)x;i--)

using namespace std;
const int inf=1000000000; // default 1e9

double Time(){
  return double(clock())/double(CLOCKS_PER_SEC);
}


const int N=1000001;

ull p, hash[N], pw[N];
int n,h,k,b[1111];
string s;


int main(){
//	freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
	//std::ios_base::sync_with_stdio(false);
	cin>>n;
	for(int j=1;j<=n;j++){
	cin >> s;
	h = s.length();
	hash[0] = 0;
	pw[0] = 1;
	p = 31;
	for(int i=1;i<=h;i++)
	{
		hash[i] = hash[i - 1] * p + s[i - 1];
		pw[i] = pw[i - 1] * p;
	}
	b[j]=hash[r] - hash[l - 1] * pw[(r-l+1)];
}
sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
            if(b[i]!=b[i+1])k++;
}cout<<k;           
	system("pause");
	return 0;	
}
