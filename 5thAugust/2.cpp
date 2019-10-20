#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, b, d;
        cin >> n >> b >> d;
        int counts = 0; 
        int total = 0; 
        for (int i = 0; i < n; i++) {
                int e; 
                cin >> e;
                if (e > b) continue;
                else {
                        total += e;
                        if (total > d) {
                                total = 0; 
                                counts++; 
                        } 
                }
        }
        cout << counts << endl; 
}