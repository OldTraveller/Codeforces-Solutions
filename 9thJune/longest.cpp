#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
const int MAX_SIZE = 100005; 
LL dp[MAX_SIZE]; 

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    dp[0] = 1; 
    LL incr = 1; 
    LL prev; cin >> prev; 
    for (int i = 1; i < n; i++) {
        LL curr; cin >> curr; 
        if (curr > prev) incr++; 
        else incr = 1;
        dp[i] = max(incr, dp[i - 1]); 
        prev = curr; 
    }
    cout << dp[n - 1] << endl; 
}