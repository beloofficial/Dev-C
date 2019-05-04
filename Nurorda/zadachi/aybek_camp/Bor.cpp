#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

const int N = 50000;

struct vertex {
	int nx[50];
	bool leaf;
};

vertex t[N+1];
int sz;

void init () 
{
	for (int i = 0; i < 50; i++) t[0].nx[i] = -1;
	sz = 1;
}

void add (string s) {
	int v = 0;//Amantay s.length - 7
	for (int i = 0; i < s.length(); i++) {
		int c = s[i] - 97;
		if (t[v].nx[c] == -1) {   	
			for (int j = 0; j < 50; j++) t[sz].nx[j] = -1;
			t[v].nx[c] = sz++;
		}
		v = t[v].nx[c];
	}
	t[v].leaf = 1;
}
bool Find (string s) {
	int v = 0;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i] - 'a';
		if (t[v].nx[c] == -1)return 0;
		v = t[v].nx[c];
	}
	return t[v].leaf;
}                           
int main ()
{
	//freopen ("aho.in", "r", stdin);
	//freopen ("aho.out", "w", stdout);

	int n, m;
	init();
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		add (s);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (Find (s))cout << "Yes";
		else	     cout << "No";
		cout << '\n';
	}

	return 0;
}
