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
        vector<int> radius(n); 
        for (int i = 0; i < n; i++) {
                cin >> radius[i]; 
        }
        int index = -1; 
        for (int i = 0; i < n; i++) {
                if (radius[i] == n) {
                        index = i; 
                        break; 
                }
        }
        bool possi = 1; 
        for (int i = 1; i < index; i++) {
                if (radius[i] < radius[i - 1]) {
                        possi = 0;
                }
        }
        for (int i = index + 1; i < n - 1; i++) {
                if (radius[i] < radius[i + 1]) {
                        possi = 0; 
                }
        }
        if (!possi) cout << "NO" << endl;
        else cout << "YES" << endl; 
}