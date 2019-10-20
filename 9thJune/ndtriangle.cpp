#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    LL n;
    cin >> n; 
    vector<int> ele(n); 
    for (int i = 0; i < n; i++) {
        cin >> ele[i]; 
    }
    bool possi = 0; 
    sort(ele.begin(), ele.end());
    // a + b > c 
    for (int i = 1; i < n - 1; i++) {
        if (ele[i - 1] + ele[i] > ele[i + 1]) {
            possi = 1; 
            break; 
        }
    }
    if (possi) cout << "YES" << endl; 
    else cout << "NO" << endl;
}