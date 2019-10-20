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
        bool op = 0; 
        for (char ch : str) {
                if (ch == 'H' or ch == 'Q' or ch == '9') {
                        op = 1; 
                        break; 
                }
        }
        if (op) cout << "YES" << endl;
        else cout << "NO" << endl; 
}