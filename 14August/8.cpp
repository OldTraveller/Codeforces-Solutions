#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        string str;
        cin >> str;
        string ans = "1"; 
        for (int i = 0; i < (int)str.size();) {
                if (i + 2 < (int)str.size()) {
                        if (str[i] == 'W' and str[i + 1] == 'U' and str[i + 2] == 'B') {
                                if (ans.back() == '1') {
                                        i += 3; 
                                        continue; 
                                }
                                if (ans.back() != ' ') {
                                        ans += " "; 
                                }
                                i += 3;
                        } else {
                                ans += str[i]; 
                                i++; 
                        }
                } else {
                        ans += str[i]; 
                        i++; 
                }
        }
        for (int i = 1; i < ans.size(); i++) {
                cout << ans[i]; 
        }
        cout << "\n"; 
}