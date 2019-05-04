#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <map>

using namespace std;

int i, n, k, y[1001], x[1001], l[1001], r[1001], root , cnt;
char ch;


int merg(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	if (y[a]  > y[b])
		{r[a] = merg(r[a],b); return a;}
	else
		{l[b] = merg(a,l[b]); return b;}

}

int del(int v, int k)
{

	if(k == x[v])
		return merg(l[v],r[v]);	
	if (k < x[v])
		l[v] = del(l[v],k);
	else
		r[v] = del(r[v],k);
 	return v;
}
  

void split(int v, int X, int &L, int &R)
{	
	int a = 0;  int b = 0;
	if (v == 0)
		{L = 0;	R = 0; return;} 
	if (x[v] < X)
	{
		split(r[v], X, a, b);
		r[v] = a;
		L = v;
		R = b;
	}
	else
	{
		split(l[v], X, a, b);
		l[v] = b;
		R = v;
		L = a;
	}

}

int add(int v, int u) {
	if (v == 0) return u;
	if (y[v] > y[u])
	{
		if(x[u] > x[v])
			r[v] = add(r[v], u);
		else
			l[v] = add(l[v], u);
		return v;
	}
	else
	{
		split(v,x[u],l[u],r[u]);
		return u;
	}
}


bool Search(int v, int k)
{
	if (v == 0)
		return 0;
	if (x[v] == k)
	  return 1;
 	if (x[v] > k)
		return Search(l[v],k);
	else
		return Search(r[v],k);

}
int main()

{
  srand(time(0));
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%c%d\n",&ch, &k);
		if (ch == '+')
		{
			cnt++;
			x[cnt] = k;
			y[cnt] = (rand()<<16)|rand();
			root = add(root,cnt);
		}
		if (ch == '-')
		{
		  root = del(root,k);
            
		}
		if (ch == '?')
		{
		  if(Search(root,k))
		  	cout << "YES\n";
		 	else
		 		cout << "NO\n";
		}
	}
}



