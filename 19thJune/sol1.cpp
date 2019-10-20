#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    LL a, b, c, d;
    cin >> a >> b >> c >> d; 
    LL left = min(a, min(b, c)); 
    LL right = max(a, max(b, c)); 
    LL mid = (a + b + c) - left - right; 
    LL rightDist = mid + d; 
    LL leftDist = mid - d;
    LL total = 0; 
    if (right - mid < d) total += (rightDist - right); 
    if (mid - left < d) total += (left - leftDist); 
    cout << total << endl; 
}