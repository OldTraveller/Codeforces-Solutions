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
        int counts = 0; 
        for (int i = 0; i <= 1000; i++) {
                for (int j = 0; j <= 1000; j++) {
                        bool condition = i * i + j == n; 
                        condition = condition and (i + j * j == m); 
                        if (condition) counts++; 
                }
        }
        cout << counts << endl; 
}