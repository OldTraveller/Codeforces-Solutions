#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n;
        cin >> n; 
        int one = 0; 
        int two = 0; 
        for (int i = 0; i < n; i++) {
                if (i % 7 < 2) {
                        one++; 
                }
                if (i % 7 >= 5) {
                        two++; 
                }
        }
        cout << two << " " << one << endl; 
}