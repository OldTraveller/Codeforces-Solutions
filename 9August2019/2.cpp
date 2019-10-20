#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        double h, l;
        cin >> h >> l; 
        double ans = (l * l - h * h)/(2 * h); 
        cout << fixed << setprecision(10) << ans << endl;
}