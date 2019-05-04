#include <iostream>
using namespace std;
int main()
{
  	int a,b,c;
  	cin>>a;
  	
	switch(a) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout<<"31"; break;
	case 2:cout<<"28,29"; break;
	case 4: case 6: case 11: case 9:cout<<"30"; break;	
	}
	
	return 0;
}
