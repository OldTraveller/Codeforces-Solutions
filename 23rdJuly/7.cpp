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
        int upper = 0; 
        int lower = 0; 
        for (char ch : str) {
                if (ch > 90) {
                        lower++; 
                } else {
                        upper++; 
                }
        }
        if (lower >= upper) {
                for (char ch : str) {
                        if (ch < 92) cout << char(ch + 32); 
                        else cout << ch;
                }
        } else {
                for (char ch : str) {
                        if (ch > 91) cout << char(ch - 32); 
                        else cout << ch; 
                }
        }
}