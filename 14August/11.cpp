#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int a, b; 
        cin >> a >> b; 
        int ans = 0; 
        while (a) {
                ans++;
                if (ans % b == 0) a++; 
                a--; 
        }
        cout << ans << endl; 
}