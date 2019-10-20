#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int sum = 1; 
    for (int i = 1; i < n; i++) {
        sum += i*4; 
    }
    cout << sum << endl; 
}