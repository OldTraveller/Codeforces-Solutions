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
        for (int i = 0; i < (n >> 1); i++) {
                if (i % 2 == 0) {
                        swap(arr[i], arr[n - 1 - i]); 
                }
        }
        for (LL a : arr) cout << a << " "; 
        cout << "\n"; 
}