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
        vector<LL> arr(n); 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        sort(arr.begin(), arr.end()); 
        LL ans = 0L; 
        for (int i = 0; i < (n >> 1); i++) {
                LL sum = arr[i] + arr[n - 1 - i]; 
                ans += sum * sum; 
        }
        cout << ans << endl;
}