#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a1, a2;
    cin >> a1 >> a2; 
    int counts = 0; 
    while (a1 > 0 and a2 > 0) {
        if (a1 <= a2) {
            a1 += 1; 
            a2 -= 2; 
        } else {
            a1 -= 2; 
            a2 += 1; 
        }
        counts++; 
    }
    cout << counts << endl; 
}