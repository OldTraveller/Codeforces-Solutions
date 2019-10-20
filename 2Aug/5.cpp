#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL n, m; 
        cin >> n >> m; 
        if (n >= 27) {
                cout << m << endl;
        } else {
                int mod = (1 << n); 
                cout << m % mod << endl;
        }
}