#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int tree[100000001], sz = 1, n, m, id, l, r, p, x,k,q;

void update (int pos){
     pos /= 2;
     while (pos > 0){
           tree[pos] = max(tree[pos*2],tree[pos*2+1]);
		   pos /= 2;
           }
     }

int mx (int l, int r){
    int res = 0;
    l = l+sz-1;
    r = r+sz-1;
    while (l<=r){
          if (l%2 == 1) res = max(tree[l],res);
          if (r%2 == 0) res = max(tree[r],res);
          l = (l+1)/2;
          r = (r-1)/2;     
          }   
    return res;
}

int main(){//permutation.
    freopen ("permutation.in","r",stdin);//input.txt
    freopen ("permutation.out","w",stdout);//output.txt
    cin >> n;
    while (sz < n) {
          sz *= 2;
          }
    for (int i = 1;i <= n;i++){
    cin >> tree[sz+i-1];
    update(sz+i-1);
    }     
    cin >> m;
    for (int i = 1;i <= m;i++){
        cin >> id;
        if (id == 2){
               cin >> l >> r;
               k=mx(l,r);
               
               for (int ii=k-(r-l);ii<=k;ii++){
               		 for (int j=l+sz-1;j<=r+sz-1;j++){
               			if (ii==tree[j]){q++;j=sz+n;}
					   }
					   if (ii!=q) {cout <<"NO"<<endl;ii=k+1;}
			   }
			   if (q==(r-l)+1) cout <<"YES"<<endl;
			   q=0;
               }
        else    {    cin >> p >> x;
               tree[sz+p-1] = x;
               update (sz+p-1);}}
    return 0;
}
