sz,q[N],t[N],r[N],s[N];
for(i=1..n)
cin>>a[],s[i]=s[i-1]+a[i];
sz=0;
for(i=1;i<=n;i++)
{
while(sz>0&&a[q][sz]>a[i])
sz--;
l[i]=q[sz];
q[++sz]=i;
}
sz=0;q[0]=n+1;
{
              for(i=1..n)
              ans=max(ans,s[r[i]-1]-s[l[0]]*a[i]);
              cout<<ans;
              }