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
        string s; 
        cin >> s;
        int ans = 0; 
        for (int i = 0; i < n; i++) {
                if (s[i] % 2 == 0) {
                        ans += (i + 1); 
                }
        }
        cout << ans << endl; 
}