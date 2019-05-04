#include <iostream>
using namespace std;
int n, sz = 1, q, t[1000], m, l, r;
void build(int pos)
{
	int p = pos/2;
	if (pos % 2 == 0) t[p]=t[pos];
	else t[p] = min(t[pos],t[pos-1]);
	if (pos/2 > 0) build(pos/2);
}
void upd(int pos)
{
	int p = pos/2;
	if(pos % 2 == 0) t[p] = min(t[pos],t[pos+1]);
	else t[p] = min(t[pos],t[pos-1]);
	if(pos/2 > 0)upd(p);
}
int sum(int l,int r)
{
	if(l>r)return 0;
	while ( l < r){
    int p=l/2;
	if(t[l+1]>t[l])t[p]=t[l];
	else t[p]=t[l+1];
	if(t[r]>t[r-1])t[r/2]=t[r-1];
	else t[r/2]=t[r];
            l/=2; r/=2;}
        return t[l];
}
int main()
{
	int m, l, r;
	cin >> n >> m;
	while (sz < n)
	{
		sz*=2;
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> q;
		t[sz+i-1] = q;
		build(sz+i-1);
	}
	for (int i = 1; i <= m;i++)
	{
		cin >> l >> r;

		cout << 		sum(sz+l-1,sz+r-1) ;
		upd(sz+r-1);
		upd(sz+l-1);
	}
	return 0;
}
