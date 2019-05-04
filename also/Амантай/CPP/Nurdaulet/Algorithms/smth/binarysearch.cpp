#include<iostream>
#include<cstdlib>
#include<cstdio>

int a[110], n, k;

int binary_search(int x)
{
    int l = 1, r = n + 1, mid;
    while(r - l > 1)
    {
     	mid = (l + r) / 2;
     	if(a[mid] <= x)
      	l = mid;
        	else
        r = mid;
    }
    if(a[l] == x)
     	return l;
     		else
     	return -1;
}
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
     	scanf("%d", &a[i]);
    scanf("%d", &k); 
   printf("%d", binary_search(k));
   system("pause");
   return 0;
}
