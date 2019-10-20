#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const size_t SIZE = 1e5 + 77; 
vector<int> graph[SIZE]; 
LL cost[SIZE]; 
bool visited[SIZE]; 

LL dfs(int node) {
    if (visited[node]) return LLONG_MAX; 
    else {
        visited[node] = 1; 
        LL minBribe = cost[node]; 
        for (int a : graph[node]) {
            minBribe = min(minBribe, dfs(a)); 
        }
        return minBribe; 
    }
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m; 
    cin >> n >> m; 
    for (int i = 1; i <= n; i++) {
        cin >> cost[i]; 
    }
    for (int i = 1; i <= m; i++) {
        int u, v; 
        cin >> u >> v; 
        graph[u].push_back(v); 
        graph[v].push_back(u); 
    }
    LL ans = 0; 
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ans += dfs(i); 
        }
    }
    cout << ans << '\n'; 
}