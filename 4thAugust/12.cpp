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
        int candies = 0; 
        int days = 0; 
        for (int i = 0; i < n; i++) {
                int e; 
                cin >> e; 
                candies += e; 
                days++; 
                int sub = (int)min(8, candies); 
                candies -= sub;  
                k -= sub;
                if (k <= 0) {
                        break; 
                }
        }
        if (k > 0) {
                cout << -1 << endl; 
        } else {
                cout << days << endl;
        }
}