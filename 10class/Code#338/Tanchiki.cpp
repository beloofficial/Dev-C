#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<cmath>
using namespace std;
char a[111][111];
int N=20,i,j,z,x;	
int tx=19,ty=10;
void map()
{
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(i==1||j==1||i==N||j==N) a[i][j]=1;
		}
	}
}
void show_table()
{
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(a[i+1][j]=='|') {a[i][j]=a[i+1][j];a[i+1][j]=0;}
		
		cout<<a[i][j];
		}cout<<endl;
	}z=0;
}

char symbol,pr;
void ch_dir()
{	
	symbol=getch();
	switch(symbol)
	{
		case 'w': {a[tx-1][ty]='|'; } break;
        case 'a': if(a[tx][ty-1]!=1){swap(a[tx][ty],a[tx][ty-1]);ty=ty-1; } break;
        case 'd': if(a[tx][ty+1]!=1){swap(a[tx][ty],a[tx][ty+1]); ty=ty+1;} break;
        
		 //case 32 : change_color(); break;
	}	
}
int hx=2,hy,c,v,b;
void prob()
{
	while(z==0)
	{
		while(c==0)
		{
			while(v==0)
			{
				while(b==0)
				{
					hy=abs(rand())%21;
					a[hx][hy]=4;z=10000000;c=10000000;v=10000000;b=10000000;
				}
				b--;
			}
			v--;
		}
		c--;
	}
	z--;
}
void probl()
{
	while(x==0)
	{
		for(i=N;i>=1;i--)
		{
			for(j=N;j>=1;j--)
			{
				if(a[i-1][j]==4){a[i][j]=4;a[i-1][j]=0;}
			}
		}
		x=10;
	}
	x--;
}
int main()
{
	
	a[tx][ty]=6;
	while(1)
	{
		system("cls");	
	map();
	show_table();
	if (kbhit() == true)
	ch_dir();
	prob();
	probl();
	Sleep(50);
	}
}
