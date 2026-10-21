#include <bits/stdc++.h>
using namespace std;
const int maxx = 100005;
vector<int> tree[maxx];

int dfs(int node, int parent){
    int height =0;
    for(auto i: tree[node]){
        if(i != parent){
            height = max(height, (1+dfs(i,node)));
        }
    }
    return height;
}

int main() {
    int N;
    cin>>N;
    for(int i=0; i<N-1; i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    cout<<dfs(1,-1)<<endl;
  return 0;
}
