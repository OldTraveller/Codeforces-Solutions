#include <bits/stdc++.h>
using namespace std ;
typedef long long LL ;
const double PI = 3.141592654 ;

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie(nullptr) ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    cout.tie(nullptr) ;

    LL n, k; 
    cin >> n >> k; 
    vector<LL> values(n); 
    for (int i = 0; i < n; i++) {
        cin >> values[i]; 
    }
    LL ans = -1;
    sort(values.begin(), values.end()); 
    if (k == 0) {
        ans = values[0] - 1; 
    } else {
        ans = values[k - 1]; 
    }
    int counts = 0; 
    for (LL a : values) {
        if (a <= ans) counts++; 
    }
    if (counts != k or ans < 1 or ans > 1e9) ans = -1; 
    cout << ans << endl; 
}