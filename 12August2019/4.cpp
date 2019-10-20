#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int dfs(vector<LL>* graph, bool* visited, int node) {
        if (visited[node]) return 0; 
        else {
                visited[node] = 1; 
                int ans = 1; 
                for (int i : graph[node]) {
                        ans += dfs(graph, visited, i); 
                }
                return ans; 
        }
}

LL calculateProd(vector<int> &diff) {
        LL prod = 1L; 
        for (int i : diff) {
                prod *= (LL)i; 
        }
        return prod; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, p;
        cin >> n >> p; 
        vector<LL> graph[n]; 
        for (int i = 0; i < p; i++) {
                int u, v; 
                cin >> u >> v; 
                graph[u].push_back(v); 
                graph[v].push_back(u); 
        }
        vector<LL> diff; 
        bool visited[n]; 
        memset(visited, 0, sizeof visited); 
        LL sum = 0; 
        LL aS = 0; 
        for (long i=0; i< n; ++i) {
                if (!visited[i]) {
                        LL count = dfs(graph, visited, i);
                        sum = sum + (aS * count);
                        aS += count;
                }
        }
        cout << sum << "\n";
}