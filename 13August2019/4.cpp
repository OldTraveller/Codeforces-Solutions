#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int q;
        cin >> q;
        while (q--) {
                int n; 
                cin >> n; 
                vector<int> arr(4 * n); 
                for (int &a : arr) {
                        cin >> a; 
                }
                sort(arr.begin(), arr.end()); 
                bool possi = 1;
                int prod = arr[0] * arr[4 * n - 1]; 
                for (int i = 0; i < (4 * n/2); i += 2) {
                        if (arr[i] == arr[i + 1] and arr[4 * n - 1 - i] == arr[4 * n - 1 - i - 1]) {
                                if (arr[i] * arr[4 * n - 1 - i] == prod) continue;
                                else {
                                        possi = 0; 
                                        break;
                                }
                        } else {
                                possi = 0; 
                                break; 
                        }
                }
                if (!possi) cout << "NO" << endl;
                else cout << "YES" << endl; 
        }
}