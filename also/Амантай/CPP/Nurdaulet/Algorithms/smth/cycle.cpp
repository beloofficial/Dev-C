#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstdio>
using namespace std;

  int was[1000],a[1000][1000];
  int i,j,n,x;
  void Cycle(int x)
 	{
    was[x] = 1;
     for(i = 1; i <= n; i++) {
       if ((a[x][i] == 1) && (was[i] == 0)) Cycle(i);
       if ((a[x][i] == 1) && (was[i] == 1)) { cout<<"YES"; exit(0); }
       }
       was[x] = 2;
 	}
  int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   cin >> n;
   for(i = 1;i <= n; i++)
     for(j = 1;j <= n; j++)
    	 cin >> a[i][j];
       
   for(i = 1; i <= n; i++)
         if (was[i] == 0) Cycle(i);

    cout<<"NO";

  system("pause");
   return 0;
}
