#include <iostream>
#include <cstdio>

using namespace std;

int tree[1000001], sz = 1, n, m, id, l, r, p, x;

void update (int pos){
     pos /= 2;
     while (pos > 0){
           tree[pos] = tree[pos*2]+tree[pos*2+1];
           pos /= 2;
           }
     }

int sum (int l, int r){
    int res = 0;
    l = l+sz-1;
    r = r+sz-1;
    while (l<=r){
          if (l%2 == 1) res += tree[l];
          if (r%2 == 0) res += tree[r];
          l = (l+1)/2;
          r = (r-1)/2;     
          }   
    return res;
}

int main(){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
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
        if (id == 1){
               cin >> p >> x;
               tree[sz+p-1] = x;
               update (sz+p-1);
               }
        if (id == 2){
               cin >> l >> r;
               cout << sum(l,r) << endl;
               }
        }
    return 0;
}
