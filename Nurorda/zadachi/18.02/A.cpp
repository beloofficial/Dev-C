/*
100
A 10
A 5
A 3
A 1
A 9
Q 4
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct item
{
    int x,y,sz;
    item *l, *r;
};

typedef item * pitem;
pitem tree,it,tmp;

int SizeOf(pitem t)
{
    return t?t->sz:0;
}

void upd(pitem t)
{
    if(t)
        t->sz=SizeOf(t->l)+SizeOf(t->r)+1;
}

void merge(pitem &t,pitem l,pitem r)
{
    if(!l||!r)
    {
        t=l?l:r;
        return;
    }
    if(l->y<=r->y)
        merge(l->r,l->r,r),t=l;
    else
        merge(r->l,l,r->l),t=r;
    upd(t);
}

void split(pitem t,int x,pitem &l,pitem &r)
{
    if(!t)
    {
        l=r=0;
        return;
    }
    if(t->x<=x)
        split(t->r,x,t->r,r),l=t;
    else
        split(t->l,x,l,t->l),r=t;
    upd(l);
    upd(r);
}

void print(pitem t)
{
    if(t)
    {
        print(t->l);
        cout<<t->sz<<" ";
        print(t->r);
    }
}

int get(pitem t,int k)
{
    if(SizeOf(t)==k)
        return t->x;
    if(SizeOf(t)>k)
        return get(t->l,k);
    if(SizeOf(t)<k)
        return get(t->r,k-SizeOf(t->l)-1);
}

int main()
{
    srand(time(0));
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        char ch;
        cin>>ch>>x;
        if(ch=='Q')
            cout<<get(tree,x)<<"\n";
        else
        {
            it=new item();
            it->x=x;
            it->y=rand();
            it->sz=1;
            split(tree,x,tree,tmp);
            merge(tree,tree,it);
            merge(tree,tree,tmp);
        }
    }
    return 0;
}
