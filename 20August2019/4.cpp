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
        vector<int> arr(n + 1); 
        int ones = 0; 
        for (int i = 1; i <= n; i++) {
                cin >> arr[i]; 
        }

        int ans = INT_MIN; 
        for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j++) {
                        vector<int> _arr(arr); 
                        for (int k = i; k <= j; k++) {
                                if (_arr[k]) _arr[k] = 0; 
                                else _arr[k] = 1; 
                        }
                        int c = 0; 
                        for (int m = 1; m <= n; m++) {
                                if (_arr[m]) c++; 
                        }
                        ans = max(ans, c); 
                }
        }
        cout << ans << endl;
}