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

//#define inc(i,x,n) for(int i=(int)x;i<=(int)n;i++)
//#define dec(i,n,x) for(int i=(int)n;i>=(int)x;i--)

using namespace std;

const int inf=1000000000; // default 1e9
const int N=1000001;

long long int p, hash[N], pw[N],b[11111];
int n;
string s;
int main(){
    int l;
//	freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
	std::ios_base::sync_with_stdio(false);
	cin>>l;
	for(int e=1;e<=l;e++)
{
    cin >> s;	
	hash[0] = 0;
	pw[0] = 1;
	p = 1031;
	for(int i=1;i<=s.size();i++){
		hash[i] = hash[i - 1] * p + s[i - 1];
                        }
                        b[e]=hash[s.size()];
for(int e=1;e<=l;e++)
cout<<b[e]<<" ";
}
	system("pause");
	return 0;	
}
