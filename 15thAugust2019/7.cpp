#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, d;
        cin >> n >> d;
        int sum = 0; 
        for (int i = 0; i < n; i++) {
                int e; 
                cin >> e;
                sum += e;
        }
        if (sum + (n - 1) * 10 <= d) {
                int forJoker = d - sum; 
                cout << forJoker / 5 << endl; 
        } else {
                cout << -1 << endl; 
        }
}