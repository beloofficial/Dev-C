#include <iostream>
#include <cstdio>

using namespace std;
bool used[601011];
long long len=1,pr[601022],i,j;
long long n,m,q;

int main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 for (long long i = 2;i <= 300000; i++)
 {
  if (used[i]==false)
  {
   len++;
   pr[len] = i;
   for (long long j = i*i;j <= 300000;j+=i)
   {
    used[j]=true;   
   }                  
  }   
 }

 cin >> n >> m;
 for (int i = n;i<=m;i++)
     {if (used[i] == false) {cout << i << "\n";q++;}}
     if (q==0) cout<<"Absent";
// return 0;   
}
