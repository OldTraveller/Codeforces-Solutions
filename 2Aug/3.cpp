#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int y, w; 
        cin >> y >> w; 
        int maxi = max(y, w); 
        int win = 6 - maxi + 1; 
        int gcd = __gcd(win, 6); 
        cout << win / gcd << "/" << 6 / gcd << endl; 
}