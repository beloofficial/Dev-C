#include <iostream>
#include <cstdio>

using namespace std;

int n,q,w;

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);   
 cin >> n;
 if (n==1) {cout <<"YES";q++;}
 else 
 {
    while (n>=1){
          if (n==2){q++;cout << "YES";break;}
          if (n%2!=0){w++;cout <<"NO"; break;} 
          n/=2;
          }  
 }   
 if (q==0&&w==0) cout <<"NO";
 //system ("pause");
 return 0;
}
