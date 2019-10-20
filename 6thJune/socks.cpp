#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int hispday = min(a, b); 
    int remaining = max(a, b) - hispday; 
    cout << hispday << " " << remaining/2 << endl; 
}