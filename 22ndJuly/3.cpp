#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, k;
        cin >> n >> k; 
        vector<LL> elements(n); 
        for (int i = 0; i < n; i++) {
                cin >> elements[i]; 
        }
        if (n == k) cout << 0 << endl; 
        else if (k == 1) cout << elements[n - 1] - elements[0] << endl; 
        else {
                int diff = n - k; 
                LL ans = LONG_LONG_MAX; 
                for (int i = 0; i < n - diff - 1; i++) {
                        ans = min(ans, elements[i + diff] - elements[i]); 
                }
                cout << ans << endl; 
        }
}