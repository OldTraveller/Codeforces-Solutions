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
        int ans = 0; 
        int tramp = 0; 
        for (int i = 0; i < n; i++) {
                int a, b; 
                cin >> a >> b; 
                tramp = (tramp - a + b); 
                ans = max(ans, tramp); 
        }
        cout << ans << endl;
}