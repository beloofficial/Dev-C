#include <iostream>
#include <cstdio>

using namespace std;

int r, c, a, b, q, j, k;

int main(){
    cin >> r >> c;
    cin >> a >> b;
    for (int i = 1;i <= r*a; i++){q++;k=0;
        for (int j = 1;j <= c*b; j++){
            if (q > 2*a) q = 1;
            if (q <= a){
            k++;
            if (k > 2*b) k = 1;
            if (k <= b) cout << "X" ;
            else cout << "." ;}
            else {
            k++;
            if (k > 2*b) k = 1;
            if (k <= b) cout << "." ;
            else cout << "X" ;}
            }
            cout<<endl;
        }
        system ("pause");
        return 0;
}
