#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int a, b, n; 
        cin >> a >> b >> n; 
        bool simon = 1; 
        for (int i = 0; ; i++) {
                if (i % 2 == 0) {
                        int gcd = __gcd(n, a); 
                        if (gcd > n) {
                                simon = 0; 
                                break; 
                        }
                        n -= gcd;
                } else {
                        int gcd = __gcd(n, b); 
                        if (gcd > n) {
                                simon = 1;
                                break; 
                        } 
                        n -= gcd;
                }
        }
        if (simon) cout << "0" << endl;
        else cout << "1" << endl; 
}