#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int z, i, a[1001][1001], n, j, control, control1, l, noob;
vector <int> stuck1;  

void dfs(int x)
{
	int i;
	z = 0;
	for(i = 1; i <= n; i++){
		noob = 0;
		if(a[x][i] == 1)
		{
			z = 1;
			a[x][i] = 0;
			a[i][x] = 0;
			noob = 1;
			dfs(i);
		}
	}
	stuck1.push_back(x);
}

int main()
{
	#ifdef XDEBUG
	freopen("in.txt", "r", stdin);
	#else
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			cin >> a[i][j];
	for(i = 1; i <= n; i++){
			control = 0;
			for(j = 1; j <= n; j++){
				if(a[i][j] == 1)
					control++;
			}
		if(control % 2 != 0)
			control1++;
	}
	if(control1 > 2)
		cout << "NO";
	else
		dfs(1);
	for(i = 0; i < stuck1.size(); ++i) 
	printf("%d ", stuck1[i]);
	printf("\n");
	return 0;
}
