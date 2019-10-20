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
        int first = 1; 
        int last = n * n; 
        vector<pair<int, int>> p; 
        while (first < last) {
                p.push_back({first++, last--}); 
        }
        for (int i = 1; i <= p.size(); i++) {
                cout << p[i - 1].first << " " << p[i - 1].second << " "; 
                if (i % (n >> 1) == 0) cout << endl;
        }
}