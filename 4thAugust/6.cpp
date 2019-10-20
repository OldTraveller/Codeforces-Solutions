#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
vector<LL> power2; 

void precal() {
        for (int i = 0; (1L << i) <= 1e9; i++) {
                power2.push_back(1L << i); 
        }
}

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        precal();
        int t; 
        cin >> t;
        while (t--) {
                LL n; 
                cin >> n; 
                LL sum = ((n * (n + 1)) >> 1);
                for (int i = 0; i < power2.size(); i++) {
                        if (power2[i] > n) {
                                break;
                        } else {
                                sum -= (2 * power2[i]);
                        }
                }
                cout << sum << endl; 
        }
}