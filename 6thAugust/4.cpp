#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        LL t, s, x; 
        cin >> t >> s >> x;
        if (t == x) {
                cout << "YES" << endl; 
                return 0; 
        } else {
                LL rem = (x - t); 
                LL rem1 = (x - t - 1); 
                bool one = rem % s == 0; 
                bool two = rem1 % s == 0; 
                if (rem > 0 and rem1 > 0 and (one or two)) {
                        cout << "YES" << endl;
                } else {
                        cout << "NO" << endl;
                }
        }
}