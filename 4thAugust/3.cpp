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
        int n = (int)str.size(); 
        bool isMagic = 1; 
        int fours = 0; 
        bool one = 0; 
        for (int i = 0; i < n; i++) {
                if (str[i] == '1') {
                        one = 1; 
                        fours = 0; 
                } else if (str[i] == '4') {
                        if (!one) {
                                isMagic = 0; 
                                break; 
                        }
                        fours++;
                } else {
                        isMagic = 0; 
                        break; 
                }
                if (fours > 2) {
                        isMagic = 0; 
                        break;
                }
        }
        if (isMagic) cout << "YES" << endl;
        else cout << "NO" << endl; 
}