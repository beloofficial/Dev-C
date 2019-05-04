#include <iostream>
#include <cstdio>

using namespace std;
long long used[601011];
long long n,m,q,i;

int main()
{
cin >> m ;

 used[1]=1;
 for (  i =2;i <= m; i++)
 {
  if (used[i]==0)
  {
   for (long long j = i*i;j <= m;j+=i)
   {
    used[j]=1;   
   }                  
  }   
 }

     if (used[m] == 0) cout << "True";
     else cout<<"False";
     system("pause");
 return 0;   
}
