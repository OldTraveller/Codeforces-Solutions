#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, x, y; 
        cin >> n >> x >> y; 
        vector<LL> arr(n); 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        int ans = -1; 
        for (int i = 0; i < n; i++) {
                bool one = 1; 
                bool two = 1; 
                for (int j = i - 1; j - x >= 0; j--) {
                        if (arr[j] <= arr[i]) {
                                one = 0; 
                        }
                }
                for (int j = i + 1; j < n; j++) {
                        if (arr[j] <= arr[i]) {
                                two = 0; 
                        }
                }
                if (one and two) {
                        ans = i + 1; 
                        break; 
                }
        }
        cout << ans << endl; 
}