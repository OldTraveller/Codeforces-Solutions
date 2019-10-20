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
    int mt = 0, ct = 0; 
    for (int i = 0; i < n; i++) {
        int m, c; cin >> m >> c; 
        if (m > c) mt++; 
        else if (c > m) ct++; 
    }
    if (mt == ct) cout << "Friendship is magic!^^" << endl;
    else if (mt > ct) cout << "Mishka" << endl;
    else cout << "Chris" << endl; 
}