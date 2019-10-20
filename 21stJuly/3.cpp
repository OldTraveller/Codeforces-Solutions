#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t;
        cin >> t;
        while (t--) {
                int x;  
                cin >> x;
                int sum = 0; 
                if (x & 1) {
                        sum = 1; 
                        x -= 3;
                }
                sum += (x / 2); 
                cout << sum << endl; 
        }
}