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
    vector<int> prices(n); 
    for(int &a : prices) cin >> a;
    int q; cin >> q;
    sort(prices.begin(), prices.end()); 
    for (int i = 0; i < q; i++) {
        LL coins; cin >> coins; 
        int total = upper_bound(prices.begin(), prices.end(), coins) - prices.begin(); 
        cout << total << endl; 
    }
}