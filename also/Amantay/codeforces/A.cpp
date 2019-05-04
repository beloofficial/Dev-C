#include <iostream>
#include <cstdio>

using namespace std;

int n,r1,l1,r[111],l[111],i,res=101,q[111];

int main() {
    cin >> n;
    cin >> l1 >> r1;
    for (i = 1;i < n; i++){
        cin >> l[i] >> r[i];   
    }    
    for (i = 1;i < n; i++){
        if (l[i] < l1 && r[i] > r1) {cout << 0; return 0;}
        else if (l[i] < l1) q[i] = (r1-l1) - (r[i]-(l1-l[i]+l[i]));
        else if (r[i] > r1) q[i] = (r1-l1) - ((r[i]-(r[i]-r1))-l[i]);
        else q[i] = (r1-l1) - (r[i]-l[i]);   
    }    
    for (i = 1;i < n; i++){
        res=min(res,q[i]);    
    }
    cout << res;
    system ("pause");
    return 0;
}
