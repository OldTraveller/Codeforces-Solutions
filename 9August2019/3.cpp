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
        vector<int> arr(n << 1); 
        for (int i = 0; i < (n << 1); i++) {
                cin >> arr[i]; 
        }
        sort(arr.begin(), arr.end()); 
        if (arr[0] == arr[(n << 1) - 1]) {
                cout << "-1" << endl; 
        } else {
                for (int a : arr) {
                        cout << a << " "; 
                }
        }
}