#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std; 
using namespace __gnu_pbds; 
using LL = long long; 
#define ordered_set tree<LL, null_type, greater<LL>, rb_tree_tag,tree_order_statistics_node_update> 
  
int main() 
{
    int n; 
    cin >> n; 
    ordered_set o_set; 
    for (int i = 0; i < n; i++) {
            LL e; 
            cin >> e; 
            o_set.insert(e); 
    }
    int m; 
    cin >> m; 
    for (int i = 0; i < m; i++) {
            LL e;
            cin >> e;
            cout << o_set.order_of_key(e) << " "; 
    }
    cout << endl; 
} 