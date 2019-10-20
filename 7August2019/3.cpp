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
                LL n, k;
                cin >> n >> k; 
                LL counts = 0L;
                while (n != 0) {
                        if (n % k == 0) {
                                n /= k; 
                                counts++; 
                        } else {
                                LL x = (n % k); 
                                counts += x; 
                                n -= x; 
                        }
                }
                cout << counts << endl; 
        }
}