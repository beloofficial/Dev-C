//Merge
void Merge(int L,int R)
{
if(L==R)return;
if(L<=R)
{Merge(L,(L+R)/2);
Merge((L+R)/2+1,R);}
pos=L;
for(int l=L;r=(L+R)/2+1;l<=(L+R)/2||r<=R;pos++)
if(l>(L+R)/2)b[pos]=a[r++];
{
else if(r>R)b[pos]=a[l++];
else if(a[i]<a[r])b[pos]=a[l++];
else b[pos]=a[r++];
}
}
for(int i=L;i<=R;i++)a[i]=t[i];
////////////////////////////////////////////////
q[++l]=1;
while(i<1)
{
int v=q[i];used[v]=1;
h=next[h];
int to=s[h];
if(used[to]!=1)q[++l]=to;          
          
}
