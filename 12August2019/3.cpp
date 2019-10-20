#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int dfs(vector<int>* graph, bool* visited, int node) {
        if (visited[node]) return 0;
        else {
                visited[node] = 1; 
                int ans = 1; 
                for (int a : graph[node]) {
                        ans += dfs(graph, visited, a); 
                }
                return ans; 
        }
}

void displayGraph(vector<int>* graph, int n) {
        cout << "GRAPH : " << endl; 
        cout << "==========================" << endl;
        for (int i = 0; i < n; i++) {
                cout << "NODE : " << i << endl; 
                for (int a : graph[i]) {
                        cout << a << " ";
                }
                cout << endl; 
        }
        cout << "==========================" << endl;
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, p;
        cin >> n >> p; 
        vector<int> graph[n]; 
        for (int i = 0; i < p; i++) {
                int u, v; 
                cin >> u >> v; 
                graph[u].push_back(v); 
                graph[v].push_back(u); 
        }
        bool visited[n]; 
        memset(visited, 0, sizeof visited); 
        vector<int> diffCounts; 
        for (int i = 0; i < n; i++) {
                int counts = dfs(graph, visited, i); 
                if (counts) {
                        diffCounts.push_back(counts); 
                }
        }
        if ((int)diffCounts.size() > 1) {
                LL prod = 1L; 
                int sum = 0; 
                for (int i = 0; i < diffCounts.size(); i++) {
                        prod *= (LL)diffCounts[i]; 
                        if (diffCounts[i] != 1) {
                                sum += diffCounts[i]; 
                        }
                }
                int ones = 0;
                for (int i : diffCounts) {
                        if (i == 1) {
                                ones++; 
                        }
                }
                displayGraph(graph, n); 
                int ans = prod;
                ans += ones * prod; 
                cout << ans << endl; 
        } else {
                cout << "0" << endl; 
        }
}