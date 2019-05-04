#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
 int i,a,b,k=0,l=0;

  cin >> a >> b;
  k=a*b;
  while(b) b^=a^=b^=a%=b;
  
cout<<k/a;
    
//system("pause");
return 0;    
}
