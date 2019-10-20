#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, k; 
        cin >> n >> k; 
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
        }
        int add = 0; 
        for (int i = 0; i < n - 1; i++) {
                int e = arr[i] + arr[i + 1]; 
                if (e < k) {
                        add += (k - e); 
                        arr[i + 1] += (k - e); 
                }
        }
        cout << add << endl;
        for (int a : arr) {
                cout << a << " "; 
        }
        cout << endl; 
}