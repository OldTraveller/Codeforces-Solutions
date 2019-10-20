#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string one, two; 
        cin >> one >> two; 
        reverse(two.begin(), two.end()); 
        if (one == two) cout << "YES" << endl;
        else cout << "NO" << endl; 
}