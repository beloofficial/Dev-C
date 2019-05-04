#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char q,c[8];
	long long int z,k=0;
	cin>>q>>z;
	c[1]='a';
	c[2]='b';
	c[3]='c';
	c[4]='d';
	c[5]='e';
	c[6]='f';
	c[7]='g';
	c[8]='h';
	if(q=='a')q=1;
	else if(q=='b')q=2;
	else if(q=='c')q=3;
	else if(q=='d')q=4;
	else if(q=='e')q=5;
	else if(q=='f')q=6;
	else if(q=='g')q=7;
	else if(q=='h')q=8;
	if(q-2>0&&z-1>0&&k==0){cout<<c[q-2]<<z-1;k++;}
	if(q-2>0&&z+1<9&&k>=1)cout<<endl<<c[q-2]<<z+1;
	else if(q-2>0&&z+1<9&&k==0){cout<<c[q-2]<<z+1;k++;}
	if(q-1>0&&z-2>0&&k>=1)cout<<endl<<c[q-1]<<z-2;
	else if(q-1>0&&z-2>0&&k==0){cout<<c[q-1]<<z-2;k++;}
	if(q-1>0&&z+2<9&&k>=1)cout<<endl<<c[q-1]<<z+2;
	else if(q-1>0&&z+2<9&&k==0){cout<<c[q-1]<<z+2;k++;}
	if(q+1<9&&z-2>0&&k>=1)cout<<endl<<c[q+1]<<z-2;
	else if(q+1<9&&z-2>0&&k==0){cout<<c[q+1]<<z-2;k++;}
	if(q+1<9&&z+2<9&&k>=1)cout<<endl<<c[q+1]<<z+2;
	else if(q+1<9&&z+2<9&&k==0){cout<<c[q+1]<<z+2;k++;}
	if(q+2<9&&z-1>0&&k>=1)cout<<endl<<c[q+2]<<z-1;
	else if(q+2<9&&z-1>0&&k==0){cout<<c[q+2]<<z-1;k++;}
	if(q+2<9&&z+1<9&&k>=1)cout<<endl<<c[q+2]<<z+1;
	else if(q+2<9&&z+1<9&&k==0){cout<<c[q+2]<<z+1;k++;}
return 0;

}
