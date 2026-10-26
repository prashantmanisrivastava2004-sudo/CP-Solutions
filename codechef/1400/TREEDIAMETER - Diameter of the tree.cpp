#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
vector<int> adj[N];
int dist[N];
 
void dfs(int node, int par, int d) {
   dist[node] = d;
   for(int v : adj[node]) {
     if(v != par) {
        dfs(v, node, d + 1);
     }
   }
}
 
int main() { 
 
  int n, x, y;
  cin >> n;
  
  for(int i = 1; i < n; i++) {
     cin >> x >> y;
     adj[x].push_back(y);
     adj[y].push_back(x);
  }
 
 
  dfs(1, 0, 0);
  int start_node, maxdist = -1;
 
  for(int i = 1; i <= n; i++) {
     if(dist[i] > maxdist) {
         maxdist = dist[i];
         start_node = i;
     }
  }
 
  dfs(start_node, 0, 0);
  maxdist = 0;
  
  for(int i = 1; i <= n; i++) {
    maxdist = max(maxdist, dist[i]);
  }
  cout << maxdist;

  return 0;
} 
