#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL k, dollars, want; 
        cin >> k >> dollars >> want; 
        LL sum = k; 
        for (int i = 2; i <= want; i++) {
                sum += k * i; 
        }
        if (sum <= dollars) cout << 0 << endl; 
        else {
                cout << sum - dollars << endl; 
        }
}