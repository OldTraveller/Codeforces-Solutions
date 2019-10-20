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
        for (int i = 0; i < n; i++) {
                char ch; 
                cin >> ch; 
                str += ch; 
        }
        str += str; 
        int local = 0; 
        int global = 0; 
        for (int i = 0; i < 2 * n; i++) {
                if (str[i] == '1') {
                        local++; 
                } else {
                        local = 0; 
                }
                global = max(global, local); 
        }
        cout << global << endl; 
}