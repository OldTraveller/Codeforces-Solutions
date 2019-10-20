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
        string str;
        cin >> str;
        unordered_set<int> cannot; 
        int s = -1; 
        int d = -1; 
        for (int i = 0; i < (int)str.size(); i++) {
                if (str[i] == 'G') s = i; 
                if (str[i] == 'T') d = i; 
                if (str[i] == '#') cannot.insert(i); 
        }
        for (int i = s; i < n; i += k) {
                if (cannot.find(i) != cannot.end()) break;
                else {
                        if (i == d) {
                                cout << "YES" << endl;
                                return 0; 
                        }
                }
        }
        for (int i = s; i >= 0; i -= k) {
                if (cannot.find(i) != cannot.end()) break; 
                else {
                        if (i == d) {
                                cout << "YES" << endl; 
                                return 0; 
                        }
                }
        }
        cout << "NO" << endl; 
}