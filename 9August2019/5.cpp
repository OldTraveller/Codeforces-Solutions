#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int dfs(vector<int> graph, int node) {
        bool visited[(int)graph.size()]; 
        memset(visited, 0, sizeof visited); 
        bool found = 0; 
        int ans = node; 
        while (!found) {
                if (visited[ans]) {
                        found = 1; 
                } else {
                        visited[ans] = 1; 
                        ans = graph[ans];
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
        for (int i = 1; i <= n; i++) {
                int culprit = dfs(graph, i); 
                cout << culprit << " "; 
        }
        cout << "\n"; 
}