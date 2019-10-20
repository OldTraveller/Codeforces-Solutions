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
        vector<int> seq(n); 
        vector<int> sec(k); 
        vector<int> pos; 
        for (int i = 0; i < n; i++) {
                cin >> seq[i]; 
                if (seq[i] == 0) pos.push_back(i); 
        }
        for (int i = 0; i < k; i++) {
                cin >> sec[i];
        }
        sort(sec.begin(), sec.end(), greater<int>()); 
        for (int i = 0; i < pos.size(); i++) {
                seq[pos[i]] = sec[i]; 
        }
        bool hitagi = 1;
        for (int i = 1; i < n; i++) {
                if (seq[i] <= seq[i - 1]) {
                        hitagi = 0; 
                        break; 
                }
        }
        if (!hitagi) cout << "Yes" << endl; 
        else cout << "No" << endl; 
}