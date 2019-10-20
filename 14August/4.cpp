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
        int x, y, z; 
        x = y = z = 0; 
        for (int i = 0; i < n; i++) {
                int _x, _y, _z;
                cin >> _x >> _y >> _z; 
                x += _x; 
                y += _y; 
                z += _z; 
        }       
        bool stable = x == 0 and y == 0 and z == 0; 
        if (stable) {
                cout << "YES" << endl;
        } else {
                cout << "NO" << endl; 
        }       
}