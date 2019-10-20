#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, m, a, b; 
        cin >> n >> m >> a >> b; 

        // If cost of m rides using one ride ticket is less than m ride ticket 
        if (m * a <= b) {
                // Use all the single rides. 
                cout << n * a << endl; 
        } else {
                // For m * k <= n rides use the m ride ticket, 
                // and for remaining - check if it's good to go with single 
                // ride ticket or take another pass. 
                int totM = (n / m); 
                int rem = (n % m); 
                int ans = totM * b; 
                if (rem * a < b) {
                        ans += rem * a; 
                } else {
                        ans += b; 
                }
                cout << ans << endl; 
        }
}