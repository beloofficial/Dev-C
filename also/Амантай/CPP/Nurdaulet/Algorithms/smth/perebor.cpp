#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

string s,a;
bool was[10000];
int n;

void go(int len)
{
	if (s.size() == len)
	{
  		for(int j = 0; j < len; j++)
		    	cout << a[j];
	     cout << endl;
	     return;
	}
	for(int i = 0; i < s.size(); i++)
	{
		if (!was[i]) {
    			a[len] = s[i];
	  		was[i] = true;
     		go(len+1);
		     was[i] = false;
	  	}
	}	
}
int main()
{

	freopen ("a.in", "r", stdin);
    	freopen ("a.out", "w", stdout);
	cin >> s;
	go(0);
	sort(s.begin(), s.end());
}
