#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string a, b; 
        cin >> a >> b;
        int an = a.size(); 
        int bn = b.size(); 
        if (a == b) {
                cout << -1 << endl; 
        } else {
                cout << max(an, bn) << endl; 
        }
}