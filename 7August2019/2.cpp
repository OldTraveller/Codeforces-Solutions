#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n; 
                string str;
                cin >> str;
                bool possi = 1; 
                for (int i = 0; i < (n >> 1); i++) {
                        int diff = abs(str[i] - str[n - 1 - i]); 
                        if (diff > 2 or diff % 2 == 1) {
                                possi = 0; 
                                break;
                        }
                }
                if (possi) cout << "YES" << endl;
                else cout << "NO" << endl; 
        }
}