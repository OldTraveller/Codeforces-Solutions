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
        vector<int> arr(n + 1); 
        for (int i = 1; i <= n; i++) {
                cin >> arr[i]; 
        }
        set<int> ele; 
        vector<int> dp(n + 1, 0); 
        for (int i = n; i >= 1; i--) {
                ele.insert(arr[i]); 
                dp[i] = (int)ele.size(); 
        }
        for (int i = 0; i < m; i++) {
                int e;
                cin >> e;
                cout << dp[e] << endl; 
        }
}