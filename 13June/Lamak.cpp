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
    vector<int> mins(n); 
    mins[0] = 5; 
    for (int i = 1; i < n; i++) {
        mins[i] = 5*(i + 1) + mins[i - 1]; 
    }
    auto it = upper_bound(mins.begin(), mins.end(), 240 - k); 
    cout << it - mins.begin() << endl; 
}