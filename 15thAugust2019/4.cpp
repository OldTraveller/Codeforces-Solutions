#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n; 
        vector<int> cost(n); 
        for (int i = 0; i < n; i++) {
                cin >> cost[i]; 
        }
        sort(cost.begin(), cost.end()); 
        int q; 
        cin >> q; 
        while (q--) {
                LL e; 
                cin >> e;
                auto ptr = upper_bound(cost.begin(), cost.end(), e); 
                cout << (ptr - cost.begin()) << endl;
        }
}