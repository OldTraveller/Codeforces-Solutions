#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        set<int> hori; 
        set<int> vert; 
        int n;
        cin >> n;
        for (int i = 1; i <= (n * n); i++) {
                int h, v;
                cin >> h >> v;
                bool condition = 
                hori.find(h) == hori.end() and 
                vert.find(v) == vert.end(); 
                if (condition) {
                        hori.insert(h); 
                        vert.insert(v);
                        cout << i << " "; 
                }
        }
}