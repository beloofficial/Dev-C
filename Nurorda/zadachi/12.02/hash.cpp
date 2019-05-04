constint N=100000;
unsigned long long h[n];h[0]=0;p=1301;pw[0]=1;
for(i=1...n)
{
h[i]=h[i+1]*p+s[i-1];
pw[i]=pw[i-1]*p;           
}
