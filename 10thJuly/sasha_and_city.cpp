#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, v; 
    cin >> n >> v;
    int fuelRequired = n - 1; 
    if (fuelRequired <= v) {
        cout << n - 1 << endl; 
        return 0; 
    }
    int fuel = v - 1;
    for (int i = 1; i <= n - v; i++) {
        fuel += i; 
    }
    cout << fuel << endl; 
}