#include <bits/stdc++.h>
using namespace std;

const int maxx = 100005;
vector <int> tree[maxx];

int cnt = 0;

void dfs(int node, int parent) {
    bool isLeaf = true;

    for (auto i : tree[node]) {
        if (i != parent) {
            isLeaf = false;
            dfs(i, node);
        }
    }

    if (isLeaf) {
        cnt++;
    }
}

int main() {
    int N;
    cin>>N;
    int a,b;
    for(int i=0; i<N-1; i++){
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    dfs(0,-1);
    cout<<cnt<<endl;
}
