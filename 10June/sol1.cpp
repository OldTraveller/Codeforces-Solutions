#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q; cin >> q;
    while (q--) {
        LL n; cin >> n; 
        bool possible = true; 
        LL counts = 0; 
        while (n != 1 and possible) {
            if (n % 2 == 0) {
                n /= 2; 
                counts++; 
            } else if (n % 3 == 0) {
                n /= 3; n *= 2; 
                counts++; 
            } else if (n % 5 == 0) {
                n /= 5; n *= 4; 
                counts++; 
            } else {
                possible = false; 
            }
        }
        if (!possible) cout << "-1" << endl; 
        else cout << counts << endl; 
    }
}