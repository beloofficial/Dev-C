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
int n;
string s;
int a[N];

ull Hash(int l, int r){
	return hash[r] - hash[l - 1] * pw[(r-l+1)];
}

bool Compare(int x, int y){
	int l = 1, res = 0, r = min(n - x + 1, n - y + 1);
	while(l < r){
		int mid = (l + r) / 2;
		if(Hash(x, x + mid - 1) == Hash(y, y + mid - 1)){
			res = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}	
	}
	if(s[x + res - 1] < s[y + res - 1]) return 1;
	else return 0;
}

int main(){
	//freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
	//std::ios_base::sync_with_stdio(false);
	cin >> s;
	s += '$';
	n = s.length();
	hash[0] = 0;
	pw[0] = 1;
	p = 1301;
	inc(i,1,n){
		hash[i] = hash[i - 1] * p + s[i - 1];
		pw[i] = pw[i - 1] * p;
		a[i] = i;
	}
	sort(a + 1, a + 1 + n, Compare);
	inc(i,1,n){
		cout << a[i] << " ";
	}
	system("pause");
	return 0;	
}
