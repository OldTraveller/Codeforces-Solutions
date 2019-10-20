#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
typedef long long LL;
const double PI = 3.141592654;
typedef tree<int, null_type, less<int>,rb_tree_tag,
tree_order_statistics_node_update> ordered_set;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n;
        vector<int> rate(n); 
        for (int &a : rate) cin >> a; 
        for (int i = 0; i < n; i++) {
                int rank = 0; 
                for (int j = 0; j < n; j++) {
                        if (rate[j] > rate[i]) {
                                rank++; 
                        }
                }
                cout << rank + 1 << " "; 
        }
}