#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
typedef long long LL;
const double PI = 3.141592654;
using ordered_set = tree<int, null_type, less<int>, rb_tree_tag, 
                        tree_order_statistics_node_update>; 


int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        ordered_set s; 
        for (int i = 10; i >= 0; i--) {
                s.insert(i * i); 
        }
        cout << *s.find_by_order(4) << endl; 
}