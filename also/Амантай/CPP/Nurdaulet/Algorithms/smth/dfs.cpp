#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>  
  
using namespace std;

int n,i,j;
int a[1001][1001];
bool was[1001];
  
void dfs(int x)
{ 
   int i;
 	 was[x] = true;
   cout << x << " ";
   for (i = 1; i <= n; i++)
     if(a[x][i] == 1 && !was[i]) dfs(i);
}

int main()
{
  
  freopen("a.in","r",stdin);
  freopen("a.out","w",stdout);

  cin>>n;  
  	for(i = 1; i <= n; i++)
    	for(j = 1; j <= n; j++)
      	cin>>a[i][j];

  dfs(1);
      
  for(i = 1; i <= n; i++)
  	if (!was[i]) dfs(i);
    	return 0; 
}
