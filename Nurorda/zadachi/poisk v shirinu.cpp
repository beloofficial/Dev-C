#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()

{
vector < vector<int> > g; // граф
int n,to; 
int s;
vector<int> q;
q.push (s);
vector<bool> used (n);
vector<int> d (n), p (n);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
int v = q.front();
q.pop();
for (size_t i=0; i<g[v].size(); ++i) {
int to = g[v][i];
if (!used[to]) {
used[to] = true;
q.push (to);
d[to] = d[v] + 1;
p[to] = v;
}
}
}
if (!used[to])
cout << "No path!";
else {
vector<int> path;
for (int v=to; v!=-1; v=p[v])
path.push_back (v);
reverse (path.begin(), path.end());
cout << "Path: ";
for (size_t i=0; i<path.size(); ++i)
cout << path[i] + 1 << " ";
}
    
    
    system("pause");
    return 0;
}
