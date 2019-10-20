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
        vector<pair<char, int>> pci; 
        pci.push_back({str[0], 1}); 
        for (int i = 1; i < (int)str.length(); i++) {
                if (str[i] == pci.back().first) {
                        pci.back().second++; 
                } else {
                        pci.push_back({str[i], 1}); 
                }
        }
        bool danger = 0;
        for (auto i : pci) {
                if (i.second >= 7) {
                        danger = 1; 
                }
        }
        if (danger) {
                cout << "YES" << endl; 
        } else {
                cout << "NO" << endl; 
        }
}