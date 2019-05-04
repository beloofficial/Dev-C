#include <iostream>
#include <cstdio>

using namespace std;

int n,r1,l1,r[111],l[111],i,res;
int used[1001];

int main() {
    cin >> n;
    cin >> l1 >> r1;
    for (i = 1;i < n; i++){
        cin >> l[i] >> r[i];   
    }    
    for (i = 1;i < n; i++){
        for (int j = l[i];j <= r[i]; j++){
               used[j]=1;
            }
    }     
    for (i = l1;i <= r1; i++){
        if (used[i]!=1) res++;
        }
    cout << res;
    //system ("pause");
    return 0;
}
