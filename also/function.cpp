#include <iostream>
#include <cstdio>

using namespace std;

int res = 0,a[1000001], sz = 1, n, m,  l, r, p, x;

int sum (int l, int r){
    res+=a[l];
    l++;
    if (l <= r) max(l,r);   
    else return res;
}

int main(){
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */cin >> n;
    for (int i =1;i<=n ;i++){
    cin>>a[i];
    }
    cin >>m;
    for (int j=1;j<=n;j++){
    cin >> l>>r; 
    cout<<max(l,r);   }
    system ("pause");
    return 0;
}
