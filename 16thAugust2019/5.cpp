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
        stack<string> stck; 
        string space = " "; 
        for (int i = 0; i <= n; i++) {
                string str = ""; 
                for (int k = 0; k < n - i; k++) {
                        str += space; 
                        str += space;
                }
                for (int k = 0; k < i; k++) {
                        str += to_string(k);
                        str += space; 
                }
                str += to_string(i); 
                str += space;
                for (int k = i - 1; k > 0; k--) {
                        str += to_string(k); 
                        str += space;
                }
                if (i != 0) {
                        str += to_string(0); 
                }
                if (i != n) {
                        stck.push(str); 
                }
                cout << str << endl; 
        }
        while (!stck.empty()) {
                cout << stck.top() << endl; 
                stck.pop(); 
        }
}