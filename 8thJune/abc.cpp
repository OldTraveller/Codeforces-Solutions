#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    LL a, b, c; 
    cin >> a >> b >> c; 
    LL more = min(a, b); 
    c += more; 
    a -= more;
    b -= more; 
    cout << c * 2 + (a > 0) + (b > 0) << endl; 
}