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
        vector<int> rad(n); 
        for (int &a : rad) {
                cin >> a; 
        }
        int index = -1; 
        for (int i = 0; i < n; i++) {
                if (rad[i] == n) {
                        index = i; 
                        break; 
                }
        }
        bool one = is_sorted(rad.begin(), rad.begin() + index, [&](int a, int b) {
                return a < b; 
        });
        bool two = is_sorted(rad.begin() + index, rad.end(), [&](int a, int b) {
                return a > b; 
        }); 
        if (one and two) cout << "YES" << endl;
        else cout << "NO" << endl; 
}