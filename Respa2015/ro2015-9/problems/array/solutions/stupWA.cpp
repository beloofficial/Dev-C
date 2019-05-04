#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n, m, l, r, x;
vector <int> a[1000000];
int ans[1000000];

int main()
{
    freopen("A.in", "r", stdin);
    freopen("A.out", "w", stdout);

    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        a[i].push_back(0);
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r >> x;
        for (int j = l; j <= r; j++)
            if (x)
                ans[j] = x;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}