#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;

int main() {
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n, t; 
        cin >> n >> t;
        string str;
        cin >> str;
        for (int i = 0; i < t; i++) {
                for (int j = 0; j < n - 1;) {
                        if (str[j] == 'B' and str[j + 1] == 'G') {
                                swap(str[j], str[j + 1]); 
                                j += 2; 
                        } else {
                                j++; 
                        }
                }
        }
        cout << str << endl; 
}