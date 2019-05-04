#include <iostream>
#include<cstdio>
long long int n, sum[40];
void pt(int left, int min = 0, int i = 0){
    if (left < 0 || min == n)
        return;
    sum[i] = min;
    if (min != 0)
    {
        pt(left - min, min, i + 1);
    }
    pt(left - 1, min + 1, i);
    if (left == 0)
    {
        for (int j = 0; j <= i; ++j)
            cout << sum[j] << (j != i ? '+' : '\n');
    }
        
}
int main(){
    cin >> n; 
    pt(n);
    return 0;
}
