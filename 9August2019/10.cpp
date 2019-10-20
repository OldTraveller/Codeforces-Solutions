#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int dfs(vector<int> &graph) {
        bool visited[(int)graph.size()]; 
        memset(visited, 0, sizeof visited); 
        int n = graph.size(); 
        int ans = 0; 
        for (int i = 1; i < n; i++) {
                if (!visited[i]) {
                        ans++;
                        int node = i;
                        visited[node] = 1; 
                        while (graph[node] != node) {
                                visited[node] = 1;
                                node = graph[node];
                        } 
                } else {
                        continue; 
                }
        }
        return ans; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n; 
        vector<int> graph(n + 1); 
        for (int i = 1; i <= n; i++) {
                cin >> graph[i]; 
        }
        int ans = dfs(graph); 
        cout << ans << endl; 
}