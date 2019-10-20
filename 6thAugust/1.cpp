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
        if (n > 26) {
                cout << "-1" << endl;
                return 0; 
        }
        int charCounts[26]; 
        memset(charCounts, 0, sizeof charCounts); 
        for (char ch : str) {
                charCounts[ch - 'a']++; 
        }
        int counts = 0; 
        for (int i = 0; i < 26; i++) {
                if (charCounts[i]) {
                        counts += charCounts[i] - 1; 
                }
        }
        cout << counts << endl; 
}