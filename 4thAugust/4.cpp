#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL n, k; 
        cin >> n >> k; 
        vector<pair<LL, LL>> rest(n);
        for (int i = 0; i < n; i++) {
                cin >> rest[i].first >> rest[i].second; 
        }
        LL maxi = LLONG_MIN; 
        for (const pair<LL, LL> p : rest) {
                if (p.second > k) {
                        maxi = max(maxi, p.first - p.second + k); 
                } else {
                        maxi = max(maxi, p.first); 
                }
        }
        cout << maxi << endl; 
}
