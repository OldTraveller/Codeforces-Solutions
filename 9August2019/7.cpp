#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n;
        string str;
        cin >> str; 

        int dp[str.size()][26]; 
        memset(dp, 0, sizeof dp); 
        dp[0][str[0] - 'a']++; 
        for (int i = 1; i < n; i++) {
                for (int j = 0; j < 26; j++) {
                        dp[i][j] = dp[i - 1][j]; 
                }
                dp[i][str[i] - 'a']++; 
        }
        int L = -1; 
        int U = -1; 
        for (int i = 0; i < n - 1; i++) {
                bool mila = 0; 
                for (int j = i + 1; j < n; j++) {
                        int len = j - i + 1; 
                        bool skip = 0; 
                        for (int k = 0; k < 26; k++) {
                                if (dp[j][k] - dp[i][k] + (str[i] - 'a' == k) > len/2) {
                                        skip = 1; 
                                        break;
                                }
                        }
                        if (skip) continue;
                        else {
                                L = i; 
                                U = j; 
                                mila = 1;
                                break; 
                        }
                }
                if (mila) break; 
        }
        if (L == -1) {
                cout << "NO" << endl;
        } else {
                cout << "YES" << endl;
                for (int i = L; i <= U; i++) {
                        cout << str[i]; 
                }
                cout << endl; 
        }
}