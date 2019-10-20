#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, m; 
        cin >> n >> m; 
        int days = 0; 
        while (n) {
                days++; 
                if (n % m == 0) n++; 
                n--; 
        }
        cout << days << endl; 
}