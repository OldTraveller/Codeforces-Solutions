#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> height(n); 
    for (int& a : height) cin >> a; 
    int sum = 0; 
    for (int i = 0; i < k; i++) {
        sum += height[i]; 
    }
    int min_sum = sum; 
    int index = 1; 
    /* SLIDING WINDOW */ 
    for (int i = 1; i + k - 1 < n; i++) {
        sum -= height[i - 1]; 
        sum += height[i + k - 1]; 
        if (sum < min_sum) {
            index = i + 1; 
            min_sum = sum; 
        }
    }
    // cout << "MIN SUM : " << min_sum << endl;
    cout << index << endl; 
}