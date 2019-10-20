#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, k; 
        cin >> n >> k; 
        vector<int> imp; 
        int luck = 0; 
        for (int i = 0; i < n; i++) {
                int c, e; 
                cin >> c >> e; 
                if (e) {
                        imp.push_back(c); 
                } else {
                        luck += c; 
                }
        }
        sort(imp.begin(), imp.end(), greater<int>()); 
        for (int i = 0; i < n and i < k; i++) {
                luck += imp[i]; 
        }
        for (int i = k; i < n; i++) {
                luck -= imp[i]; 
        }
        cout << luck << endl; 
}