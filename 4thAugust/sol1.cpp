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

        int dp[m][5];
        memset(dp, 0, sizeof dp); 
        for (int i = 0; i < n; i++) {
                string str;
                cin >> str;
                for (int j = 0; j < m; j++) {
                        dp[j][str[j] - 'A']++; 
                }
        }
        vector<int> value; 
        for (int i = 0; i < m; i++) {
                int maxi = INT_MIN; 
                for (int j = 0; j < 5; j++) {
                        maxi = max(maxi, dp[i][j]); 
                }
                value.push_back(maxi); 
        }
        int total = 0; 
        for (int i = 0; i < m; i++) {
                int e;
                cin >> e;
                total += value[i] * e; 
        }
        cout << total << endl; 
}