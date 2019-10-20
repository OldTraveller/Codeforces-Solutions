#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c; 
    cin >> a >> b >> c; 
    int one = (a - (b + c)); 
    int two = (b - (a + c)); 
    int three = (c - (a + b)); 
    if (one < 0 and two < 0 and three < 0) {
        cout << 0 << endl; 
    } else {
        one = abs(one); 
        two = abs(two); 
        three = abs(three); 
        cout << 1 + min(one, min(two, three)) << endl; 
    }
}