#include<iostream>
#include<vector>
using namespace std;
int comp,to,i,k=0,j[111],s;
vector<int > g[111],gr[111];
vector<char>used;
vector<int>component,order;
void dfs1 (int v) {
	used[v] = true;
	for ( i=0; i<g[v].size(); ++i)
		if (!used[ g[v][i] ])
			dfs1 (g[v][i]);
	order.push_back (v);
}
 void dfs2 (int v) 
{
	used[v] = true;
	component.push_back (v);
	for ( i=0; i<gr[v].size(); ++i)
		{if (!used[ gr[v][i] ])
			{dfs2 (gr[v][i]);}
      }  
	
} 
int main()
{
//------------------------------------------------------------------------- 
int n,m;
cin>>n>>m;
for( i=0;i<m;i++)
{
int a,b;
cin>>a>>b;
g[a].push_back (b);
gr[b].push_back (a);
}
//-------------------------------------------------------------
used.assign (n, false);
for ( i=0; i<n; ++i)
if (!used[i])
dfs1 (i);
//----------------------------------------------------------
used.assign (n, false);
  for (int i=0; i<n; ++i) 
  {int v = order[n-1-i];
		    if (!used[v]) 
            {dfs2 (v);s++;
                                                            for (vector<int>::iterator it = component.begin() ; it!=component.end() ; ++it)
                                                            {cout << *it<<" ";}
                          cout << endl;
                          component.clear();
            }
  
}
//-----------------------------------------------------------------
cout <<s<<endl;
/*for (int i=0; i<n; ++i)
{cout<<j[i]<<" "; }
*/system("pause");
return 0;    
}
