#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, m;
        cin >> n >> m; 
        int curr = 1; 
        LL ans = 0L; 
        for (int i = 0; i < m; i++) {
                int e; 
                cin >> e; 
                if (curr <= e) {
                        ans += (e - curr); 
                        curr = e;
                } else {
                        ans += (n - curr); 
                        ans += (e - 1); 
                        ans++; 
                        curr = e;
                }
        }
        cout << ans << endl; 
}