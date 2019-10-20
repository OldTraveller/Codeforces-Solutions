#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int k; 
        cin >> k; 
        vector<int> months(12); 
        for (int &a : months) cin >> a; 
        int _k = 0; 
        sort(months.begin(), months.end(), greater<int>()); 
        int ans = 0; 
        for (int i = 0; i < 12; i++) {
                if (_k < k) {
                        ans++; 
                        _k += months[i]; 
                } else {
                        break; 
                }
        }
        if (_k < k) cout << "-1" << endl; 
        else {
                cout << ans << endl; 
        }
}