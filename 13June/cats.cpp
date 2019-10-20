#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const size_t SIZE = 1e5 + 77; 
vector<int> graph[SIZE];
bool visited[SIZE]; 
int totalPaths; 
vector<int> leaves; 
vector<int> nodes(SIZE); 
int n, m; 

void dfs(int node, int cats) {
    if (visited[node]) return; 
    else {
        
    }
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m; 
    for (int i = 1; i <= n; i++) {
        cin >> nodes[i]; 
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v; 
        cin >> u >> v;
        graph[u].push_back(v); 
        graph[v].push_back(u); 
    }
    for (int i = 1; i <= n; i++) {
        if (graph[i].size() == 1) leaves.push_back(i); 
    }
    dfs(1, nodes[1]); 
    cout << totalPaths << endl; 
}