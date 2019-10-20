#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int k, l, m, n, d; 
        cin >> k >> l >> m >> n >> d; 
        int counts = 0; 
        for (int i = 1; i <= d; i++) {
                if (i % k == 0) counts++; 
                else if (i % l == 0) counts++; 
                else if (i % m == 0) counts++; 
                else if (i % n == 0) counts++; 
        }
        cout << counts << endl; 
}