#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[1000051], tree[1000051], sz = 1, n, m, l, r, sum = 0,cur;

//Functions

void update (int pos){
     pos /= 2;
     while (pos > 0){
           tree[pos] = min(tree[pos*2],tree[pos*2+1]);
           pos /= 2;
           }
     }

int Min (int l, int r){
    long long res = (1 << 31) - 1, q, h, g=l, s=r;
    l = l+sz-1;
    r = r+sz-1;
    while (l<=r){
          if (l%2 == 1) {if (tree[l] < res){
                  res = tree[l];q=l;update(l);}}
          if (r%2 == 0) {if (tree[r] < res){
                  res = tree[r];q=r;update(r);}}
          l = (l+1)/2;
          r = (r-1)/2;     
          }   
    tree[q] = (1 << 31)-1;
    update(q);
    return res;          
}
//Main
int main(){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin >> n >> m;
    while (sz < n) {
          sz *= 2;
          }
          for (int i = sz; i <= sz + n - 1; i++) {tree[i] = (1 << 31) -1;}
    for (int i = 1;i <= n;i++){
        cin >> tree[sz+i-1] ; 
        a[i] = tree[sz+i-1];
        update(sz+i-1);
    }     
    for (int i = 1;i <= m;i++){
        cin >> l >> r;
        cur = Min(l,r);
        sum+=Min(l,r);
        cout<<sum<<endl;
        for (int j = 1;j <= n; j++){
            tree[sz+j-1]=a[j];
            update (sz+j-1);
        }
        }
    cout << sum;
    return 0;
}
