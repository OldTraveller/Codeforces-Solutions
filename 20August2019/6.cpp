#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        string s;
        cin >> s; 
        int ones = 0; 
        for (int i = (int)s.size() - 1; i >= 0; i--) {
                if (s[i] == '1') ones++; 
        }
        if (ones == 0) {
                cout << 0 << endl; 
        } else {
                int ans = 0; 
                for (int i = (int)s.size() - 1; i >= 0; i -= 2) {
                        ans++;
                        if (i == 0 and s[i] == '1' and ones == 1) {
                                ans--; 
                        } 
                }                
                cout << ans << endl; 
        }
}