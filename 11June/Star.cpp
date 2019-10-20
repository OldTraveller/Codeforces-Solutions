#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m; 
    bool nodes[n + 1];  
    memset(nodes, 0, sizeof nodes); 
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        nodes[u] = nodes[v] = 1;  
    }
    int center = -1; 
    for (int i = 1; i <= n; i++) {
        if (!nodes[i]) {
            center = i; 
            break; 
        }
    }
    cout << n - 1 << endl; 
    for (int i = 1; i <= n; i++) {
        if (i == center) continue; 
        cout << center << " " << i << endl; 
    }
}