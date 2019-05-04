#include <iostream>
#include <cstdio>

using namespace std;

int k, c, n;
char a[100][100];
bool u[100][100], ok = 1, ok2;

void nullin(int n){
	for(int i = 0; i < n; ++ i){
		for(int j = 0; j < n; ++ j){
			u[i][j] = 0;
		}
	}
}
void check(int n){
	for(int i = 0; i < n; ++ i){
		for(int j = 0; j < n; ++ j){
			cout << u[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
}
int coun(int n){
	int c = 0;
	for(int i = 0; i < n; ++ i){
		for(int j = 0; j < n; ++ j){
			if(u[i][j]) ++ c;
		}
	}
	return c;
}
int main(){
	//freopen("7.in","r",stdin);
	//freopen("7.out","w",stdout);
	cin >> k;
	for(int v = 0; v < k; ++ v){
		cin >> n;
		for(int i = 0; i < n; ++ i){
			for(int j = 0; j < n; ++ j){
				cin >> a[i][j];
				if(a[i][j] == '.'){
					u[i][j] = 1;
				}
			}
		}
		//check(n);
		ok = 1;
		if(ok){
			for(int i = 0; i < n; ++ i){
				for(int j = 0; j < n; ++ j){
					ok2 = 0;
					if(a[i][j] == '.') ok2 = 1;
					if(u[j][n - i - 1] && ok2){
						cout << "INCORRECT\n";
						//check(n);
						nullin(n);
						ok = 0;
						break;
					} else if(ok2){
						u[j][n - i - 1] = 1;
						ok2 = 0;
					}
				}
				if(!ok) break;
			}
		}
		if(!ok) continue;                  
		else{
			for(int i = 0; i < n; ++ i){
				for(int j = 0; j < n; ++ j){
					ok2 = 0;
					if(a[i][j] == '.') ok2 = 1;
					if(u[n - i - 1][n - j - 1] && ok2){
						cout << "INCORRECT\n";
						//check(n);
						nullin(n);
						ok = 0;
						break;
					} else if(ok2){
						u[n - i - 1][n - j - 1] = 1;
						ok2 = 0;
					}
				}
				if(!ok) break;
			}
		}
		if(!ok) continue;
		else{
			for(int i = 0; i < n; ++ i){
				for(int j = 0; j < n; ++ j){
					ok2 = 0;
					if(a[i][j] == '.') ok2 = 1;
					if(u[n - j - 1][i] && ok2){
						cout << "INCORRECT\n";
						//check(n);
						nullin(n);
						ok = 0;
						c = 0;
						break;
					} else if(ok2){
						u[n - j - 1][i] = 1;
						ok2 = 0;
					}
				}
				if(!ok) break;
			}
		}
		if(!ok){
		 	continue;
		 } else {
			//check(n);
			c = coun(n);
			//cout << c << " ";
			if(c == n * n){
				cout << "GOOD\n";
			} else {
				cout << "BAD\n";
			}
		}
		nullin(n);
		c = 0;
	}
	return 0;
}
