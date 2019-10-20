#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL n, t, c;
        cin >> n >> t >> c; 
        LL ranges[n]; 
        memset(ranges, 0, sizeof ranges); 
        int bucket = 0; 
        for (int i = 0; i < n; i++) {
                LL sev;
                cin >> sev;
                if (sev > t) {
                        bucket++; 
                } else {
                        ranges[bucket]++; 
                }
        }
        LL totWays = 0; 
        for (int a : ranges) {
                if (a and a >= c) {
                        totWays += (a - c + 1);
                }
        }
        cout << totWays << endl;
}