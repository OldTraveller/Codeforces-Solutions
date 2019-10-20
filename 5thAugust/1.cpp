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
        vector<int> ele(n);
        for (int i = 0; i < n; i++) {
                cin >> ele[i]; 
        }
        sort(ele.begin(), ele.end()); 
        if (n == 2) {
                cout << 0 << endl; 
        } else {
                cout << min(ele[n - 1] - ele[1], ele[n - 2] - ele[0]) << endl; 
        }
}