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
int n,h[1111],q;
string s;
void Hash(int p=1,int n){
        	return hash[n] - hash[p - 1] * pw[(n-p+1)];

}
int main(){
//	freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
	std::ios_base::sync_with_stdio(false);
	cin>>q;
	for(int j=1;j<=q;j++);
	cin >> s;
	n = s.length();
	hash[0] = 0;
	pw[0] = 1;
	p = 1301;
	inc(i,1,n){
		hash[i] = hash[i - 1] * p + s[i - 1];
		pw[i] = pw[i - 1] * p;
		Hash(1,n);
	}
	h[j]=hash[n];
	}
	sort(h+1,h+q+1);
	for(int j=1;j>=q;j++);
	cout<<h[j]<<" ";
	system("pause");
	return 0;	
}
