#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, a; 
        cin >> n >> a; 
        bool occupied[n + 1]; 
        for (int i = 1; i <= n; i++) {
                cin >> occupied[i]; 
        } 
        int ans = 0; 
        for (int i = 0; (a - i) >= 1 and (a + i) <= n; i++) {
                bool occLeft = occupied[a - i]; 
                bool occRight = occupied[a + i]; 
                if ((occLeft and !occRight) or (!occLeft and occRight)) {
                        occupied[a - i] = 0; 
                        occupied[a + i] = 0; 
                }
        }
        for (int i = 1; i <= n; i++) {
                if (occupied[i]) {
                        ans++;
                }
        }
        cout << ans << endl; 
}