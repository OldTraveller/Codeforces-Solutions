#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, height; 
    cin >> n >> height; 
    int counts = 0; 
    for (int i = 0; i < n; i++) {
        int h; cin >> h; 
        if (h > height) counts++; 
    }
    cout << counts * 2 + (n - counts) << endl; 
}