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
        int counts = 0; 
        for (int i = 0; i < n; i++) {
                int p, q; 
                cin >> p >> q;
                if (q - p >= 2) counts++; 
        }
        cout << counts << endl; 
}