#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL n; 
        cin >> n; 
        if (n & 1) {
                cout << -n + ((n - 1) >> 1L) << endl;
        } else {
                cout << (n >> 1L) << endl; 
        }
}