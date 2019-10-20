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
        vector<int> ans; 
        for (int i = 0; i < n; i++) {
                int e; 
                cin >> e;
                if (e == 1) ans.push_back(e); 
                else ans.back()++; 
        }
        cout << ans.size() << endl;
        for (int a : ans) cout << a << " "; 
}