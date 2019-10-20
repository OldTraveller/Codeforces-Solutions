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
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        int ans = INT_MAX; 
        for (int i = 1; i < n - 1; i++) {
                int diff = INT_MIN; 
                for (int j = 0; j < n - 1; j++) {
                        if (j == i) {
                                diff = max(diff, arr[j + 1] - arr[j - 1]); 
                        } else {
                                diff = max(diff, arr[j + 1] - arr[j]); 
                        }
                }
                ans = min(ans, diff); 
        }
        cout << ans << endl;
}