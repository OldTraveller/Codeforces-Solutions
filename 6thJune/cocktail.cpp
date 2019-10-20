#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n; 
    double percentage = 0; 
    for (int i = 0; i < n; i++) {
        double per; cin >> per;
        percentage += per; 
    }
    cout << setprecision(6) << fixed << percentage/n << endl; 
}