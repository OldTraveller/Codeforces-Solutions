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
                int arr[n]; 
                for (int i = 0; i < n; i++) {
                        cin >> arr[i]; 
                }
                int sum = arr[0] + arr[n - 1]; 
                bool possi = 1; 
                for (int i = 0; i < (n >> 1); i++) {
                        if (arr[i] + arr[n - i - 1] != sum) {
                                possi = 0;
                                break;
                        }
                }       
                if (!possi) cout << "NO" << endl;
                else cout << "YES" << endl; 
        }
}