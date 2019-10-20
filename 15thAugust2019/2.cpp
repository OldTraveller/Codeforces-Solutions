#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, x; 
        cin >> n >> x; 
        int ans = 0; 
        for (int i = 1; i <= n; i++) {
                if (x % i == 0 and x / i <= n) {
                        ans++; 
                }
        }
        cout << ans << endl; 
}