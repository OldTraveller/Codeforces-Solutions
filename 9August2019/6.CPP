#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
 
int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
 
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> p(n); 
                for (int i = 0; i < n; i++) {
                        cin >> p[i]; 
                }
                sort(p.begin(), p.end());
                int ms = min(p[n - 1], p[n - 2]); 
                if (ms == 1) {
                        cout << 0 << endl; 
                } else {
                        cout << min(n - 2, ms - 1) << endl;
                }
        }
}