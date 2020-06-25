#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

	// This is new comment
        int n; 
        cin >> n; 
        vector<LL> arr(n);
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        sort(arr.begin(), arr.end()); 
        cout << abs(arr[0] - arr[1]) << " " << abs(arr[0] - arr[n - 1]) << endl;
        for (int i = 1; i < n - 1; i++) {
                cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << " " << max(abs(arr[i] - arr[0]), abs(arr[n - 1] - arr[i])) << endl; 
        }
        cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]) << endl; 
}