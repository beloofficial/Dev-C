#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;
int n, m, x, y, i, a[101][101], k, b[100001];
bool was[100001];
void go (int v){
	was[v] = true;
	for (int j = 1; j <= n; j++){
		if (!was[j] && a[v][j]){
			was[j] = true;
            go (j);        
        }   	 
	}
		b[++k] = v;
}

void go (int v){
    int j;
    was1[v] = true;
    for (j = k; j >= 1; j--){
        if (!was1[j] && a[v][j]){
            was1[j] = true;
            d[v][j] = ++col;
            go (j);               
        }    
    }     
} 
int main (){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d%d", &n, &m);
	for (i = 1; i <= m; i++){
		scanf ("%d%d", &x, &y);
		a[x][y] = 1;
	}
	go (1);
	for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (a[i][j] && !a[j][i])
               a[i][j] = 0;
               a[j][i] = 1;
        }    
    }
    go (1);
    return 0;
}
