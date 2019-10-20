#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int digitSum(int n) {
    int sum = 0; 
    while (n) {
        sum += n % 10; 
        n /= 10; 
    }
    return sum; 
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k; 
    cin >> k;
    int start = 1; 
    int ans = -1; 
    while (k) {
        if (digitSum(start) == 10) {
            ans = start; 
            k--; 
        }
        start++; 
    }
    cout << ans << endl; 
}