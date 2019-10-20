#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n; 
        int ones = 0; 
        int twos = 0; 
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            LL ele; cin >> ele; 
            if (ele % 3 == 0) ans++; 
            else ele % 3 == 1 ? ones++ : twos++; 
        }
        int twoone = min(ones, twos); 
        ans += twoone; 
        ones -= twoone; 
        twos -= twoone; 
        ans += ones/3;
        ans += twos/3; 
        cout << ans << endl; 
    }
}