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
        LL sum = 0;
        LL maxi = 0;
        vector<LL> a(n); 
        for(int i = 0; i < n; i++) {
                cin >> a[i]; 
                sum += a[i]; 
                maxi = max(maxi, a[i]); 
        }
        if (sum % 2 == 1) {
                cout << "NO" << endl;
                return 0; 
        }
        sum = sum - maxi;
        if (sum < maxi) {
                cout << "NO" << endl; 
                return 0; 
        }
        cout << "YES" << endl; 
}