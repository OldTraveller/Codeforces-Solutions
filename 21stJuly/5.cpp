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
        string str;
        cin >> str; 
        bool substart = 0; 
        int ans = 0; 
        for (int i = 0; i < n; i++) {
                int e;
                cin >> e;
                if (str[i] % 2 == 1) {
                        if (substart) {
                                substart = !substart; 
                                ans++; 
                        }
                } else {
                        if (substart) continue;
                        else {
                                substart = 1;
                        }
                }
        }
        cout << ans << endl;
}