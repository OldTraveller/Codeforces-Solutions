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
        LL mini = LLONG_MAX; 
        LL maxi = LLONG_MIN; 
        for (int i = 0; i < n; i++) {
                mini = min(mini, arr[i]); 
                maxi = max(maxi, arr[i]); 
        }
        int counts = 0; 
        for (int i = 0; i < n; i++) {
                if (arr[i] == mini or arr[i] == maxi) continue; 
                else counts++; 
        }
        cout << counts << endl; 
}