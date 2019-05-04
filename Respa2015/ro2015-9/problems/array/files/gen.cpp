#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstdio>

using namespace std;

int rd()
{
    return (rand() << 16) + rand();
}

int main(int argc, char **args)
{
    int n = atoi(args[1]);
    int m = atoi(args[2]);
    int P = atoi(args[3]);
    int seed = atoi(args[4]);
    int MAXA = atoi(args[5]);
    srand(seed);

    cout << n << " " << m << endl;

    for (int i = 1; i <= m / 2; i++)
    {
        cout << 1 << " " << n << " " << rd() % MAXA + 1 << endl;
    }
    for (int i = 1; i <= m - m / 2; i++)
    {
        int c = rd() % P;
        int l = rd() % n + 1;
        int r = rd() % n + 1;
        if (l > r)
            swap(l, r);
        if (c)
            cout << l << " " << r << " " <<  0 << endl;
        else
            cout << l << " " << r << " " <<  rd() % MAXA + 1 << endl;
    }
}
