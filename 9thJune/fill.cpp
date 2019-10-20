#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    if (n & 1) cout << 0 << endl;
    else {
        n >>= 1; 
        cout << fixed << setprecision(0) << pow(2, n) << endl; 
    }
}