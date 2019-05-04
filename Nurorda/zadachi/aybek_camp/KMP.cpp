#pragma linker (comment, '/STACK: 64000000')
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;
char s[50500];
int main ()
{   freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
   int p[50500];
   int n;
   gets (s);n = strlen(s);
   p[0] = 0;
   for (int i = 1; i < n; i++) {
      int j = p[i-1];
      while (j > 0 && s[i] != s[j]) j = p[j-1];
      if (s[i] == s[j]) j++;
      p[i] = j;
   }
      cout<<n-p[n-1];
   //system("pause");
   return 0;
}
