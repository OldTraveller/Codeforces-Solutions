#include <bits/stdc++.h>
using namespace std ;
typedef long long LL;
const double PI = 3.141592654 ;

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    cout.tie(nullptr) ;

    LL n, k; cin >> n >> k; 
    priority_queue<int, vector<int>, greater<int>> pq; 
    for (int i = 0; i < n; i++) {
        LL ele; cin >> ele; 
        pq.push(ele); 
    }  
    int first = pq.top(); 
    int ans = -1; 
    int counts = 0; 
    if (k == 0) ans = first - 1; 
    else {
        for (int i = 0; i < k - 1; i++) pq.pop(); 
        counts = k - 1; 
        int ele = pq.top(); 
        pq.pop(); 
        if (!pq.empty() and pq.top() == ele) ans = -1; 
        else ans = ele; 
    }
    if (ans < 1 or ans > 1e9) ans = -1;
    cout << ans << endl;
}