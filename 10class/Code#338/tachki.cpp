#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<cmath>
using namespace std;
char a[100][100],b[100][100];
long long int i,j,n,m,k,q,w,e,r,px,py,calc=0;
char main_color[] = "color ##";
const int N=20,M=30;
long long int hx=3,hy=5,hx1,hy1;
long long int lap;
long long int lev=50;
void change_color()
// функция изменения цвета консоли
{
     char x = rand() % 16, y = rand() % 16;
     if (x == y)
      ++y;
     y %= 16;
     if (x > 9)
      x += 'A' - 10;
     else
      x += '0';
     if (y > 9)
      y += 'A' - 10;
     else
      y += '0';
     // выбираем рандомные цвета
     main_color[6] = x;
     main_color[7] = y;
     system(main_color);
     //меняем цвет
}
void show_table()
{
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			cout<<a[i][j];
		}cout<<endl;
	}
}
void table()
{
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			if(i==1||j==1||i==N||j==M) a[i][j]=1;
		}
	}
		
	for(i=5;i<=N-3;i++)
	{
		for(j=5;j<=M-4;j++)
		{
			if(i==5||j==5||i==N-3||j==M-4) a[i][j]=1;
		}
	}	
}


/////////////////////////////////////////////////////////////////////////////


char symbol,pr;
void ch_dir()
{	
	symbol=getch();
	switch(symbol)
	{
		case 'w': if(pr!='s') {a[hx][hy]='^'; pr='w'; } break;
        case 'a': if(pr!='d') {a[hx][hy]='<'; pr='a'; } break;
        case 's': if(pr!='w') {a[hx][hy]='v'; pr='s'; } break;
        case 'd': if(pr!='a') {a[hx][hy]='>'; pr='d'; } break;
        
		 case 32 : change_color(); break;
	}	
}int z;
void game_over()
{
	if(hx==1||hy==1||hx==N||hy==M)
	{
		cout<<"GAME_OVER";
		z=1;
	}
	else if(hy==5&&hx>6&&hx<N-2)
	{
		cout<<"GAME_OVER";
		z=1;
	}
	else if(hy==26&&hx>6&&hx<N-2)
	{
		cout<<"GAME_OVER";
		z=1;
	}
	else if(hx==5&&hy>4&&hy<27)
	{
		cout<<"GAME_OVER";
		z=1;
	}
	else if(hx==17&&hy>4&&hy<27)
	{
		cout<<"GAME_OVER";
		z=1;
	}
	if(a[hx][hy]==6||a[hx][hy-1]==6)
	{
		cout<<"Game_OVER";
		z=1;
	}
}
void score()
{
	if((hx==3&&hy==28||hx==2&&hy==29||hx==4&&hy==27)&&q==0) q++;
	////////////////
	if((hx==18&&hy==28||hx==19&&hy==29||hx==17&&hy==27)&&q==1) q++;
	////////////////
	if((hx==18&&hy==3||hx==19&&hy==2||hx==17&&hy==4)&&q==2) q++;
	////////////////
	if((hx==2&&hy==2||hx==3&&hy==3||hx==4&&hy==4)&&q==3) q++;
	if(q==4) {lap++; q=0;lev-=10;}
}
/*void prob()
{
		if(calc==0)
		{a[px][py]=0;	
			px=abs(rand());py=abs(rand());
			px=px%25;py=px%35+(abs(rand()))%35;
			calc=20000000;
		}
	while(calc!=0)
	{
		a[px][py]=6;calc--;
	}

}*/
int main()
{
	
	a[3][5]='S';
	while(1){
	system("cls");
	
	
	show_table();
	table();
	if (kbhit() == true)
	ch_dir();
	score();
	//prob();
	if(pr=='w') { swap(a[hx][hy],a[hx--][hy]); }
	if(pr=='s') { swap(a[hx][hy],a[hx++][hy]); }
	if(pr=='a') { swap(a[hx][hy],a[hx][hy--]); }
	if(pr=='d') { swap(a[hx][hy],a[hx][hy++]); }
	cout<<endl<<"YOUR SCORE IS: "<<lap<<endl;
	game_over();
	 Sleep(lev);
	 if(lev==0)
	 {
	 cout<<"You Winner!!!";return 0;	
	 }
	 if(z==1)return 0;
	 
}
	return 0;
}



