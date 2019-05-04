#include <iostream>
using namespace std;
int n,m,c;
int main(){
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	cin >> n >> m;
	while (n >= m){
		c+=m;
		n-=m;
		if (n == 1) { break;}
		n/=2;
	} 
	c+=n;
	cout << c;
	return 0;
}
