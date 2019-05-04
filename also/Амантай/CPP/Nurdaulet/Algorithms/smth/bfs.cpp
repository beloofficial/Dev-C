#include<iostream>

using namespace std;
  
int a[101][101];
int q[101],d[101];
bool was[101];
int n,i,j,k,x;

int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out", "w",stdout);

	cin >> n;
   
  for(i = 1; i <= n; i++)
  	for(j = 1; j <= n; j++)
    	cin >> a[i][j];

  was[1] = true;
  i = 1;
  j = 1;
  d[1] = 0;
  q[1] = 1;
  
    while(i <= j) {   
      x = q[i]; 
    	for(k = 1; k <= n; k++)
      	if (a[x][k] == 1 && !was[k])
        {
        	was[k] = true;
        	d[k] = d[x] + 1;
        	q[++j] = k;
        }
      i++;
    }

    cout << d[n] << " ";

   system("pause");
   return(0);
}
