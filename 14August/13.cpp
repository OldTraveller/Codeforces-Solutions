#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, t;
        cin >> n >> t; 
        if (n == 1 and t == 10) {
                cout << -1 << endl;
        } else {
                if (t == 10) {
                        for (int i = 0; i < n - 1; i++) cout << 1; 
                        cout << 0; 
                        cout << endl; 
                } else {
                        for (int i = 0; i < n; i++) {
                                cout << t;
                        }
                }
        }
}