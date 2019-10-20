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
        LL sum = 0L;
        LL smallestOdd = LONG_LONG_MAX; 
        for (int i = 0; i < n; i++) {
                LL ele; 
                cin >> ele;
                sum += ele; 
                if (ele & 1 and smallestOdd > ele) {
                        smallestOdd = ele; 
                }
        }
        if (sum & 1) {
                cout << (sum - smallestOdd) << endl;
        } else {
                cout << sum << endl; 
        }
}