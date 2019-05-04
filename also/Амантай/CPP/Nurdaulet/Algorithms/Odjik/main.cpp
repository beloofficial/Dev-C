#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 222;

struct sol
{
	int a[N], cost;
};
int n;
sol curr, next, best;
double T, alpha;
void setcost(sol &curr)
{
	curr.cost = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (abs(i - j) == abs(curr.a[i] - curr.a[j]))
				curr.cost++;
}
void setnext(sol &next)
{
	next = curr;
	int cnt = int(T) + 1, p1, p2;
	for (int i = 0; i < cnt; i++)
	{
		p1 = rand() % n;
		p2 = rand() % n;
		swap(next.a[p1], next.a[p2]);
	}
	setcost(next);
}
bool admit(int d)
{
	return d < 0 || exp(-d / T) > rand() % 1024 / 1024.;
}
int main()
{
	freopen("a.in", "r", stdin);
	freopen("a.out", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++)
		curr.a[i] = i;
	setcost(curr);
	best = curr;
	T = n;
	alpha = 0.99;
	while (best.cost)
	{
		setnext(next);
		if (admit(next.cost - curr.cost))
		{
			curr = next;
			if (curr.cost < best.cost)
				best = curr;
		}
		T *= alpha;
	}
	for (int i = 0; i < n; i++)
		cout << best.a[i] + 1 << " ";
}