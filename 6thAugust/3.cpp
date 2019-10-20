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
        int mini, maxi; 
        mini = maxi = -1; 
        for (int i = 0; i < n; i++) {
                cin >> arr[i]; 
                if (arr[i] == 1) mini = i;
                if (arr[i] == n) maxi = i; 
        }
        int one = max(mini, maxi); 
        int two = max(n - 1 - mini, n - 1 - maxi); 
        int ans = max(one, two); 
        cout << ans << endl;
}