#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> planks(n); 
                for (int i = 0; i < n; i++) {
                        cin >> planks[i]; 
                }
                int counts = 0;
                sort(planks.begin(), planks.end());
                int minSide = min(planks[n - 1], planks[n - 2]); 
                if (minSide == 1) {
                        cout << 0 << endl; 
                } else {
                        cout << min(n - 2, minSide - 1) << endl;
                }

        }
}