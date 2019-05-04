#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int i,n;
struct Pair { 
	int num;
	int pos;
	} a[100001];
bool cmp (Pair q , Pair w)
{
	return (q.num > w.num || (q.num == w.num && w.pos > q.pos));
}
int main()

{ 	
	freopen ("a.in","r",stdin);
	freopen ("a.out","w",stdout);
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&a[i].num);
		a[i].pos = i;
	}
	sort(a + 1 , a + n + 1 , cmp);
	for (i = n; i >= 1; i--)
		printf("%d ",a[i].pos);
	return 0;
}