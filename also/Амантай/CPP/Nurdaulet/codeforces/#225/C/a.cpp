#include <iostream>
#include <cstdio>
#include <math.h>
#include <map>
#include <stack>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cstring>

#define N 10000000

using namespace std;
 
long long smth;
int n, i, a[200001], der[300000],sz=1;
struct aaa {
int x, pos;
};
int wasA[200001], wasB[200001], A[500000],B[500000];
aaa d[200001]; 
bool cmp(aaa q, aaa w) {
        return q.x > w.x;
}
 
void updateA(int so) {
        so/=2;
        while (so) {
                A[so] = A[so*2]+A[so*2+1];
                so/=2;
        }
}
void updateB(int so) {
        so/=2;
        while (so) {
                B[so] = B[so*2]+B[so*2+1];
                so/=2;
        }
}
long long sumA(int l, int r) {
        long long k = 0;
        while (l <= r) {
                if (l % 2 == 1)
                        k += A[l];
                if (r % 2 == 0)
                        k += A[r];
         l = (l + 1) >> 1;
         r = (r - 1) >> 1;
        }
        return k;
}
long long sumB(int l, int r) {
        long long k = 0;
        while (l <= r) {
                if (l % 2 == 1)
                        k += B[l];
                if (r % 2 == 0)
                        k += B[r];
         l = (l + 1) >> 1;
         r = (r - 1) >> 1;
        }
        return k;
}

int main () {
        cin >> n;
    while (sz <= n)
          sz*=2;
        for (i = 1; i <= n; i++) {
                scanf("%d",&a[i]);
        }
        for (i = 1; i <= n; i++) {
                if (a[i] == 0) {
                        B[i+sz-1] = 0;
                        updateB(i+sz-1);
                        d[i].x = i-1;  
                }
                if (a[i] == 1) {
                        A[i+sz-1] = 0;
                        updateA(i+sz-1);
                        d[i].x = n-i;
                }
                if (a[i] == 0) {
                        wasB[i] = wasB[i-1]+1;
                        wasA[i] = wasA[i - 1];
                }
               
                if (a[i] == 1)
                        wasA[i] = wasA[i-1]+1,wasB[i] = wasB[i-1];
                d[i].pos = i;
        }
        sort(d + 1, d + n + 1, cmp);
        for (i = 1; i <= n; ++i) {
                if (a[d[i].pos] == 1) {
                        A[d[i].pos + sz - 1] = 1;
                        updateA(d[i].pos + sz - 1);
                        smth += (wasA[d[i].pos-1]) - sumA(sz, sz + d[i].pos - 2);
                        smth += (wasB[n]-wasB[d[i].pos]) - sumB(sz+d[i].pos, sz + n - 1);
                }
                if (a[d[i].pos] == 0) {
                        B[d[i].pos + sz - 1] = 1;
                        updateB(d[i].pos + sz - 1);
                        smth += (wasA[d[i].pos-1]) - sumA(sz, sz + d[i].pos - 2);
                        smth += (wasB[n]-wasB[d[i].pos]) - sumB(sz+d[i].pos, sz + n - 1);
                }
        }
        cout << smth;
        return 0;
}