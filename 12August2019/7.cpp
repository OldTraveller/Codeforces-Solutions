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
        vector<int> ans(n); 
        fill(ans.begin(), ans.end(), 1);        
        for (int i = 1; i < n; i++) {
                if (arr[i - 1] < arr[i]) {
                        ans[i]++; 
                }
        }
        for (int i = n - 2; i >= 0; i--) {
                if (arr[i + 1] < arr[i] and ans[i] < ans[i + 1]) {
                        ans[i] = ans[i + 1] + 1; 
                }
        }
        int fin = accumulate(ans.begin(), ans.end(), 0); 
        cout << fin << endl; 
}