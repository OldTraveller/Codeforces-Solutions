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
        string s; 
        cin >> s;
        if (n > 26) {
                cout << "-1" << endl; 
        } else {
                vector<int> countsChar(26, 0); 
                for (int i = 0; i < n; i++) {
                        countsChar[s[i] - 'a']++; 
                }
                int change = 0; 
                for (int i = 0; i < countsChar.size(); i++) {
                        if (countsChar[i]) {
                                change += (countsChar[i] - 1); 
                        }
                }
                cout << change << endl;
        }
}