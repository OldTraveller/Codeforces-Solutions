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
    int remaining = n; 
    int counts = 0;
    while(remaining and remaining != 3) {
        remaining -= 2; counts++; 
    }
    if (remaining) {
        cout << 1 + counts << endl;
        cout << 3 << " "; 
    } else cout << counts << endl; 
    while(counts--) cout << 2 << " "; 
}