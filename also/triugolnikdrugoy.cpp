#include<iostream>
using namespace std;
int main()
{int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
if(x4>=x1&&y4>=y1&&x4<=x2&&y4<=y2&&x4<=x3&&y4<=y3||x4>=x3&&y4>=y3&&x4<=x2&&y4<=y2&&x4<=x1&&y4<=y1||x4>=x2&&y4>=y2&&x1<=x1&&y4<=y1&&x4<=x3&&y4<=y3)cout<<"IN";
else cout<<"out";
system("pause");
return 0;    
}
