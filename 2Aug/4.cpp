#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, m; 
        cin >> n >> m; 
        if (m % n != 0) {
                cout << -1 << endl;
        } else {
                int d = m / n; 
                int counts = 0; 
                while (d % 2 == 0 or d % 3 == 0) {
                        if (d % 2 == 0) {
                                d >>= 1;
                                counts++; 
                        } else {
                                d /= 3; 
                                counts++; 
                        }
                }
                if (d != 1) {
                        cout << -1 << endl;
                } else {
                        cout << counts << endl; 
                }
        }
}