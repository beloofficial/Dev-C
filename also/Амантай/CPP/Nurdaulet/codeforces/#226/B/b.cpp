#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;
 
int i, j, smth, k, cnt;
string s;
bool w[5111];
 
int main () {
	cin >> s;
     for (i = 0; i < s.size(); i++) {
	     if (s[i] == 'b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3] == 'r') {
     	     smth = 1;
          	k = (s.size() - (i + 3));
               w[i] = true;
               for (j = i - 1; j >= 0; j--)
               	if (w[j])
                    	break;
                    else
                   	     smth++;
                    cnt += (smth*k);
          }
	}
     cout << cnt;
}