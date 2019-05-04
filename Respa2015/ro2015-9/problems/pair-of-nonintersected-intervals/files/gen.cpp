#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cassert>
#include <ctime>
#include <sstream>

using namespace std;

int n;

int get() {
return (rand() << 16) + rand();
}

int main(int argc, char **argv){
    
    n = atoi(argv[1]);
    int seed = atoi(argv[2]);
    int up = atoi(argv[3]);

    srand(seed);
    
    cout << n << endl;
    for(int i = 0; i < n; i++) {
        cout << get()%up+1;
        if(i < n-1) cout << " ";
        else cout << "\n";
    }
    
    return 0;
}
