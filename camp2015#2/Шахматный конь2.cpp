#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char a;
int b,c;
cin>>a>>b;
	{
if(a=='a')c=1;
if(a=='b')c=2;
if(a=='c')c=3;
if(a=='d')c=4;
if(a=='e')c=5;
if(a=='f')c=6;
if(a=='g')c=7;
if(a=='h')c=8;
}	
if(c-2>0&&b-1>0)
{
if(c-2==6)cout<<"f"<<b-1<<endl;
else if(c-2==5)cout<<"e"<<b-1<<endl;
else if(c-2==4)cout<<"d"<<b-1<<endl;
else if(c-2==3)cout<<"c"<<b-1<<endl;
else if(c-2==2)cout<<"b"<<b-1<<endl;
else if(c-2==1)cout<<"a"<<b-1<<endl;
}
if(c-2>0&&b+1<9)
{
	 if(c-2==6)cout<<"f"<<b+1<<endl;
else if(c-2==5)cout<<"e"<<b+1<<endl;
else if(c-2==4)cout<<"d"<<b+1<<endl;
else if(c-2==3)cout<<"c"<<b+1<<endl;
else if(c-2==2)cout<<"b"<<b+1<<endl;
else if(c-2==1)cout<<"a"<<b+1<<endl;
}
if(c-1>0&&b+2<9)
{
	if(c-1==7)cout<<"g"<<b+2<<endl;
else if(c-1==6)cout<<"f"<<b+2<<endl;
else if(c-1==5)cout<<"e"<<b+2<<endl;
else if(c-1==4)cout<<"d"<<b+2<<endl;
else if(c-1==3)cout<<"c"<<b+2<<endl;
else if(c-1==2)cout<<"b"<<b+2<<endl;
else if(c-1==1)cout<<"a"<<b+2<<endl;	
}
if(c+1<9&&b+2<9)
{
if(c+1==2)cout<<"b"<<b+2<<endl;
else if(c+1==3)cout<<"c"<<b+2<<endl;
else if(c+1==4)cout<<"d"<<b+2<<endl;
else if(c+1==5)cout<<"e"<<b+2<<endl;
else if(c+1==6)cout<<"f"<<b+2<<endl;
else if(c+1==7)cout<<"g"<<b+2<<endl;
else if(c+1==8)cout<<"h"<<b+2<<endl;
}
if(c+2<9&&b+1<9)
{
if(c+2==3)cout<<"c"<<b+1<<endl;
else if(c+2==4)cout<<"d"<<b+1<<endl;
else if(c+2==5)cout<<"e"<<b+1<<endl;
else if(c+2==6)cout<<"f"<<b+1<<endl;
else if(c+2==7)cout<<"g"<<b+1<<endl;
else if(c+2==8)cout<<"h"<<b+1<<endl;
}
if(c+2<9&&b-1>0)
{
	if(c+2==3)cout<<"c"<<b-1<<endl;
else if(c+2==4)cout<<"d"<<b-1<<endl;
else if(c+2==5)cout<<"e"<<b-1<<endl;
else if(c+2==6)cout<<"f"<<b-1<<endl;
else if(c+2==7)cout<<"g"<<b-1<<endl;
else if(c+2==8)cout<<"h"<<b-1<<endl;
}
if(c+1<9&&b-2>0)
{
	if(c+1==2)cout<<"b"<<b-2<<endl;
else if(c+1==3)cout<<"c"<<b-2<<endl;
else if(c+1==4)cout<<"d"<<b-2<<endl;
else if(c+1==5)cout<<"e"<<b-2<<endl;
else if(c+1==6)cout<<"f"<<b-2<<endl;
else if(c+1==7)cout<<"g"<<b-2<<endl;
else if(c+1==8)cout<<"h"<<b-2<<endl;
}
if(c-1>0&&b-2>0)
{	
if(c-1==7)cout<<"g"<<b-2<<endl;
else if(c-1==6)cout<<"f"<<b-2<<endl;
else if(c-1==5)cout<<"e"<<b-2<<endl;
else if(c-1==4)cout<<"d"<<b-2<<endl;
else if(c-1==3)cout<<"c"<<b-2<<endl;
else if(c-1==2)cout<<"b"<<b-2<<endl;
else if(c-1==1)cout<<"a"<<b-2<<endl;	
}
return 0;

	
	
}
