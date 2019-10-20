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
    int minPrice = INT_MAX; 
    int totPrice = 0; 
    for (int i = 0; i < n; i++) {
        int a, p; 
        cin >> a >> p; 
        minPrice = min(minPrice, p); 
        totPrice += minPrice * a; 
    }
    cout << totPrice << '\n';
}