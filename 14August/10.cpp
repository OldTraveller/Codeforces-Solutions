#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

bool dfs(vector<int> &tunnel, int dest) {
        int curr = 1; 
        while (curr <= dest) {
                if (curr == dest) return 1; 
                curr += tunnel[curr]; 
        }
        return 0; 
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, t; 
        cin >> n >> t; 
        vector<int> tunnel(n + 1); 
        for (int i = 1; i <= n - 1; i++) {
                cin >> tunnel[i]; 
        }
        bool canVisit = dfs(tunnel, t); 
        if (canVisit) {
                cout << "YES" << endl; 
        } else {
                cout << "NO" << endl; 
        }
}