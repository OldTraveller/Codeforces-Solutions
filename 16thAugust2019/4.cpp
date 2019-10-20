#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        map<string, int> c; 
        int n; 
        cin >> n; 
        for (int i = 0; i < n; i++) {
                string str;
                cin >> str;
                c[str]++; 
        }
        if ((int)c.size() == 1) {
                cout << c.begin() -> first << endl; 
        } else {
                auto i = c.begin(); 
                pair<string, int> p = {i -> first, i -> second}; 
                i++; 
                if (i -> second > p.second) {
                        p = {i -> first, i -> second}; 
                }
                cout << p.first << endl; 
        }
}