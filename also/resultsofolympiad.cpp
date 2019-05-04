#include <iostream>
using namespace std;
int k,n,a[1010],q=-1;
int main()
{
    cin >> n;
    for (int i = 1;i <= n; i++){
    cin >> a[i];
    }   
    for (int i = 1;i <= n; i++){
        for (int j = 1;j <= n; j++){
            if (a[j] > q) {q=a[j];k=j;}
            }
            cout << k << " ";
            q=-1;a[k]=-1;
    }
    system ("pause");
    return 0;
}
