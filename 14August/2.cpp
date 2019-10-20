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
        int found = 0;
        for (int i = 0; i < (int)str.size(); i++) {
                if (str[i] == 'h' and found == 0) {
                        found++; 
                } else if (str[i] == 'e' and found == 1) {
                        found++; 
                } else if (str[i] == 'l' and found == 2 or found == 3) {
                        found++; 
                } else if (str[i] == 'o' and found == 4) {
                        found++; 
                } else {
                        continue; 
                }
        }
        if (found == 5) {
                cout << "YES" << endl;
        } else {
                cout << "NO" << endl; 
        }
}